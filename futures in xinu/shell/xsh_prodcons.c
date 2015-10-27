#include<prodcons.h>


int n;
int s;
int flag;
sid32 produced, consumed;
//sid32 m;

shellcmd xsh_prodcons(int nargs, char *args[])
{
n=0;
s=0;
flag=1;
int count=0;

	if(nargs==2 && strncmp(args[1], "--help", 7) == 0) 
	{
		printf("Usage: %s\n\n", args[0]);
		printf("***** Description: Producer Consumer Problem *****\n\n");
		printf("*Enter 'prodcons' command followed by valid positive integer value.\n");
		printf("*Give only one argument\n");
		printf("*Don't give more than one argument\n");
		printf("*If no value is entered, program will run for value = 2000.\n");
		printf("*This program is also used to implement 'Future' concept.\n");
		printf("*To use future, use '-f' next to prodcons command.\n\n\n");
		
		return 0;
	}
	
	if(nargs>2)
	{
		printf("Too many arguments.\n");
		return 0;
	}

	if(nargs==2 && strncmp(args[1], "-f", 2) == 0)
	{
		flag=0;
	}
		
	if(nargs==2)
	{
		count=atoi(args[1]);
		if(count<0)
		{
			printf("Please enter valid positive integer value!\n",count);		
		}
	}
	
	else
		count=2000;

	if(flag)
	{
		consumed = semcreate(1);
		produced = semcreate(0); 
		//m=semcreate(1);

		resume(create(producer, 1024, 20, "producer", 1, count)); 
		resume(create(consumer, 1024, 20, "consumer", 1, count)); 
	}

	else
	{
		future *f1, *f2, *f3;
 
  		f1 = future_alloc(FUTURE_EXCLUSIVE);
  		f2 = future_alloc(FUTURE_EXCLUSIVE);
  		f3 = future_alloc(FUTURE_EXCLUSIVE);
 		if(f1)
		{
  			resume( create(future_cons, 1024, 20, "fcons1", 1, f1) );
  			resume( create(future_prod, 1024, 20, "fprod1", 1, f1) );
		}		
		else
		{
			printf("Error creating the file");
		}
		
		if(f2)
		{
	  		resume( create(future_cons, 1024, 20, "fcons2", 1, f2) );
	  		resume( create(future_prod, 1024, 20, "fprod2", 1, f2) );
		}	
		else
		{
			printf("Error creating the file");
		}
	
		if(f3)
		{
  			resume( create(future_cons, 1024, 20, "fcons3", 1, f3) );
  			resume( create(future_prod, 1024, 20, "fprod3", 1, f3) );
		}
		else
		{
			printf("Error creating the file");
		}
	}
	
	return 0;

}
