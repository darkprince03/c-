#include<stdio.h>
#include<stdlib.h>
struct list{
	int a;
	struct list * next;
};
void insert(struct list **last)
{	
	struct list * node=NULL;
	struct list * node1=NULL;
	node=(*last);
	int i;
	printf("Enter data for head: ");
	scanf("%d",&node->a);
	node->next=node;
	node1=(struct list *)malloc(sizeof(struct list));
	while(1==1)
	{	
		printf("Enter data (enter -1 to stop inserting): ");
		scanf("%d",&i);
		if(i!=-1)
		{
				node1->a=i;
				node1->next=node->next;
				node->next=node1;
				node=node1;
				node1=(struct list *)malloc(sizeof(struct list));
		}
		else
		{
			(*last)=node;
			break;
		}
	}
}

void print(struct list* last)
{
	struct list * node=NULL;
	node=last;
	node=node->next;
	while(node!=last){
		printf("%d ",node->a);
		node=node->next;
	}
	printf("%d ",node->a);
}


	
void main()
{
	struct list * last=NULL;
	struct list * node=NULL;
	struct list * node1=NULL;
	last=(struct list *)malloc(sizeof(struct list));
	int i,n;
	
	insert(&last);
	print(last);

}












