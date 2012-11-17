#include <stdio.h>
int input;
int main ()
{
for(input = 0;input <= 100;input++){

if((input % 15) == 0) { printf("fizzbuzz\n");  }
if((input % 5) == 0 ) { printf("buzz\n");  }
if((input % 3) == 0 ) { printf("fizz\n");  } 
if(((input % 3) && (input % 3)) != 0) { printf("%d\n", input); }

}
return(0);
}



