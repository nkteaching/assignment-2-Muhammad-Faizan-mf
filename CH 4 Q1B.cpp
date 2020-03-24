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
struct QNode { 
	int data; 
	QNode* next; 
	QNode(int d) 
	{ 
		data = d; 
		next = NULL; 
	} 
};
struct Queue { 
	QNode *front, *rear; 
	Queue() 
	{ 
		front = rear = NULL; 
	} 

	void enQueue(int x) 
	{ 
		// Create a new LL node 
		QNode* temp = new QNode(x); 

		// If queue is empty, then 
		// new node is front and rear both 
		if (rear == NULL) { 
			front = rear = temp; 
			return; 
		} 
		// Add the new node  
		rear->next = temp; 
		rear = temp; 
	} 

	// Function to remove 
	// a key from given queue q 
	int deQueue() 
	{ 
		// If queue is empty, return NULL. 
		if (front == NULL) 
			return 0; 

		// Store previous front and 
		// move front one node ahead 
		QNode* temp = front; 
		front = front->next; 

		// If front becomes NULL, then 
		// change rear also as NULL 
		if (front == NULL) 
			rear = NULL; 
		int a=temp->data;
		delete (temp); 
		return a;
	} 
	
};
main(){
	st S,t1;//tmp and S stack
	//pushing data on stack
		int d;
	cout<<"Enter the values for stack and -1 to exit\n";
	cin>>d;
	while(d!=-1){
	S.push(d);
	cin>>d;
}		S.disp();//display stack S1
	Queue qu;
	int l=S.len();
	//Enqueue data on queue
	for(int i=0;i<l;i++){
		qu.enQueue(S.pop());
	}
	//pushing data of Q on stack S
	for(int i=0;i<l;i++){
		S.push(qu.deQueue());
	}
	//Now we have S in reverse order
	cout<<"Reverse order using one additional Queue.\n";
	S.disp();
}
