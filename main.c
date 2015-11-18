#include <stdio.h>
#include <math.h>
#include <string.h>

typedef char *string;
	// variables and constants
	int daysInMonth[13]=
		{0,31,29,31,30,31,30,31,31,30,31,30,31};	//array with number days in all monthes
	string monthName[13]=
		{	"Err",
			"Jan",
			"Feb",
			"Mar",
			"Apr",
			"May",
			"Jun",
			"Jul",
			"Aug",
			"Sep",
			"Oct",
			"Nov",
			"Des"};
	string daysOfWeek[8]=
		{	"---",
			"Mon",
			"Tue",
			"Wed",
			"Thu",
			"Fri",
			"Sat",
			"Sun"};
	unsigned short currentMonth=0;		//this var is number of month in arr`s daysInMonth & monthName 
	unsigned short startWeekNumber=0;	//week day of 1st january


//-------------------------functions--------------------------------

int printMonth(int weekDay, int month)
	{
		int i=0;
		for (i;i<8;i++)
		{
			printf("%s\t",daysOfWeek[i]);
		};
		int firstDay=
		for ()
	};
//----------------------------main----------------------------------
int main()
{
 	printMonth(1,2);
	return 0;
}
