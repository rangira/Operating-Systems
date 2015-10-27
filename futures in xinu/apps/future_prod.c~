#include <prodcons.h>


uint32 future_prod(future *fut) 
{
	int i,j,status;
	j = (int)fut;
  	for (i=0; i<1000; i++) 
	{
		j += i;
	}
	
	status=future_set(fut, &j);
	if(status<1)
	{
		printf("failed\n");
		return(-1);
	}	

	printf("Produced Value is: %d \n",j);
	
	return OK;
}
