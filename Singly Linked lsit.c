#include <stdio.h>
#include <stdlib.h>

struct node 
{ 
int data;
struct node*next;
};
  struct node*start;
 int main()
 {
 	struct node*newnode1 =(struct node*)malloc(sizeof(struct node));
 	struct node*newnode2= (struct node*)malloc(sizeof(struct node));
 	start = newnode1;
 	newnode1->data=6;
 	newnode1->next=newnode2;
 	newnode2->data=9;
 	newnode2->next=NULL;
 	void display ()
 	{
 		struct node*temp;
 		temp=start;
 		while (temp!=NULL)
 		{
 			printf("data=%d\n,selfaddr=%d\n,nextaddr=%d\n",temp->data,temp,temp->next);
 			temp=temp->next;
		 }
	 }
 	printf("data=%d \n selfaddr=%d \n next addr=%d \n",newnode1->data,newnode1,newnode1->next);
 	printf("data=%d \n selfaddr=%d \n nextaddr=%d \n",newnode2->data,newnode2,newnode2->next);
 	display();
 }
