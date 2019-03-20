#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
extern char** environ;
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
	//	execl("/bin/ls","myls","-l","/home",'\0');
	//	execle("/bin/ls","myls","-l","/home",NULL,environ);
	//	execlp("ls","myls","-l","/home",NULL);
	//	execlp("calc","mycalc",NULL);
		char *argv[]={"myls","=l","/home",'\0'};
		execv("/bin/ls",argv);
		execve("/bin/ls",argv,environ);
		execvp("ls",argv);
		perror("Exec Failed !");
		exit(0);
	}
	else
	{
		wait(&status);
		printf("I am Parent \n");
	}
	return 0;
}