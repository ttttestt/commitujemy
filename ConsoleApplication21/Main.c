#include <stdio.h>
#include <stdlib.h>

void ShowDate(struct date a)
{
	printf("a");
}
struct date
{
	int year;
	int month;
	int day;

};

int Main()
{


	struct date today;
	today.year = 2014;
	today.month = 11;
	ShowDate(today);
	system("pause");

}

