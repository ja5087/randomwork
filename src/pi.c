#include <stdio.h>
#include <conio.h>
double pi, amount, der, fldpi();
int main()
{
	printf("so u wan diametr usin pi ar pls entr circum\n");
	pi = fldpi();
	scanf("%lf", &amount);
	while ((amount = getchar()) != '\n' && amount != EOF);
	der = amount / pi;
	printf("\n here is ur amount lah \n %lf", der );
	printf("\n we used dis pi ar %lf \n" , pi);
	printf("enter any letter to continue\n");
	getchar();
	
}
double fldpi()
{
    double pi;
    asm("fldpi" : "=t" (pi));
    return pi;
}
