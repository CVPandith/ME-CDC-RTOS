#include <stdio.h>
int sum(int a[])
{
   int i, num = 0;
   for (i = 0; i < 10; i++) 
        {
      num= num+ a[i];
   }
   return(num);
}
float average(float b[])
{
 int i;
 float num=0;
   for (i =0; i <10; i++) 
        {
      num= num+(b[i]);
   }
   num = num/10;
   return(num);
}

double product(int a[])
{
   int i, num=1;
   for (i =0; i <10; i++) 
        {
      num= num*(a[i]);
   }
   return(num);
}
 
void main()
{
   int a[10];
   int add,i,n,mul;
   float avg,b[10];

        printf("Enter Elements of the List \n");
        for (i = 0; i<10; i++)
        {
          scanf("%d",&a[i]);
          b[i]=(int)a[i];
        }
        add = sum(a);
        avg = average(b);
        mul = product(a);

        printf("Sum of 10 elements = %d\n Average of 10 elements = %f\n product of 10 elements =%d\n",add,avg,mul);
}
