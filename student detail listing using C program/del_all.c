#include "header.h"
void del_all(struct st **ptr){
	struct st *temp;
	while(*ptr!=0){
		temp=*ptr;
		*ptr=(*ptr)->next;
		free(temp);
	}
}
