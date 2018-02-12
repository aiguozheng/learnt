#include<stdio.h>
#include<stdlib.h>

int main() 
{
   int oldprice,price = 0,i=0;
   printf("set restult\n");
   scanf("%d",&oldprice);
   printf("input new price \n");
 
   while(oldprice != price)
   {
     i++;
     printf("please gusess the numers\n");
     scanf("%d",&price);
     printf(" your answers is:");
     if (price > oldprice)
     {
       printf("to big \n");
     }
     else if(price < oldprice)
     {
      printf("to low \n");
     }
     else
     {
      printf("you are right,you try %d times \n",i);
     }

   }
   return  0;   
}
