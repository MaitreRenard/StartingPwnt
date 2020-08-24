#include <stdio.h>
#include <stdlib.h>

//gcc -no-pie -o pwna pwna.c

void win() {
	system("/bin/sh");
}

void pwnme() {
	char mein_buff[16];
	gets(mein_buff);
}

int main() {
	puts("Salut à tous !");
	pwnme();
	return 0;
}
