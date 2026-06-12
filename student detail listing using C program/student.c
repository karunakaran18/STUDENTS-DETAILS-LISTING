#include "header.h"
int main(){
	struct st *hptr=0;
	char op;
	int x;
	x=add_first(&hptr);
	while(1){
	printf("\t\t___________________________________________\n");
	printf("\t\t|					  |\n");
	printf("\t\t|	***STUDENT RECORD MENU***	  |\n");
	printf("\t\t|_________________________________________|\n");
	printf("\t\t|					  |\n");
	printf("\t\t|	  A/a : add new Record 		  |\n");
	printf("\t\t|	  D/d : Delete A Record		  |\n");
	printf("\t\t|	  S/s : Show the List		  |\n");
	printf("\t\t|	  V/v : Save			  |\n");
	printf("\t\t|	  E/e : Exit			  |\n");
	printf("\t\t|	  T/t : sort the list		  |\n");
	printf("\t\t|	  L/l : Delete All Record   	  |\n");
	printf("\t\t|	  R/r : Reversr the list   	  |\n");
	printf("\t\t|_________________________________________|\n");
	scanf(" %c",&op);
	switch (op){
		case 'A':
		case 'a': x=add(&hptr,x);break;
		case 'D':
		case 'd': del(&hptr);break;
		case 'S':
		case 's': show(hptr);break;
		case 'V':
		case 'v': save(hptr);break;
		case 'E':
		case 'e': Exit(hptr);return 0;
		case 'T':
		case 't': sort(hptr);break;
		case 'L':
		case 'l': del_all(&hptr);break;
		case 'R':
		case 'r':rev(hptr);
	}
	}
}



