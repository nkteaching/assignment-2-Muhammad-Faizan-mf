#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class st{
	public:
	node *top_st1=NULL;
	push(int d){
			//push function
			node *t=new node;
			t->data=d;
			t->next=top_st1;
			top_st1=t;	
		}
		int pop(){
			//pop function
			if(top_st1==NULL){
				cout<<"Empty stack\n";
				return 0;
			}	
			node *t=top_st1;
			int a=t->data;
			top_st1=top_st1->next;
			t->next=NULL;
			delete t;
			return a;
		}
		disp(){
			//display function
		node *t=top_st1;
		cout<<endl;
		while (t!=NULL){
			cout<<t->data<<endl;
			t=t->next;
		}}
		int len(){
			//length function
		node *t=top_st1;
		int i=0;
		while(t!=NULL){
			t=t->next;
			i++;
		}
		return i;
		}
};

main(){
	st S,t1,t2;//two tmp stack
	//pushing data on stack
		int d;
	cout<<"Enter the values for stack and -1 to exit\n";
	cin>>d;
	while(d!=-1){
	S.push(d);
	cin>>d;
}	
}
