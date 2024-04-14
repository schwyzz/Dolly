#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <conio.h>
int main() {
	setlocale(LC_ALL, "");
	printf("\n   Hello Dolly!\n  Максим привет как дела и как там вообще чо.\n\n");
	getch();
	std::cout << "\n Максим, для выхода нажми кнопку.\n\n";
	getch();
	return 0;
}