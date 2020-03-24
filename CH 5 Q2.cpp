#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL,*tail=NULL;
void insert(int d){
	node *t=new node;
	t->data=d;
	if(head==NULL){
		head=t;
		tail=t;
		t->next=NULL;
	}
	else{
		tail->next=t;
		tail=t;
		t->next=NULL;
		
		
	}
	
	
}
int len_recur(node *head){
	static int l=0;
	if(head==NULL)
	return l;
	l++;
	return len_recur(head->next);
}


main(){
cout<<"Enter linked list data and press -1 to exit\n";
	int dd;
	cin>>dd;
	while(dd!=-1){
		insert(dd);
		cin>>dd;
	}
	node *t=head;
	cout<<"Length: "<<len_recur(t);
}
//	display_rev_recurr(t);

