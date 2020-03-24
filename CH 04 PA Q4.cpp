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
			
			node *t=new node;
			t->data=d;
			t->next=top_st1;
			top_st1=t;
	}
	int pop(){
			
			if(top_st1==NULL){
				cout<<"Empty stack\n";
				return 0;
			}
			node *t=top_st1;
			int a=t->data;
//			cout<<t->data<<"  ";
			top_st1=top_st1->next;
			t->next=NULL;
			delete t;
			return a;
		}
		
	disp(){
		node *t=top_st1;
		cout<<endl;
		while (t!=NULL){
			cout<<t->data<<"  ";
			t=t->next;
		}}
		st sum(st t1,st t2,st res){
			int s=0,c=0;
			while(t1.top_st1!=NULL && t2.top_st1!=NULL){
				s=t1.top_st1->data+t2.top_st1->data;	
				if(s>9){
					if(c==0){
					
					c=s/10;
					s%=10;
					cout<<s;
					res.push(s);}
					else{
					s+=c;
					c=s/10;
					s%=10;
					cout<<s;
					res.push(s);		
						
					}
				}
				else{
					if(c==0){
					cout<<s;
					res.push(s);
				}
					else{
						s=c+s;
						if(s>9){
					c=s/10;
					s%=10;
					cout<<s;
					res.push(s);
				}
					}
				}
			
				t1.top_st1=t1.top_st1->next;
				t2.top_st1=t2.top_st1->next;
			}
			if(t1.top_st1!=NULL){
				while(t1.top_st1!=NULL)
			{
					if(c==0){
					int a=t1.pop();
					cout<<a;	
					res.push(a);
					t1.top_st1=t1.top_st1->next;
				}
				else{
					s=c+t1.pop();
					if(s>9){
					c=s/10;
					s%=10;
					cout<<s;
					res.push(s);		
					}}	
					t1.top_st1=t1.top_st1->next;
					
					}
			}
			if(t2.top_st1!=NULL){
				while(t2.top_st1!=NULL)
			{
					if(c==0){
					int a=t2.pop();
					cout<<a	;
					res.push(a);
					t2.top_st1=t2.top_st1->next;
				}
				else{
					s=c+t2.pop();
					if(s>9){
					c=s/10;
					s%=10;
					cout<<s;
					res.push(s);		
					}}	
					t2.top_st1=t2.top_st1->next;
					
					}
			}
			
			
			
//			int s=t1.top_st1->data+t2.top_st1->data;
//			res.push(s);
//			return res;
		}
};
int main(){
	int a=9234;
	int b=21199;
	
	st st1,st2,t,t2,res;
	while(a>0){
		st1.push(a%10);
		a/=10;
	}
//	st1.disp();
//	cout<<endl<<st1.top_st1->data;
	while(b>0){
		st2.push(b%10);
		b/=10;
	}
	cout<<endl;
//	st2.disp();
	cout<<endl;
	
	while(st1.top_st1!=NULL){
		t.push(st1.pop());
	}
	cout<<endl;
	t.disp();
	cout<<endl;
	
	while(st2.top_st1!=NULL){
		t2.push(st2.pop());
	}
	cout<<endl;
	
	t2.disp();
//	cout<<endl<<t.top_st1->data;
//	cout<<endl<<st1.sum(t,t2,res);
	cout<<endl;
	
	res=st1.sum(t,t2,res);
	
//	cout<<endl<<res.pop();
	
//	cout<<res.top_st1->data;
	return 0;
}
