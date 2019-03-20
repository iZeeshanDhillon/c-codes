#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x=0;
	fork();
	x=1;
	printf("My process id = %ld and x = %d \n",(long)gerpid(),x);
	return 0;
}