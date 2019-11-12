#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i=10;
	int *ptr=&i;
	printf("i=%i, pi:%p\n",i,ptr);
	(*ptr)++;
	printf("i=%i, pi:%p\n",i,ptr);
	*ptr++;
	printf("i=%i, pi:%p\n",i,ptr);
	
	return 0;
}
