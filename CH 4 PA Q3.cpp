#include<iostream>
using namespace std;
struct node{
	char data;
	node *next;
};
node *top=NULL;
void push(char c){
	node *t=new node;
	t->data=c;
	t->next=top;
	top=t;
}
void pop(){
//	cout<<"top: "<<top->data;
	node *t=top;
	top=top->next;
	t->next=NULL;
	delete t;
}
//void disp(){
//	node *t=top;
//	while(t!=NULL){
//		cout<<t->data<<" ";
//		t=t->next;
//	}
//}
bool check(char *eq){
	for(int i=0;eq[i]!='\0';i++){
		if(eq[i]=='{' || eq[i]=='(' || eq[i]=='['){
			push(eq[i]);
		}
		else if(eq[i]=='}' || eq[i]==')' || eq[i]==']'){
			if(top==NULL)
			return false;
			char a=top->data;
			switch(eq[i]){
				case ')':
					pop();
					if(a=='{' || a=='[')
					return false;
					break;
				
				case ']':
					pop();
					if(a=='{' || a=='(')
					return false;
					break;
				
				case '}':
					pop();
					if(a=='(' || a=='[')
					return false;
					break;
						
			}	
		}
		}
	if(top==NULL)
	return true;
	else return false;
}
main(){
	char equ[]="{[a+b]+(2a)}";
	cout<<equ<<endl;
	bool res =check(equ);
	if(res==true)
	cout<<"\nValid Parenthesis";
	else
	cout<<"\nInvalid Parenthesis";
	
}
