#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//gcc -no-pie -o pwnf pwnf.c
void win() {
	system("echo 'Eh ben super hein !'");
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
