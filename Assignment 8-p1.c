/* Ruba Alsulami  2110618  E2
23 November 2021
The program will find out if the Address stored in lPtr is the same address of value1
*/

#include <stdio.h>
int main()
{
	//Define Variables
	long int value1 = 200000;//value1 has been initialized to 200000
	long int value2;
	long int* lptr;//Define the variable lPtr to be a pointer to an object of type long

	lptr = &value1;//Assign the address of variable value1 to pointer variable lPtr
	printf("The value pointed to by lPtr is : %d\n", *lptr);//Print the value of the object pointed to by lPtr
	puts("");
	value2 = *lptr;//Assign the value of the object pointed to by lPtr to variable value2

	printf("The value of value2 : %d\n", value2); // the value of value2
	puts("");
	printf("The Address of value1 : %p \n", &value1);// the address of value1
	puts("");
	printf("The Address stored in lPtr : %p \n", lptr);// the address stored in lPtr
	puts("");
	printf("The Address stored in lPtr is the same address of value1");//address of lPtr us the same address af value1
	puts("");

	return 0;
}

