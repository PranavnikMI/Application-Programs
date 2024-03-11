 #include <stdio.h>
#include <signal.h>
#include<stdlib.h>
#include<unistd.h>

void sighup();
void sigint();
void sigquit();

main()
{ 
	int pid;
  
   if ((pid = fork()) < 0) 
	{
	        exit(1);
	}
    
   if (pid == 0)
     { 
       signal(SIGHUP,sighup); /* set function calls */
       signal(SIGINT,sigint);
       signal(SIGQUIT, sigquit);
       for(;;);
     }
  else 
     {  
       printf("\nPARENT: sending SIGHUP\n\n");
       kill(pid,SIGHUP);
       sleep(3);

       printf("\nPARENT: sending SIGINT\n\n");
       kill(pid,SIGINT);
       sleep(3);

       printf("\nPARENT: sending SIGQUIT\n\n");
       kill(pid,SIGQUIT);
       sleep(3);
     }
}

void sighup()

{  signal(SIGHUP,sighup); /* reset signal */
   printf("CHILD: I have received a SIGHUP\n");
}

void sigint()

{  signal(SIGINT,sigint); /* reset signal */
   printf("CHILD: I have received a SIGINT\n");
}

void sigquit()
{
	printf("Parent process kill child\n");
	exit(0);
}
