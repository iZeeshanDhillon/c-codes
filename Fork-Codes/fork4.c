#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cpid=0;
	cpid=fork();
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		while(1)
			printf("I am Child\n");
	}
	else
	{
		while(1)
			printf("I am Parent\n");
	}
	printf("i=%d",i);
	return 0;
}