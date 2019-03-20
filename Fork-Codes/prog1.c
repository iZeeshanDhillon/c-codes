#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	printf("abc");
	i=fork();
	if(i==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	printf("i=%d",i);
	return 0;
}