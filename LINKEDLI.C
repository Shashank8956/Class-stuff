#include<stdio.h>
#include<conio.h>

struct node
{
  int value;
  struct node *link;
} *head=NULL, *temp, *last, *p;


void insert()                                  //Insert
{
   int i, x, n;
   printf("Enter the no of nodes to add: ");
   scanf("%d", &n);
   for(i=0;i<n;i++)
    {
       printf("Enter the value in the node: ");
       scanf("%d",&x);
       temp=(struct node *)malloc(sizeof(struct node));
       temp->value= x;
       if(head == NULL)
	 {
	  head=temp;
	  last=head;
	  last->link=NULL;
	 }
       else
	 {
	  last->link=temp;
	  last=temp;
	  last->link=NULL;
	 }
    }
}


void display()                                    //Display
{
   temp=head;
   if(temp==NULL)
     {
	printf("List is empty!\n");
	return;
     }
   else
     {
	while(temp!=NULL)
	  {
	    printf("%d ", temp->value);
	    temp=temp->link;
	  }
     }
}

int del()
{
   int num;
   printf("Enter the number to be deleted: ");
   scanf("%d", &num);

   temp=head;
   if(temp==NULL)
     { printf("List is empty!\n");
       return;
     }
   else if(head->value==num)
     {
	temp=head;
	head=temp->link;
	temp->link=NULL;
	free(temp);
     }
   else
     {
       while(temp->link->value!=num || temp==NULL)
	  temp=temp->link;

       if(temp->link->value!=num)
	  {  printf("Number not found!\n");
	     return;
	  }
       else
	 {
	    p=temp->link;
	    if(p==last)
	      {
		 temp->link=NULL;
		 last=temp;
		 free(p);
	      }
	    else
	      {
		 temp->link=p->link;
		 p->link=NULL;
		 free(p);
	      }
	 }
     }
   display();
   return;
}

/******************************* Main *******************************/

void main()
{
  int x, i, choice;
  char ch='y';
  clrscr();

  while(ch=='y'||ch=='Y')
     {
	START:
	printf("Enter you Choice:\n");
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Display\n");
	scanf("%d", &choice);

	switch(choice)
	   {
		case 1: insert();
			break;
		case 2: del();
			break;
		case 3: display();
			break;
		default: printf("Enter a valid choice, you dirty little piece of shit!\n");
			 getch();
			 goto START;
	   }
	printf("\nWant to continue (y/n)?");
	scanf(" %c", &ch);
	clrscr();
     }

  getch();
}








