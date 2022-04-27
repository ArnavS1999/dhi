#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct polynomial
{
	int coeff;
	int power;
	struct polynomial *next;
}node;

void main()
{
      node *head=NULL;
      int i,c,p;
      void insert_at_beg(node** ,int, int);
      void traverse(node*);
      clrscr();
      for(i=1; i<=4; i++)
      {
	printf("Enter coefficient and power of term %d\n",i);
	scanf("%d%d",&c,&p);
	insert_at_beg(&head,c,p);
      }
      traverse(head);
      getch();
}

void traverse(node *head)
{
	while(head->next!=NULL)
	{
		printf("%d X ^ %d ",head->coeff,head->power);
		head=head->next;
		if(head->coeff>=0)
		{
			if(head->next!=NULL)
			printf("+");
		}
	}
}

void insert_at_beg(node**head, int c,int p)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->coeff=c;
	temp->power=p;
	temp->next=*head;
	*head=temp;
   }