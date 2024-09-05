#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void name()
{
	puts("\t\t\t\t   *******************************************");
	puts("\t\t\t\t   *                                         *");
	puts("\t\t\t\t   * тема: Разработка консольного приложения *");
	puts("\t\t\t\t   *               Выполнил Ерохин С.Ю       *");
	puts("\t\t\t\t   *                                         *");
	puts("\t\t\t\t   *******************************************");
}

void data()
{
	puts(" __  __    __  __    __  __");
	puts("|  | __|  |  | __|  |  ||__");
	puts("|__||__   |__| __|  |__||__|");
}

void main()
{
	setlocale(LC_CTYPE, "RUS");

	name();
	data();

	return 0;
}