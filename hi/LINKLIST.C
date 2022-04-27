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
int ch,data,item;
node *head=NULL,*temp,*ptr;
clrscr();
while(1)
{
printf("1.Element for begining\n");
printf("2.transversing\n");
printf("3.Enter element at end\n");
printf("4.Insert after element\n");
printf("5.searching\n");
printf("6.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the element");
scanf("%d",&data);
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=temp;
if(head!=NULL)
{
temp->next=head;
}
else
{
temp->next=NULL;
}
head=temp;
printf("insertion successful \n");
break;
case 2:
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->info);
temp=temp->next;
}
break;
case 3:
{
printf("enter the element");
scanf("%d",&data);
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=NULL;
if(head==NULL)
{
head=temp;
}
else
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
printf("insertion sucessful");
break;
case 4:
{
printf("enter the element");
scanf("%d",&data);
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=ptr->next;
ptr->next=temp;
}
case 5:
{
printf("enter element to search");
scanf("%d",&item);
ptr=head;
while(ptr!=NULL)
{
{
if(ptr->info==item)
printf("element found");
break;
}
if(ptr==NULL)
{
printf("item not found");
break;
}
else
temp->info=data;
temp->next=ptr->next;
ptr->next=temp;
}
}
case 6:
{
exit(0);
break;
}
getch(
);
}
}
}
