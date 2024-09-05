#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	puts(" __  __    __  __    __  __");
	puts("|  | __|  |  | __|  |  ||__");
	puts("|__||__   |__| __|  |__||__|");

	return 0;
}