#include<stdio.h>
#include<conio.h>
void linearsearch(int a[100],int n);
void binarysearch(int a[100],int n);
void main()
{
int a[100],i,n,search;
printf("Enter Size of array\n ");
scanf("%d",&n);
printf("\nEnter Array Elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter Choice \nPress 1 For Linear Search \n Press 2 For Binary Search\n");
scanf("%d",&search);
switch(search)
{
case 1:
{
linearsearch(a,n);
break;
}
case 2:
{
binarysearch(a,n);
break;
}
default:
{
printf("\nInvalid Choice");
}
}
}
void linearsearch(int a[100],int n)
{
int s,i;
printf("\nEnter no you want to search\n");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("No Found at a[%d]",i);
}
else
{
printf("Not Found");
}
}

getch();

}
void binarysearch(int a[100],int n)
{
int beg,end,mid,s;
beg=0;
end=n-1;
mid=(beg+end)/2;
printf("\nEnter no you want to search\n");
scanf("%d",&s);
while(beg<=end)
{
if(s<a[mid])
{
end=mid-1;
}
else
{
beg=mid+1;
mid=(beg+end)/2;
}
if(a[mid]==s)
{
printf("Iteam Found At a[%d]",mid);
break;
}
else
{
printf("not found");
}
}
getch();
}