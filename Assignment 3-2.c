/*Ruba Alsulami  2110618  E2
3 October 2021
The program calculate the value of PI from the infinite series*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592
//function main begins program execution
int main() 
{
	//define variables
	double EPSION = 0.000009;//approximated between each value
	double firstPi = 4;// first number of the series
	int i = 1;//counter to count serirs
	  
	while (fabs(PI - firstPi) > EPSION)// while loop to count number
	{
		printf("\nTERM %d    PI VALUE  ", i, firstPi);
		
		if (i % 2 == 1)// check if the number is odd    
		{
			firstPi = firstPi- 4.0 / (2*i + 1);//numder is odd
		}//end if
		else
		{
			firstPi =firstPi+  4.0 / (2*i + 1);//number is even  
		}//end else
		i++;//increment
		printf("%lf", firstPi);//display serirs
	}
	return 0;
}//end function main
