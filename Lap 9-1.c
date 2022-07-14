#include<stdio.h>
#include<ctype.h>
#define MONTHS_SIZE 12
#define DAYS_SIZE 7
int main(void)
{
	const char* month[MONTHS_SIZE] = { "January","February","March","April","May","June","July","August","September","Octobe","November","December" };
	const char* day[DAYS_SIZE] = { "Sunday","Monday","Tuseday","Wednesday","Thursday","Friday","Saturday" };

	for (size_t i = 0; i < MONTHS_SIZE; i++)
	{
		const char* mPtr = month[i];
		for (; *mPtr != '\0'; ++mPtr)
		{
			printf("%c", toupper(*mPtr));
		}
		puts("");
	}
	puts("---------");
	for (size_t i = 0; i < DAYS_SIZE; i++)
	{
		const char* dPtr = day[i];
		for (; *dPtr != '\0'; ++dPtr)
		{
			printf("%c", toupper(*dPtr));
		}
		puts("");
	}
	return 0;
}

