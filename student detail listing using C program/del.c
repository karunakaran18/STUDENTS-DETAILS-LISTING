#include "header.h"
void base_r(struct st **);
void base_n(struct st **);
void del(struct st **ptr){
	int op;
	printf("\t\tHOW DO YOU WANT TO DELETE THE RECORD\n");
	printf("\t\t1)roll no\n\t\t2)Name\n");
	scanf("%d",&op);
	switch (op){
		case 1:base_r(ptr);break;

		case 2:base_n(ptr);break;
		
		default:return;
	}

}
void base_r(struct st **ptr){
	if(*ptr==0){
		printf("no record available\n");
		return;
	}
	int x;
	printf("Enter roll number\n");
	scanf("%d",&x);
	struct st *temp=*ptr;
	if((*ptr)->roll==x){
		printf("|____________________________________________|\n");
		printf("|roll number\tname\tmarks\t\t   |\n");
		printf("|____________________________________________|\n");
		printf("|     %d    \t %s \t %d  \t\t   |\n",temp->roll,temp->name,temp->marks);
		printf("|____________________________________________|\n");
		printf("Are yo sure this one you want to delete:Y/N\n");
		char ch;
		scanf(" %c",&ch);
		if(ch=='y'){	
		*ptr=(*ptr)->next;
		free(temp);
		}
	}
	else{
		struct st *last=*ptr;
		while(temp!=0){
			if(temp->roll==x){
				printf("\t\t|____________________________________________|\n");
				printf("\t\t|roll number\tname\tmarks\t\t   |\n");
				printf("\t\t|____________________________________________|\n");
				printf("\t\t|     %d    \t %s \t %d  \t\t   |\n",temp->roll,temp->name,temp->marks);
				printf("\t\t|____________________________________________|\n");
				printf("Are yo sure this one you want to delete:Y/N\n");
				char ch;
				scanf(" %c",&ch);
				if(ch=='y'){	
				last->next=temp->next;
				free(temp);
				return;
				}
				else
					return;
			}
			last=temp;
			temp=temp->next;
		}
	}
}
void base_n(struct st **ptr){
	if(*ptr==0){
		printf("no record available\n");
		return;
	}
	char name[20];
	printf("Enter name\n");
	scanf("%s",name);
	struct st *temp = *ptr;
	struct st **p;
	int i=0;
	printf("|____________________________________________|\n");
	printf("|roll number\tname\t\tmarks\t   |\n");
	printf("|____________________________________________|\n");
	while(temp !=0){
		if((strcmp(temp->name,name))==0)
		{
			printf("|     %d    \t %s \t %d  \t\t   |\n",temp->roll,temp->name,temp->marks);
			printf("|____________________________________________|\n");
	 	}
			temp=temp->next;
	}	
	base_r(ptr);
}







