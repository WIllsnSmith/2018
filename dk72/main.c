#include <stdio.h>
#include <stdlib.h>
#include "function.h"



    int main(int argc,char* argv[])

    {

float a,b,c;/*interger values that will be used*/
float Q;/* the result*/

printf("\n");
printf("Enter the first argument 'a' :\n");
scanf("%f",&a);/*This comand is used for enter the value a*/

printf("\n");
printf("Enter the second argument 'b' :\n");
scanf("%f",&b);/*This comand is used for enter the value b */

printf("\n");
printf("Enter the third argument 'c' :\n");
scanf("%f",&c);/* This comand is used foe enter the value c */

if(c==0)/*This cycle is used for checking the c value (if the c equal to 0 then program ceases to work ) */
    {
        printf("OOh No it's impossible\n");
        return 0;
    }

    Q=(module((a*c)-b)/cub(c))*summa(a);/*The operations (we use the functions )*/

        printf("The variable q is %.2f\n",q); /*program print the result */
    }
