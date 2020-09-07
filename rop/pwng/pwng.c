#include <stdio.h>
#include <stdlib.h>

//gcc -static -no-pie -o pwng pwng.c
void pwnme() {
	char mein_buff[16];
	gets(mein_buff);
}

int main() {
	puts("Salut à tous !");
	pwnme();
	return 0;
}
