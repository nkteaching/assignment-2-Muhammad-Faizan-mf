#include<iostream>
#include<string.h>
using namespace std;
struct node{
	char data;
	node *next;
};
class st{
	public:
	node *top_st1=NULL;
	push(char d){
			//push function
			node *t=new node;
			t->data=d;
			t->next=top_st1;
			top_st1=t;	
		}
		char pop(){
			//pop function
			if(top_st1==NULL){
				cout<<"Empty stack\n";
				return 0;
			}	
			node *t=top_st1;
			char a=t->data;
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
bool palin_check(st S1,st S2){
	int l=S1.len();
	while(l!=0){
		char a=S1.pop();
		char b=S2.pop();
		if(a==b);
		else 
		return false;
		l--;
		
	}
 	if(S1.top_st1==NULL && S2.top_st1==NULL)
	return true;
	else
	return false;
}

main(){
	st s1,s2,t;
	
	s1.push('m');
	s1.push('a');
	s1.push('d');
	s1.push('a');
	s1.push('m');
	
	int l1=s1.len();
	for(int i=0;i<l1/2;i++)
	s2.push(s1.pop());
	int l2=s2.len();
	if(l1>l2)
	{
		s1.pop();
	}
	if(l2>l1)
	{
		s2.pop();
	}
	if(palin_check(s1,s2))
	cout<<"Is palindrome.";
	else
	cout<<"Is not palindrome";
}
