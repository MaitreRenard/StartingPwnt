#include <stdio.h>
#include <stdlib.h>

//gcc -no-pie -o pwnd pwnd.c

void pwnme() {
	char mein_buff[16];
	gets(mein_buff);
}

int main() {
	puts("Salut à tous !");
	pwnme();
	return 0;
}
