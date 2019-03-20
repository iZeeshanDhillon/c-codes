#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int status;
	int cpid=fork();
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		execlp("ls","myls","-l","/home",NULL);
		printf("Hey !");
		exit(0);
	}
	else
	{
		wait(NULL);
		printf("I am Parent \n");
	}
	return 0;
}