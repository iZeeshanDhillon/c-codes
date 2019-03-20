#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cpid=fork();
	int i=0,count=0;
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		count=100;
		for(i=0;i<3;i++)
		{
			printf("Value of count in Child = %d \n",count);
			count++;
		}
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("Value of count in Child = %d \n",count);
			count++;
		}
	}
	return 0;
}