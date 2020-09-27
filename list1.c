#include <stdio.h>
#include <stdlib.h>

typedef struct _count_book{
	int id;
	int week;
	int income;
	int spend;
	struct _count_book * next;
}Book,*PBook;


PBook new_list(int num)
{
PBook head = (PBook)malloc(sizeof(Book));

int id = 0;
PBook tail = head;
while(num>0){

	PBook new = (PBook)malloc(sizeof(Book));
	if (new ==NULL){
		printf("NEW NODE FAILED!\n");
		return NULL;
	}
	
	printf("Input book id is %d\n",id);
	new->id = id;
	id++; 
	printf("Week is:\n");
	scanf("%d",&new->week);
	printf("income:\n");
	scanf("%d",&new->income);
	printf("spend:\n");
	scanf("%d",&new->spend);
	
	tail->next = tail;
	tail = new;
	num--;
}

return head; 
}

int show_list(PBook head1){
PBook news = (PBook)malloc(sizeof(Book));
news = head1;
	while(news!=NULL)
	{
	printf("CountBook %d: the No.%d week details--Income:%d  Spend:%d  \n",news->id,news->week,news->income,news->spend);
	news=news->next;
	}
return 0;
}
int main(){
PBook head1;

head1 = new_list(5);
show_list(head1);

return 0;
}
