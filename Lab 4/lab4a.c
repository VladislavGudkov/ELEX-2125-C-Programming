//Title: ELEX 2125 Lab 4A
//Name: Vladislav Gudkov
//Student ID: A00921638
//Set: A
//Date: Jan. 29, 2018



/* Print the first 20 numbers in the Fibonacci sequence
	Equation is:
		iVal = iVal_m1 + iVal_m2
		where "m" means "minus" in the variable names */

#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

#include <stdio.h>
#include <conio.h>


int main(void) //start program
{

	printf("Lab 4_A - My name is Vladislav Gudkov set A.\n");	//intro
	printf("This program prints the first 20 values in the Fibonacci sequence.\n\n");	//intro

	int count = 3;	//initialize variable  count
	int iVal_m2 = 0; // initiliaze varaible iVal_m2
	int iVal_m1 = 1; // initiliaze varaible iVal_m1
	
	printf("%d \n", iVal_m2); 
	printf("%d \n", iVal_m1); 
	while (count <= 20) //startwhile 
	{
		int iVal = iVal_m1 + iVal_m2; //initialize variable iVal as the sum of iVal_m1 and iVal_m2
		printf("%d \n", iVal); 
		iVal_m2 = iVal_m1;	//asign current value of iVal_m1 to iVal_m2
		iVal_m1 = iVal;		//asign current value of iVal to iVal_m1
		count = count++;	
	} //endwhile 

	printf("Press any key to exit...");
	getch();

	return 0;
} //end program