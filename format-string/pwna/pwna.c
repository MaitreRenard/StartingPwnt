#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_LEN 0xf
volatile const int secret_key = 4;

//gcc -o pwna pwna.c
int main(int argc, char** argv) {
	if (argc > 1) {
		char res[BUF_LEN];

		//Check that the user input doesn't contain the secret key
		char *too_ez = strchr(argv[1], '4');
		if (too_ez == NULL) {
			snprintf(res, BUF_LEN, argv[1]);
			if (strcmp("4",res) == 0) {
				system("/bin/sh");
			} else {
				printf("Free data:%s", res);
			}
		} else {
			puts("Nope !");
		}
	} else {
		printf("%s <payload>\n", argv[0]);
	}
	return 0;
}
