#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Lab_Work_1_Functions.h"


int main()

{
	int variable_A;
	int variable_B;
	int variable_C;
	printf("This program will calculate the following expression : \n");
	printf("((A^2 + B^2)/(B + 5^C)) + B! \n");
	printf("In this expression you can inscribe 3 values.\n It's A,B and C \n");
	int nominator;
	int denominator;
	float result, fraction;
	
	//ask to enter the value
	printf("Enter an integer value for the first variable :\n A=");
	scanf("%d", &variable_A);
	printf("Enter an integer value for the second variable :\n B=");
	scanf("%d", &variable_B);
	printf("Enter an integer value for the third variable :\n C=");
	scanf("%d", &variable_C);
	
	
	//Formula calculation
	denominator = (variable_B + power(5, variable_C));
	nominator = ((variable_A * variable_A) + (variable_B * variable_B));
	fraction = nominator/denominator;
	result = fraction + factorial(variable_B);
	

	
	//Check denominator
	    if (denominator == 0 )
	     {
	     	printf("Denominator egueted to 0 ,so your result will be only factorial(B), that was calculated as %d \n", factorial(variable_B) );
		 }
		 else
		 {
		 	printf("\n Your result = %.2f \n", result);
		 }
	 
	
	return 0;
}
