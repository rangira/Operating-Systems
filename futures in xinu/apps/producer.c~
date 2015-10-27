
#include<prodcons.h>

/*Assignment 2
void producer(int count)
{
int i;
	for(i=1; i<=count; i++)
	{
		n=i;
		printf("Produced value is :%d\n", n);
	}
}*/

/*Two Semaphores*/
void producer(int count)
{
	int i;	
	for( i=1 ; i<=count ; i++ ) 
	{
		wait(consumed);
		n++;
		printf("Produced :%d \n",n);
		signal(produced);
	}
}

/*void producer(int count)
{	
int i;
	for(i=1 ; i<=count ; i++ ) 
	{
		wait(m);
		if(flag==0)
		{
			n++;
			printf("\nProduced :%d ",n);
			flag=1;
			printf("\n %d",flag);
		}		
		signal(m);
	}
}*/



