#include <stdio.h>
#include <conio.h>
double pi;
double amount;
double der;
double fldpi();
int main()
{
	printf("so u wan diametr usin pi ar pls entr circum\n");
	pi = fldpi();
	scanf("%lf", &amount);
	der = amount / pi;
	printf("\n here is ur amount lah \n %lf", der );
	printf("\n we used dis pi ar %lf" , pi);
	getchar();
	return(0);
	
}

double fldpi()
{
    double pi;
    asm("fldpi" : "=t" (pi));
    return pi;
}
