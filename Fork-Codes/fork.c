#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cpid=0;
	printf("abc");
	cpid=fork();
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
		printf("I am Child\n");
	else
		printf("I am Parent\n");
	
	return 0;
}