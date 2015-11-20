#include <stdio.h>
#include <math.h>
#include <string.h>

typedef char *string;

//--------------------variables and constants-----------------------

	int daysInMonth[13]=
		{0,31,29,31,30,31,30,31,31,30,31,30,31};									//array with number days in all monthes
	string monthName[13]=
		{	"Err",
			"January",
			"February",
			"March",
			"April",
			"May",
			"Jun",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December"};
	string daysOfWeek[8]=
		{	"-W-\t",
			"Mon",
			"Tue",
			"Wed",
			"Thu",
			"Fri",
			"Sat",
			"Sun"};
	int currentMonth=0;																//this var is number of month in arr`s daysInMonth & monthName 
	int startWeekDayName=5;															//week day of 1st january
	int currentDayNumber=0;															//number of 1st day in chosen month
	int currentWeekNumber=0;														//number of first week in chosen month

//-------------------------functions--------------------------------
int inputMonth()
	{
		for(int i=1;i<13;i++)
			{
				printf("%i\t - \t%s\n",i,monthName[i]);
			};
		printf("\nChoose the month by its number: ");
		scanf("%i",&currentMonth);
		return 0;
	};
int printMonth(int weekDay, int month)												//printing the month
	{
		int firstDayName=0;
		firstDayName=(currentDayNumber-1+weekDay)%7;
		if(firstDayName==0)
			{
				firstDayName=7;
			};
		printf("\nThe calendar for %s is:\n\n",monthName[currentMonth]);
		for (int i=0;i<8;i++)																			//header, names of weekdays
		{
			printf("%s\t",daysOfWeek[i]);
		};
		int weekNumber=currentWeekNumber;
		for (int i=1;i<=daysInMonth[currentMonth];i++)
			{
				int ii=1;
				printf("\n%i\t\t",weekNumber);
				for(ii;ii<=7;ii++)
					{
						for(firstDayName;firstDayName>1;firstDayName--)
							{
								printf("\t");
								ii++;
							};
						if(i>daysInMonth[currentMonth])
							{
								continue;
							}
						printf(" %i \t",i);
						i++;
					};
				//printf("|");	
				weekNumber++;
				ii=1;
				i--;
			};
		return 0;
	};
int calculateDayWeekNumber(int curMon)												//changes currentDayNumber and currentWeekNumber
	{
		int daySumma=0;
		for(int i=1;i<curMon;i++)
			{
				daySumma+=daysInMonth[i];
			}
		currentDayNumber=daySumma+1;
		currentWeekNumber=currentDayNumber/7+1;
		return 0;
	};
/*
int chekANumber()
	{
		int a;
		
		//getchar();
		for(;;)
			{
				scanf(%i,&a);
				switch (a)
				{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
					case 7:
					case 8:
					case 9:
					case 10:
					case 11:
					case 12:
						return a;
						break;
					default:
						printf("Please, enter a number from 1 to 12!!!\n");
						continue;
				}
			};
*/

//----------------------------main----------------------------------

int main()
{
	inputMonth();
	
	//currentMonth=chekANumber();
	
	calculateDayWeekNumber(currentMonth);
	
	printMonth(startWeekDayName,currentMonth);
	
	return 0;
}
