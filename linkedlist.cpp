#include<iostream>
using namespace std;

struct node{

int data;
node* next;
};

//node *head=NULL;
// All the functions that are used in the program
void print_value(node* temp);
node* insertathead(node* head,int data);
node* removeathead(node* head);
node* createnode();
int listsize(node* head);
void insertatposition(node* head,int data,int position);
void removeatposition(node* head,int position);
node* reversal(node* head);
void middlenode(node* head);

void middlenode(node* head)     //prints the middle element of the linkedlist
{

int n=listsize(head);

n=n/2;
int i=0;
while(i<n)
{
i++;
head=head->next;
}

cout<<"middle element is: "<<head->data<<endl;

}





node* reversal(node* head)      //reverses the linkedlist 
{
node *next,*previous=NULL;
while(head!=NULL)
{
next=head->next;
head->next=previous;
previous=head;
head=next;
}
return previous;
}




void removeatposition(node* head,int position)
{
int n=listsize(head);
if(head==NULL){
cout<<"list is empty"<<endl;
return;}
if(position>=n)
{
cout<<"Position exceed beyond the list"<<endl;
return;
}
node* previous;
int count=0;
while(head!=NULL)
{
count++;
previous=head;
head=head->next;
if(count==position)
break;
}
previous->next=head->next;
}





void insertatposition(node* head,int data,int position)        //insert the element at any position mentioned by the user that should be less than size
{

int n=listsize(head);
if(head==NULL){
cout<<"list is empty"<<endl;
return;}

if(position>n)
{
cout<<"Position exceed beyond the list"<<endl;
return;
}
node* previous;
node* temp,*temp1;
temp=createnode();
temp->data=data;
int count=0;
while(head!=NULL)
{
count++;
previous=head;
head=head->next;
if(count==position)
break;
}
previous->next=temp;
temp->next=head;
}





int listsize(node* head)                        //gives the size of the list
{
int count=0;
while(head!=NULL)
{
head=head->next;
count++;
}
return count;
}




node* insertathead(node* head,int data)       //inserts node at the begining of the linkedlist and returns the address of the head
{
node* temp=createnode();                      //calls createnode function which returns the address for insertion;
temp->data=data;
temp->next=head;
head=temp;
return head;
}





node* removeathead(node* head)                 //removes element from the head of the linkedlist
{
if(head==NULL){
cout<<"sorry nothing is present to remove"<<endl;
return head;
}
head=head->next;
return head;
}


node* createnode()     //creates node and returns the address of the created node;
{

node* temp=new node();
temp->next=NULL;
return temp;

}


void print_value(node* temp)      //prints the data in the linkedlist using head 
{

//node *temp=head;
if(temp==NULL){
cout<<"Sorry list is empty"<<endl;
return;}
cout<<"list is: ";
while(temp!=NULL)
{

cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;

}


int main()
{

int n,i;
//cin>>n;
//int k;

node *head=NULL;


int k=1,ch;int data,position;

while(k==1)
{

cout<<"1: insert\n"<<"2: remove\n"<<"3: print\n"<<"4: size of list\n"<<"5: insert at particular position\n"<<"6: Delete from a particular position\n"<<"7: reverse linked list\n"<<"8: Middle element of linkedlist"<<endl;
cin>>ch;

switch(ch)
{


case 1:   cout<<"enter data: "<<endl;cin>>data;
          head=insertathead(head,data); 
          break;

case 2: head=removeathead(head);
        break;

case 3: print_value(head);
        break;

case 4: n=listsize(head);
        cout<<"size of list is: "<<n<<endl;
 	break;

case 5:  cout<<"Enter data and position"<<endl;
         cin>>data;
         cin>>position;
         if(position==0)
        {  head=insertathead(head,data);}
         else
          { insertatposition(head,data,position);}
         break;		
case 6: cout<<"Enter position to delete"<<endl;
        cin>>position;
        if(position==0)
          head=removeathead(head);
        else
          removeatposition(head,position);
        break;

case 7: head=reversal(head);
        break;     

case 8: middlenode(head);
        break;           
}

cout<<"Continue press 1 else any other key"<<endl;
cin>>k;
}

cout<<"\nTHANK YOU"<<endl;



//print_value();

return 0;


}
