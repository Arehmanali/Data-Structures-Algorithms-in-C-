;This programs contains node construct in which we defined functions to add, remove  and show list list of nodes using struct
#include<iostream>
using namespace std;

;Defined a struct node
struct node{
	
	int data;
	node *next;
	};

;Function to check if List is empty
bool isEmpty(node *head){
	
	if(head==NULL){
		
		return true;
		
	}
	else {
		
		return false;
	
	}
	
}

;Menu Function
char menu(){
	
	char choice;
	cout<<"Menu"<<endl;
	cout<<"1. Add an item \n";
	cout<<"2. Remove an item \n";
	cout<<"3. Show the List. \n";
	cout<<"4. Exit \n"n;
	
	cin>>choice;
	return choice;
}

;Function to insert as first Element
void insertAsFirstElement(node *&head, node *&last , int data){
	
	node *temp= new node;
	temp->data=data;
	temp->next=NULL;
	head=temp;
	last=temp;
}

;Funtion to insert in the list
void insert(node *&head, node *&last , int data){
	
	if(isEmpty(head)){
		
		insertAsFirstElement(head,last,data);
		
	}
	else{
		
		node *temp=new node;
		temp->data=data;
		temp->next=NULL;
		last->next=temp;
		last=temp;
		
	}
}

;lFunction to remove from List
void remove(node *&head, node *&last){
	
	if(isEmpty(head)){
		
		cout<<"List is empty"<<endl;
		
	}
	else if(head==last){
		delete head;
		head=NULL;
		last=NULL;
	}
	else{
		node *temp=head;
		head=head->next;
		delete temp;
	}
}

;lFunction to print all the data in the Linked List
void showList(node * current){
	if(isEmpty(current)){
		cout<<"List is empty"<<endl;
	}
	else{
		 cout<<"The list contains:"<<endl; 
		 while(current!=NULL){
		 	cout<<current->data<<endl;
		 	current=current->next;
		 }
	}
}

 


int main(){
	node * head=NULL;
	node * last=NULL;
	char choice;
	int data;
	
	do{
		choice=menu();
		switch(choice){
			
			case '1':
				cout<<"Please enter a number";
				cin>>data;
				insert(head, last, data);
				break;
				
			case '2': 
				remove(head, last);
				break;
				
			case '3':
				showList(head);
				break;
				
			default: cout<<"System exit\n";
		}
	}while(choice !='4');
	
	
	return 0;
}
