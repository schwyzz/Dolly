#include <stdio.h>
#include <cstdio>
#include <locale.h>
#include <clocale>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
//#include <conio.h> // Это в линукс visual studio code не работает
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	printf("  Hello Dolly!\n Привет Максим как дела и как там вообще чо.\n \n  Test fixing.\n");
	printf(" Hello Dolly! Это тест линукс visual studio code на предмет кодировки текста и ещё фиксаций.");
	//_getch(); // Это в линукс visual studio code не работает
	std::cin.get();
	cin.get();
	scanf("d"); // здесь вместо  scanf_s так как на линуксе надо scanf
	system("pause");
	return 0;
}