#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//gcc -o pwnc pwnc.c
int main(int argc, char** argv) {
	if (argc > 1) {
		int val = 4;
		if (strlen(argv[1]) <= 6) {
			printf(argv[1], &val);

			if (val == 0x42) {
				system("/bin/sh");
			}
		} else {
			puts("Too long !");
		}
	} else {
		printf("%s <payload>\n", argv[0]);
	}
	return 0;
}
