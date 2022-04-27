#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct nodetype
{
int info;
struct nodetype*next;
}
node;
void createEmptylist(node**);
void traverseinorder(node*);
void InsertAtBegining(node**,int);
void main()
{
node*head;
int choice,element,after;clrscr();
createEmptylist(&head);
while(1)
{
printf("1 insert at beg \n");
printf("2 traverse \n ");
printf("3 for exit\n");
printf("enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter element");
scanf("%d",&element);
InsertAtBegining(&head,element);
break;
case 2:if(head==NULL)
printf("/nlist empty");
else
traverseinorder(head);
case 3:exit(0);
}
}
}
void createEmptylist(node **head)
{
*head=NULL;}
void InsertAtBegining(node **head,int item){
node *ptr;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL)
ptr->next=NULL;
else
ptr->next=*head;
*head=ptr;
}
void traverseinorder(node *head){
while(head!=NULL){
printf("\n%d",head->info);
head=head->next;
}
}