#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cpid=fork();
	int x=98;
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		printf("Value of x in Child = %d \n",x);
	}
	else
	{
		printf("Value of x in Parent = %d \n",x);
	}
	return 0;
}