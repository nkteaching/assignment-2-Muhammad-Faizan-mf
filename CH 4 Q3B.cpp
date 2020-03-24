#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class stack{
	public:
node *top=NULL;

		push(int d){
			
			node *t=new node;
			t->data=d;
			t->next=top;
			top=t;
		}
		int pop(){
			
			if(top==NULL){
				cout<<"Empty stack\n";
				return 0;
			}
//			cout<<top->data<<endl;
			node *t=top;
			int a=t->data;
			top=top->next;
			t->next=NULL;
			delete t;
			return a;
		}
		disp(){
		node *t=top;
		cout<<endl;
		while (t!=NULL){
			cout<<t->data<<"  ";
			t=t->next;
		}
	}
	int len(){
			//length function
		node *t=top;
		int i=0;
		while(t!=NULL){
			t=t->next;
			i++;
		}
		return i;
		}
};
int main(){
	stack S1,S2;//stack
	//input data
	int d;
	cout<<"Enter the values for stack and -1 to exit\n";
	cin>>d;
	while(d!=-1){
	S1.push(d);
	cin>>d;
}	
	cout<<"Stack One\n";
	
	S1.disp();
	int l=S1.len();//len of s1
	//placing -1 temporary to reach top
	for(int i=0;i<l;i++)
	S2.push(-1);
	node *t=S2.top;
	for(int i=0;i<l;i++)
	{
		t->data=S1.pop();
		t=t->next;
	}
	cout<<"\nStack Two in same order\n";
	//S2 in same order
	S2.disp();
	return 0;
}
