#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct lklist
{
int info;
struct lklist *next;
}node;
void main()
{
void insertatbeg(node**,int);
void insertatend(node**,int);
void trans(node*);
int ch,data;
node *head;
while(1)
{
printf("1.Enter the element at the begning\n");
printf("2.transversing\n");
printf("3.Exit");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("enter element to insert");
scanf("%d",&data);
insertatbeg(&head,data);
break;
}
case 2:
{
printf("enter the element at end");
scanf("%d",&data);
insertatend(&head,data);
break;
}
case 3:
{
trans(head);
break;
}
case 4:
exit(1);
break;
}
}
getch();
}
void insertatbeg(node**head,int data)
{
node *temp;
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=*head;
*head=temp;
}
void insertatend(node **head,int data)
{
node *temp,*ptr;
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=NULL;
if(*head==NULL)
{
*head=temp;
}
else
{
ptr=*head;
}
}
void trans()
{


*head=temp;
while(temp!=NULL)
{
printf("%d\t",temp->info);
temp=temp->next;
}
}
