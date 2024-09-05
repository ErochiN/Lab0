#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	puts("Нажмите Enter для продолжения...");

	getchar(); // ожидание нажатия Enter

	puts("Продолжение программы");
}