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
int displayrecur(node *head2){
	static int l=0;
	if(head2==NULL)
	return l;
//		cout<<head2->data<<"  ";
		l++;
		displayrecur(head2->next);
		
//		return l;
}
main(){
cout<<"Enter linked list data in sorted format and press -1 to exit\n";
	int dd;
	cin>>dd;
	while(dd!=-1){
		insert(dd);
		cin>>dd;
	}
	cout<<"Length is "<<displayrecur(head);

}
