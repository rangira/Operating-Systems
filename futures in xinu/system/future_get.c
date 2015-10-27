#include<prodcons.h>

syscall future_get(future *f, int *value)
{
	int i;
        if(f->state!=0)
{
return SYSERR;
}
	if (f->state == 0)
	{
		f->pid=getpid();
		f->state=1;
	}
	
	while(f->state != 2) 
	{
	}

	*value = *(f->value);
        f->value=NULL;
	f->pid=NULLPROC;
        f->state=FUTURE_EMPTY;
        return OK;
}
