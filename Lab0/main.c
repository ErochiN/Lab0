#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	puts("������� Enter ��� �����������...");

	getchar(); // �������� ������� Enter

	puts("����������� ���������");
}