#include<prodcons.h>


future * future_alloc(int future_flags){
	int * val;
	future *f =(future *)getmem(sizeof(future));
	if(f==NULL)
	{
		printf("Not able to allocate memory to future");	
		return NULL;	
	}
	
	f->value =(int*)getmem(sizeof(int));
	if(f->value==NULL)
	{
		printf("Not able to allocate memory ");	
		return NULL;
	}
	
	f->flag=future_flags;
	(*f).state=FUTURE_EMPTY;
	*(f->value)=0;
        (*f).pid=NULLPROC;
        return f;
}
