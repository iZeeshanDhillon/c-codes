#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("A\n");
	fork();
	printf("B\n");
	fork();
	printf("C\n");
	fork();
	printf("D\n");
	return 0;
}