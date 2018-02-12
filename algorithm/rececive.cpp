#include<stdio.h>

int fact(int n);

int main()
{
 int i;
 printf("input a number \n");
 scanf("%d",&i);
 printf("result is %d \n",fact(i));
 return 0;

}

int fact(int n )
{
  if (n <= 1)
  {
   return 1;
  }
  else
  {
   return n * fact(n-1);
  }
}

