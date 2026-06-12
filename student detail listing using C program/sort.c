#include "header.h"
void sort(struct st *ptr){
	printf("sorting the student record based on\n 1)roll number\n 2)marks\n");
	int op;
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			show(ptr);
			break;
		case 2:
			int n[20]={0};
			int i;
			struct st *temp=ptr;
			struct st *min;
			printf("______________________________________________\n");
	                printf("|roll number\tname\t\tmarks\t      \n");
        	        printf("|____________________________________________\n");
			i=0;
			while(ptr)
			{
				if(i!=0)
					 for(int k=i-1;k>=0;k--)
					 if(n[k]==temp->roll){
   					 temp=temp->next;
					 k=i;
				}
				 min=temp;
  				 struct st *last=temp->next;
 				 while(last)
    				 {
      					 if(last->marks > min->marks){
						 int j;
						 for( j=0;j<i;j++){
							 if(n[j]==last->roll)
								 break;
						 }
						 if(n[j]!=last->roll)
						 min=last;
					 }
        				last=last->next;
    				}
				n[i++]=min->roll;

				 printf("|     %d    \t %s \t\t %d  \t  \n",min->roll,min->name,min->marks);
		                 printf("|____________________________________________\n");
				 ptr=ptr->next;
			}
	}
}
/*
void swap(struct st *a, struct st *b)
{
    int t;

    t=a->roll;
    a->roll=b->roll;
    b->roll=t;

    t=a->marks;
    a->marks=b->marks;
    b->marks=t;

    char name[20];
    strcpy(name,a->name);
    strcpy(a->name,b->name);
    strcpy(b->name,name);
}

void sort(struct st **ptr){
	printf("sorting the student record based on\n 1)roll number\n2)marks\n");
	int op;
	scanf("%d",&op);
	switch (op)
	{
		case 1:

struct st *temp,*min;
temp=*ptr;

while(temp)
{
    min=temp;

    struct st *last=temp->next;

    while(last)
    {
        if(last->roll < min->roll)
            min=last;

        last=last->next;
    }

    if(min!=temp)
    	swap(min,temp);

    temp=temp->next;

}
break;
case 2:
temp=*ptr;

while(temp)
{
    min=temp;

    struct st *last=temp->next;

    while(last)
    {
        if(last->marks > min->marks)
            min=last;

        last=last->next;
    }

    if(min!=temp)
    {
        int r,m;
        char name[20];

        r=temp->roll;
        temp->roll=min->roll;
        min->roll=r;

        m=temp->marks;
        temp->marks=min->marks;
        min->marks=m;

        strcpy(name,temp->name);
        strcpy(temp->name,min->name);
        strcpy(min->name,name);
    }

    temp=temp->next;
}
}
}*/
