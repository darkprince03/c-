#include<stdio.h>
#include<stdlib.h>
struct list{
	int a;
	struct list * next;
};
void main()
{
	struct list * head=NULL;
	struct list * node=NULL;
	struct list * node1=NULL;
	head=(struct list *)malloc(sizeof(struct list));
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	node=head;
	i=n;
	while(i>0)
	{	
		if(i==n){
			printf("Enter data: ");
			scanf("%d",&node->a);
			node->next=NULL;
			node1=(struct list *)malloc(sizeof(struct list));
			i--;
		}
		else{
			node->next=node1;
			node=node1;
			printf("Enter data: ");
			scanf("%d",&node->a);
			node->next=NULL;
			node1=(struct list *)malloc(sizeof(struct list));
			i--;
		}
	}
	node=head;
	while(node!=NULL){
		printf("%d ",node->a);
		node=node->next;
	}






	printf("\n-------Insert Before head-------");
	node=(struct list *)malloc(sizeof(struct list));
	printf("\nEnter data: ");
	scanf("%d",&node->a);
	node->next=head;
	head=node;
	node=head;
	while(node!=NULL){
		printf("%d ",node->a);
		node=node->next;
	}






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
	node=head;
	while(node!=NULL){
		printf("%d ",node->a);
		node=node->next;
	}
}












