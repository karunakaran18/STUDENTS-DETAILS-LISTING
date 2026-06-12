#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int number=1;
struct st {
	int roll;
	char name[20];
	int marks;
	struct st *next;
};
static struct st *Last;
int add_first(struct st **ptr);
int add(struct st **ptr,int n);
void del(struct st **ptr);
void show (struct st *ptr);
void save (struct st *ptr);
void Exit (struct st *ptr);
void sort(struct st *ptr);
void del_all(struct st **ptr);
void rev(struct st *ptr);
