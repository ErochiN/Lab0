#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void name()
{
	puts("\t\t\t\t   *******************************************");
	puts("\t\t\t\t   *                                         *");
	puts("\t\t\t\t   * ����: ���������� ����������� ���������� *");
	puts("\t\t\t\t   *               �������� ������ �.�       *");
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