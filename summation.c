#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <sys/wait.h>
int main(int argc,char * argv[])
{ 
  if(argc<3)
  {
  	printf("Less Arguments");
   	exit(1);
  }
  int num1,num2;
  static int count=0;
  num1=atoi(argv[1]);
  num2=atoi(argv[2]);
  printf("%d - %d",num1,num2);
  if(num1>num2)
  {
   	printf("num1 is  greater than num2");
   	exit(0);	
  }
  else if(num1<1000 || num1>9999|| num2<1000 || num2>9999) 
  {
   printf("Invalid min");
   exit(0);	 
  }
  int pid=fork();
  if(pid==0) 
    {
    	printf("child process, pid = %u\n",getpid());
    	for(int i=num1;i<=num2;i++)
    	{
    		int sum=0;
    		for(int num=i;num>0;num/=10)
    		{
    			sum+=(num%10);
    		}
    	   	if(sum==8)
    	   	{
    	   		printf("%d\n",i);
    	   		count+=1;
    	   	}


    	}
    	printf("total nos: %d\n",count);
    	sleep(2);
    }
    wait(NULL);
    printf("Parent id:%d\n",getpid());
    exit(0);
}
    
