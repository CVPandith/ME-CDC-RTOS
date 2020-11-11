#include <stdio.h>
#include<stdlib.h>
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
   int a;
   static int count;
   int add,mul;
   float avg,b,c;
   int k;
   FILE *fp;
   fp = fopen("num.txt","r");		//read file into array
   if(fp==NULL)
   {
   printf("error");
   exit(0);
   }
   else
   {
   while(k!=999)
   {
   fscanf(fp,"%d",&a);
   if(a!=999)
   {
   count=count+1;
          add = sum(a);
          b=(int)add;
          avg = average(b,count);
          mul = product(a);
          }
         else{
         k=999;
        }
       }
       }
     fclose(fp);
        printf("Sum is = %d\n Average is = %f\n product is =%d\n",add,avg,mul);
}
