#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp=NULL,*cur=NULL,*new=NULL,*hhead=NULL,*htemp=NULL;
Insertion(struct node *head,int val)
{	temp=head;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	if(temp==NULL) temp=new;
	else
		{
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=new;
		}
}
Display(struct node *head)
{
	for(temp=head;temp->next!=NULL;temp=temp->next) printf("%d ",temp->data);
	printf("%d",temp->data);l
}
main()
{
	char ch;int val;
	while(ch!='\n')
		{
			scanf("%d%c",&val,&ch);
			new=(struct node*)malloc(sizeof(struct node));
			new->data=val;
			new->next=NULL;
			if (val%2==0)
				{
					if(head==NULL) {head=new;temp=head;}
					else	{temp->next=new;temp=temp->next;}
				}
			else
				{
					if(hhead==NULL) {hhead=new;htemp=hhead;}
					else {htemp->next=new;htemp=htemp->next;}
				}
		}
	if(hhead==NULL) 
		{
		Display(head);
		printf("\n");
		if(head!=NULL) {Display(head);}
		}
	if(head==NULL) 
		{	
		Display(hhead);
		printf("\n");
		if(hhead!=NULL) {Display(hhead);}
		}
	if(hhead!=NULL && head!=NULL)
	{	
		Display(hhead);
		if(head!=NULL) {printf(" ");Display(head);}
		printf("\n");
		Display(head);
		if(hhead!=NULL) {printf(" ");Display(hhead);}
	}
	
	
	return 0;
	
	
}
