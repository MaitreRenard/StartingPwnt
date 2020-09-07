#include <stdio.h>
#include <stdlib.h>

//gcc -no-pie -o pwnb pwnb.c

void win(int n) {
	if (n == 4) {
		system("/bin/sh");
	} else {
		puts("C'est loupé");
	}
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
