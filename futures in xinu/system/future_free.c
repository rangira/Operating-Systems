#include<prodcons.h>

syscall future_free(future *f)
{
 	return ((freemem(f,sizeof(future))) && (freemem(f->value,sizeof(int))));
}


