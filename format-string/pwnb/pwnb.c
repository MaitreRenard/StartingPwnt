#include <stdio.h>
#include <stdlib.h>

//gcc -o pwnb pwnb.c
int main(int argc, char** argv) {
	if (argc > 1) {
		int val = 4;
		printf(argv[1], &val);

		if (val == 0x42) {
			system("/bin/sh");
		}
	} else {
		printf("%s <payload>\n", argv[0]);
	}
	return 0;
}
