#include "header.h"
int add_first(struct st **ptr){
        FILE *fs=fopen("stud_record.txt","r");
	char ch[20];
	int n,num=0;
        while((fscanf(fs,"%d",&n)!=EOF)){
        struct st *temp=(struct st *)malloc(sizeof(struct st));
	
	fscanf(fs,"%s%d",temp->name,&temp->marks);
					
        temp->roll=n;
	num=n;
        if(*ptr==0)
                *ptr=temp;
       
        else
                Last->next=temp;
        temp->next=0;
        Last=temp;
	}
	printf("%d",n);
	return num;
}
