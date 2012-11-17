#include <stdio.h>
int n;
int main() 
{
  int first = 0, second = 1;

  int tmp;
  while (n--)
    {
      tmp = first+second;
      first = second;
      second = tmp;
      printf("%d", tmp);
    }
  
}
