#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	fork();
	fork();
	fork();
	printf("Hello Fork\n");
	return 0;
}