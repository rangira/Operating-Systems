#include <prodcons.h>


uint32 future_cons(future *fut) 
{
	int i, status;
	status = future_get(fut, &i);

	if (status != OK) 
	{
	    printf("future_get failed\n");
	    return -1;
  	}

	printf("Consumed Value is:  %d\n\n", i);

	if(!future_free(fut))
		return SYSERR;
	return OK;
}

