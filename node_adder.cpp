//GARIMA ANGELINA
//PRN:22070123042
#include<iostream>
using namespace std;
class node{
	public:
		int data ;
		node *next;
	public:
		node(){
			data=0;
			next=NULL;
		}
};

node* head;

void atBegining(int data){
	node *newnode=new node;
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}

void end_adder(int data){
	node* temp= head;
	while(temp->next!=NULL){
		//cout<<"data  ="<<temp->data<<"  Self Address - "<<temp<<"  next address  - "<<temp->next<<endl;
		temp=temp->next;}
	node *newnode=new node;
	newnode->data=data;
	temp->next=newnode;	
		
	
	
}
void display(){
	node* temp= head;
	while(temp!=NULL){
		cout<<"data  ="<<temp->data<<"  Self Address - "<<temp<<"  next address  - "<<temp->next<<endl;
		temp=temp->next;
	}
	
}

main(){

	
	node* newnode1= new node;
	newnode1->data =10;
	
	head=newnode1;
	
	node* newnode2= new node;
	newnode2->data =20;
	
	node* newnode3= new node;
	newnode3->data =30;
	
	node* newnode4= new node;
	newnode4->data =40;
	
	newnode1->next = newnode2;
	newnode2->next = newnode3;
	newnode3->next = newnode4;
	
//	cout<<"data 1 ="<<newnode1->data<<"  Self Address1 - "<<newnode1<<"  next address 1 - "<<newnode1->next<<endl;
//	cout<<"data 2 ="<<newnode2->data<<"  Self Address2 - "<<newnode2<<"  next address 2 - "<<newnode2->next<<endl;
//	cout<<"data 3 ="<<newnode3->data<<"  Self Address3 - "<<newnode3<<"  next address 3 - "<<newnode3->next<<endl;
//	cout<<"data 4 ="<<newnode4->data<<"  Self Address4 - "<<newnode4<<"  next address 4 - "<<newnode4->next<<endl;
	
	cout<<"Printing by Loop - "<<endl;
	//node* temp= head;
	//atBegining(60);   //first function first call
	//atBegining(70);   //first function second call
	//while(temp!=NULL){
	//	cout<<"data  ="<<temp->data<<"  Self Address - "<<temp<<"  next address  - "<<temp->next<<endl;
	//	temp=temp->next;
	//}
	end_adder(50);
	end_adder(100);
	display();
	
	
	
}