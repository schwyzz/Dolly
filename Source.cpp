#include <stdio.h>
#include <cstdio>
#include <locale.h>
#include <clocale>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
///#include <conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	printf("  Hello Dolly!\n Максим привет как дела и как там вообще чо.");
	///getch();
	std::cin.get();
	///scanf("d");
	cout << "\nМаксим, для выхода нажми Enter\n";
	scanf("f");
	///cin.get();
	///system("pause");
	return 0;
}