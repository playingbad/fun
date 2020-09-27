#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
	
int main () {

	char realname[10] = {'a','b','c','d','e','f'};
	typedef struct node{
		int id;
		char name ;
		struct node * next;
	}Node;
	
	int i=0,num = 6;
	
	Node * head = (Node*)malloc(sizeof(Node));
	head->next = head;
	Node * tail = head;
	
	printf("head:%c  tail:%c\n",head->name,tail->name);
	for(i = 0;i<num;i++){
	    	Node* tmp =  (Node*)malloc(sizeof(Node));
	        tmp -> id = i;  
	        tmp->name=i+65;
 
	        tail = tmp;
	        if(i==0)head=tail;
	        tail->next = tail;
	        printf("Head: %c  |  %d:%c  \n",head->name,tmp->id,tmp->name);
	 
	}
  
	return 0;
	
	
	
}
