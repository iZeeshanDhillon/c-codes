#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int n=atoi(argv[1]);
	for(i=0;i<n;i++)
	{
		fork();
		printf("Hello\n");
	}
	printf("Hello Fork\n");
	exit(0);
}