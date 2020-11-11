#include <stdio.h>
int sum(int a)
{
   static int num = 0;
      num= num+ a;
   return(num);
}
float average(float b,int c)
{
   b= b/c;
   return(b);
}

double product(int a)
{
   static int num=1;
      num= num*(a);
   return(num);
}
 
void main()
{
   int a, count;
   int add,mul;
   float avg,b,c;
   int k;
while(k!=999)
{
        printf("Enter the number\n");
        scanf("%d",&a);
     if(a!=999)
        {
          count=count+1;
          add = sum(a);
          b=(int)add;
          avg = average(b,count);
          mul = product(a);
          }
          else
          {
          k=999;
          break;
          }
          }
        printf("Sum of 10 elements = %d\n Average of 10 elements = %f\n product of 10 elements =%d\n",add,avg,mul);
}
