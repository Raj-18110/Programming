#include<iostream>
using namespace std;

struct node{

int data;
node* next;
};

//node *head=NULL;

void print_value(node* temp);
node* insertathead(node* head,int data);
node* removeathead(node* head);
node* createnode();


node* insertathead(node* head,int data)       //inserts node at the begining of the linkedlist and returns the address of the head
{
node* temp=createnode();                      //calls createnode function which returns the address for insertion;
temp->data=data;
temp->next=head;
head=temp;
return head;
}


node* removeathead(node* head)
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


int k=1,ch;int data;

while(k==1)
{

cout<<"1: insert\n"<<"2: remove\n"<<"3: print"<<endl;
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
}

cout<<"Continue press 1 else any other key"<<endl;
cin>>k;
}

cout<<"\nTHANK YOU"<<endl;



//print_value();

return 0;


}
