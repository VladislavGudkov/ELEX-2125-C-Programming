//Modified by: Vladislav Gudkov
//ID: A00921638
//Set: B
//Date: Jan. 15, 2018
//Description:
//This program prints numbers 99 down to 81 in steps of -3.

#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_NONSTDC_NO_DEPRECATE 1

#include <stdio.h>
#include <conio.h>

int main(void)
   {
printf("Lab 2_B - My name is Vladislav Gudkov set D\n");
printf("This program prints numbers 99 down to 81 in steps of -3.\n\n");
   int num;

   num =99; //initialize num

   while(num >= 81)
      {
      printf("%d\n", num);
      num = num  -3;
      } //endwhile

   printf("\nPress any key to exit...\n");
   getch();

   return 0;
   } //end program