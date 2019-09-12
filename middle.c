#include<stdio.h>
#include<stdlib.h>
struct list{
	int a;
	struct list * next;
};
void insert(struct list *head)
{	
	struct list * node=NULL;
	struct list * node1=NULL;
	node=head;
	int i;
	printf("Enter data for head: ");
	scanf("%d",&node->a);
	node->next=NULL;
	node1=(struct list *)malloc(sizeof(struct list));
	while(1==1)
	{	
		printf("Enter data (enter -1 to stop inserting): ");
		scanf("%d",&i);
		if(i!=-1)
		{
				node->next=node1;
				node=node1;
				node->a=i;
				node->next=NULL;
				node1=(struct list *)malloc(sizeof(struct list));
		}
		else
			break;
	}
}

void print(struct list* head)
{
	struct list * node=NULL;
	node=head;
	while(node!=NULL){
		printf("%d ",node->a);
		node=node->next;
	}
}
void middle(struct list* head)
{
	struct list * node=NULL;
	struct list * node1=NULL;
	node=head;
	node1=head;
	while(node!=NULL)
	{
		node=node->next;
		if(node==NULL)
			break;
		node=node->next;
		node1=node1->next;
	}
	printf("\nMiddle of the linked list: %d\n",node1->a); 
}	
void main()
{
	struct list * head=NULL;
	struct list * node=NULL;
	struct list * node1=NULL;
	head=(struct list *)malloc(sizeof(struct list));
	int i,n;
	
	insert(head);
	print(head);
	
	middle(head);

}












