#include <stdio.h>
#include <stdlib.h>

//gcc -o pwnb pwnb.c
int main(int argc, char** argv) {
	int val = 4;
	printf(argv[1], &val);

	if (val == 0x42) {
		system("/bin/sh");
	}
	return 0;
}
