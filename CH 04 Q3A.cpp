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
	stack S1,S2,t;
		int d;
	cout<<"Enter the values for stack and -1 to exit\n";
	cin>>d;
	while(d!=-1){
	S1.push(d);
	cin>>d;
}
	cout<<endl<<"Data on S1"<<endl;
	
	S1.disp();
	int l=S1.len();
	//copying data in S2 in same order as S1
	for(int i=0;i<l;i++)
	t.push(S1.pop());
	for(int i=0;i<l;i++)
	S2.push(t.pop());
	cout<<endl<<"Data on S2 is in same order"<<endl;
	//S2 is now in same order
	S2.disp();
	
	
	
	
	return 0;
}
