#include "header.h"
int add(struct st **ptr,int n){
	printf("Enter new Data\n");
	struct st *temp=(struct st *)malloc(sizeof(struct st));
	scanf("%s%d",temp->name,&temp->marks);
	temp->roll=++n;
	temp->next=0;
	if(*ptr==0){
		*ptr=temp;
	}
	else{
		struct st *cur=*ptr;
		while(cur->next!=0)
			cur=cur->next;
		cur->next=temp;
	}
	return n;
}
