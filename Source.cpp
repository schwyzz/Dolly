#include <stdio.h>
#include <cstdio>
#include <locale.h>
#include <clocale>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	printf("  Hello Dolly!\n Максим привет как дела и как там вообще чо.");
	_getch();
	std::cin.get();
	cin.get();
	scanf_s("d");
	system("pause");
	return 0;
}