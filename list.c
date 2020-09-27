#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _struct_tmp{
	int id;
	char name[16];
	struct _struct_tmp * next;
};

typedef struct  _struct_tmp  Person;

int main()
{

int ids[7] = [1,2,3,4,5,6,7];
char name[7][16] = ["Jim","Tom","Rio","Lucy","Ave","Ube","Jax"];
 
Person * node  =  (Person *)malloc(sizeof(Person));

node->id = 119;

strcpy(node->name,"Jim");

printf("ID:%d Name:%s \n",node->id,node->name);

return 0;
}



