#include <stdio.h>
int i, sq1, sq2;
int main()
{
	for(i=0;i<=100;i++)
	{
		sq1+=(i*i);
	}
	for(i=0;i<=100;i++)
	{
		sq2+=i;
	}
	printf("sq1 = %d\n",sq1);
	printf("sq2 = %d\n",(sq2*sq2));
	printf("%d",((sq2*sq2)-sq1));
}
