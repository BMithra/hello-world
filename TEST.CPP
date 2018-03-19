#include<iostream.h>
#include<conio.h>
# define maxcapacity 5
struct node
	{
	int data;
	struct node*next;
	};
class Linked_list
{
	private:
		node*head;
	public:
		Linked_list()
		{

		       head=NULL;

		}
		Linked_list(int elt)
		{
		 node*newnode= new node;
		 newnode->data=elt;
		 newnode->next=NULL;
		 head=newnode;
		}
		void insert_at_beginning(int elt)
		{
			node *newnode=new node;
			newnode->data=elt;
			if(head!=NULL)
			{
				newnode->data=elt;
			}
			else
			{
				  newnode->next=NULL;
			}
				  head=newnode;
		}
		void insert_at_end(int elt)
		{


			node *newnode=new node,*ptr;
			if(head!=NULL)
			{
				 ptr=head;
				 while(ptr->next!=NULL)
				 {
				    ptr=ptr->next;
				 }
				  ptr->next=newnode;
			}
			else
			{
				head=newnode;
			}
			  newnode->data=elt;
			  newnode->next=NULL;
		}
		void insert_at_middle(int search_elt,int elt)
		{
		       node *newnode=new node,*ptr;
		       ptr=head;
		       while((ptr!=NULL)&&(ptr->data!=search_elt))
		       {
				ptr=ptr->next;
				if(ptr!=NULL)
				{
					newnode->next=ptr->next;
					ptr->next=newnode;
				}
				else
				{
				 cout<<"\n\t Element not found!!!";
				}
		       }

		}
	 void display_list()
	 {
	       node *ptr;
	       ptr=head;
	       if(head==NULL)
	       {
			cout<<"\Linked list is empty" ;
	       }
	       cout<<"\n"   ;
	       while(ptr->next!=NULL)
	       {
		       cout<<"\n"<<ptr->data;
	       }
	 }
};
void main()
{
	int choice;
	clrscr();
	Linked_list l;
	cout<<"Linked list operations";
	cout<<"enter your choice";
	cout<<"\n(1). Insert a node at beginning";
	cout<<"\n(2). Insert a node at Middle";
	cout<<"\n(3). Insert a node at End";
	cin>>choice;
	cout<<"\n\t Enter the element to be inserted ";
	switch(choice)
	{
		  case 1:
			l.insert_at_beginning(5);
			l.display_list();
			break;
		  case 2:
			int search_elt;
			cout<<"\n Enter the element after which the node has to be added";
			cin>>search_elt;
			l.insert_at_middle(5,10);
			l.display_list();
			break;
		  case 3:
			l.insert_at_end(20);
			l.display_list();
			break;
		  default:
			cout<<"\ninvalid choice";
			break;
	}
}
