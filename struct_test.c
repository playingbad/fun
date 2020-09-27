#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
struct _people{
int id;
char name[16];
struct _people * next;
};

typedef struct _people People;

int num = 5;
char name[10] = "\0";

int i=0;

People * head = NULL;
while(i<num){
People * tmp = (People * )malloc(sizeof(People));
tmp->id = i;
scanf("%s",name);
strcpy(tmp->name,name);
if(i==0)
	{
head->next = tmp;
}
else
{
tmp->next = tmp;
}
i++;
}





return 0;
}
