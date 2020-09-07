#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//gcc -static -no-pie -o pwne pwne.c
const static char *ptit_cadeau = "/bin/sh";

void pwnme() {
	char mein_buff[16];
	gets(mein_buff);
}

int main() {
	puts("Salut à tous !");
	pwnme();
	return 0;
}
