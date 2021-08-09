#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	node *next;
};


void insertatend(int, node *);			//Function to Insert node at the end of the list
void deleteatbeg(node *);				//Function to delete the beginning node in the list
void deleteatend(node *);				//Function to delete the last node in the list
void checklist(node *);					//function to check the list is empty or not


void insertatend(int data, node *start)
{
	checklist(start);
	node *temp, *p;
	p=((node *)malloc(sizeof(node)));
	p->data=data;
	p->next=NULL;
	temp = start;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=p;	
}


void deleteatbeg(node *start)
{
	checklist(start);
	node *temp;
	temp=start;
	start=start->next;
	free(temp);
}


void deleteatend(node *start)
{
	checklist(start);
	node *temp, *p;
	temp = start;
	p = start;
	while(temp->next!=NULL)
	{
		p = temp;
		temp=temp->next;
	}
	
	if(temp==start)
		temp=NULL;
	else	
		p->next=NULL;
		
	free(temp);		
}



void checklist(node *start)
{
	if(start=NULL)
	{
		cout<<"Linked List is empty";
		exit(0);
	}
	
		
}


int main()
{
	node *start;
	start = NULL;
	cout<<start->data;
	
	return 0;
}
