#include<stdio.h>
#include<stdlib.h>
struct list{
	int a;
	struct list * next;
};
void enqueue(struct list **head)
{
	
	struct list * node=NULL;
	struct list * node1=NULL;
	if((*head)==NULL)
	{
		(*head)=(struct list *)malloc(sizeof(struct list));
		printf("\nEnter data: ");
		scanf("%d",&(*head)->a);
		(*head)->next=NULL;
	}
	else
	{
		node=(*head);
		while(node->next!=NULL){
			node=node->next;
		}
		node1=(struct list *)malloc(sizeof(struct list));
		printf("\nEnter data: ");
		scanf("%d",&node1->a);
		node1->next=NULL;
		node->next=node1;
	}
}
void dequeue(struct list **head)
{
	struct list * node=NULL;
	if(*head==NULL)
		printf("Queue Empty\n");
	else
	{
		node=(*head);
		(*head)=node->next;
		free(node);
	}
}
void print(struct list* head)
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		printf("%d ",head->a);
		head=head->next;
		print(head);	
	}
}
void main()
{
	struct list * head=NULL;
	int i;
	while(1==1)
	{
		printf("Enter your Choice: 1)Enqueue 2)Dequeue 3)display 4)exit : ");
		scanf("%d",&i);
		switch(i)
		{	
			case 1:
				
				enqueue(&head);
				break;
			case 2:
				dequeue(&head);
				printf("\n");
				break;
			case 3:
				if(head==NULL)
					printf("Empty Queue\n");
				else
					print(head);
				printf("\n");
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Enter correct Choice\n");
		}
	}		
							
}












