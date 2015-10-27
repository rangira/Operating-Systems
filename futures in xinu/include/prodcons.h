
#include<future.h>

extern int s;
extern sid32 produced, consumed;
extern sid32 m;
extern int n;
extern int flag;


void producer(int count);
void consumer(int count);
uint32 future_cons(future *fut);
uint32 future_prod(future *fut);



