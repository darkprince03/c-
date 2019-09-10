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
void insertbefore(struct list **head)
{
	struct list * node=NULL;
	printf("\n-------Insert Before head-------");
	node=(struct list *)malloc(sizeof(struct list));
	printf("\nEnter data: ");
	scanf("%d",&node->a);
	node->next=(*head);
	(*head)=node;
}
void insertend(struct list *head)
{	
	struct list * node=NULL;
	struct list * node1=NULL;
	printf("\n-------Insert At End-------");
	node=head;
	while(node->next!=NULL){
		node=node->next;
	}
	node1=(struct list *)malloc(sizeof(struct list));
	printf("\nEnter data: ");
	scanf("%d",&node1->a);
	node1->next=NULL;
	node->next=node1;
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
void insertatn(struct list **head)
{
	int i,n;	
	struct list * node=NULL;
	struct list * node1=NULL;
	printf("\n-------Insert At Nth position-------");
	printf("\nEnter position : ");
	scanf("%d",&n);
	i=n;
	if(n==1)
	{
		node=(struct list *)malloc(sizeof(struct list));
		printf("\nEnter data: ");
		scanf("%d",&node->a);
		node->next=(*head);
		(*head)=node;
	}
	else
	{
		node=*head;
		while(node->next!=NULL && i>2){
				node=node->next;
				i--;
		}
		if(i==2)
		{
			node1=(struct list *)malloc(sizeof(struct list));
			printf("\nEnter data: ");
			scanf("%d",&node1->a);
			node1->next=node->next;
			node->next=node1;
		}
		else
			printf("\nPosition not correct\n");
	}

}
void delete1(struct list **head)
{
	struct list * node=NULL;
	printf("\n-------Delete First-------\n");
	node=(*head);
	(*head)=node->next;
	free(node);
}

void deleteend(struct list *head)
{
	struct list * node=NULL;
	struct list * node1=NULL;
	printf("\n-------Delete End-------\n");
	node=head;
	while(node->next->next!=NULL){
		node=node->next;
	}
	node1=node->next;
	node->next=NULL;
	free(node1);
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


	insertbefore(&head);
	print(head);

	insertend(head);
	print(head);
	
	insertatn(&head);	
	print(head);

	delete1(&head);
	print(head);

	deleteend(head);
	print(head);
}












