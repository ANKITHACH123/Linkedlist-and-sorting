#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL;
void insert(int val)
{
	NODE *nn,*temp;
	nn=(NODE *)malloc(sizeof(NODE));
	nn->data=val;
	nn->next=NULL;
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;	
	}	
}
int delete()
{
	NODE *val,*temp;
	if(head==NULL)
	{
		return -1;
	}
	if(head->next==NULL)
	{
		val=head->data;
		head=NULL;
		return val;
	}
	temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	val=temp->next->data;
	temp->next=NULL;
	return val;
	
}
void display()
{
	NODE *temp;
	if(head==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d %d %d\n",temp,temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n");	
	}	
}
void main()
{
	int ch,val;
	while(1)
	{
		printf("1.insert 2.delete 3.display 4.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert
			scanf("%d",&val);
			insert(val);	
		}
		else if(ch==2)
		{
			val=delete();
			if(val==-1)
			{
				printf("No nodes\n");
			}
			else
			{
				printf("%d\n",val);	
			}
			
		}
		else if(ch==3)
		{
			//display
			display();	
		}
		else
		{
			break;
		}
	}
}