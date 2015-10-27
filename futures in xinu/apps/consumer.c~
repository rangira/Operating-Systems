#include<prodcons.h>


/* Assignment 2
void consumer(int count)
{

	int i;
	for(i=1; i<=count; i++)
	printf("The consumed value is : %d \n",n);
*/



/* Two Semaphores*/
void consumer(int count)
{
	int i;
	for( i=1 ; i<=count ; i++ ) 
	{
		wait(produced);
		printf("Consumed: %d \n", n);
		signal(consumed);
	}

	
	semdelete(consumed);
	semdelete(produced);

}
	
		
/*void consumer(int count)
{
int i;
	for(i=1; i<=count; i++)
	{	
		wait(m);
		if(flag==1)
		{
			printf("\nConsumed: %d ", n);
			flag=0;
			printf("\n %d",flag);
		}
	
		else  
		{
			printf("\nxyz");
		}
		signal(m);
		
	}
}*/


