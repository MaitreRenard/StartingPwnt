#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//gcc -no-pie -o pwnc pwnc.c
bool a = false, b = false, c = false;

void holclc(int x) {
	if (x == 4 && !a) {
		puts("c) Pas maaaal");
		c = true;
	} else {
		puts("C'est loupé");
	}
}

void holblb(int x, int y, int z) {
	if (x == 24 && c) {
		puts("b) Pas maaaal");
		b = true;
	} else {
		puts("C'est loupé");
	}
}

void holala(int x, int y) {
	if (x*y == 120) {
		puts("a) Pas maaaal");
		a = true;
	} else {
		puts("C'est loupé");
	}
}

void win() {
	if (a && b && c) {
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
