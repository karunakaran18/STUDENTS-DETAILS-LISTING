#include "header.h"
void exit(struct st *ptr){
	printf("if you want to save the file:y/n\n");
	char ch;
	scanf(" %ch",&ch);
	if(ch=='y')
		save(ptr);
}
