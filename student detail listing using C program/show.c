#include "header.h"
void reverse(struct st *ptr){
	if(ptr!=0){
		reverse(ptr->next);
		printf("|     %d    \t %s \t\t %d  \t  \n",ptr->roll,ptr->name,ptr->marks);
		printf("|____________________________________________\n");
	}
}
void show(struct st *ptr){
	if(ptr!=0){
		printf("______________________________________________\n");
		printf("|roll number\tname\t\tmarks\t      \n");
		printf("|____________________________________________\n");
	}		
	while(ptr!=0){
		printf("|     %d    \t %s \t\t %d  \t  \n",ptr->roll,ptr->name,ptr->marks);
		printf("|____________________________________________\n");
		ptr=ptr->next;
	}
}
void rev(struct st *ptr){
	if(ptr!=0){
		printf("______________________________________________\n");
		printf("|roll number\tname\t\tmarks\t      \n");
		printf("|____________________________________________\n");
	}
	reverse(ptr);
}	

