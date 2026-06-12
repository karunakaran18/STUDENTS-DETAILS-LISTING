#include "header.h"
void save(struct st *ptr){
	FILE *fs=fopen("stud_record.txt","w+");
	if (fs==NULL){
		printf("Failed to open\n");
		return;
	}
	while(ptr!=0){
		fprintf(fs,"%d %s %d\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	fclose(fs);

}
