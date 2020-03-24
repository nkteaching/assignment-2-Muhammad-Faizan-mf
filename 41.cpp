#include<iostream>
#include<string.h>
using namespace std;

//char* stack; 
int to = -1; 
struct node{
	char data;
	node *next;
};

class st{
public:
	node *top=NULL;

void push(char c){
	node *t=new node;
	t->data=c;
	t->next=top;
	top=t;
	to++;
} 
// pop function 
char pop(){
//	cout<<"top: "<<top->data;
	node *t=top;
	char a=top->data;
	top=top->next;
	t->next=NULL;
	delete t;
	return a;
}
  
// Function that returns 1 
// if str is a palindrome 
//int isPalindrome(char str[]) 
//{ 
//    int length = strlen(str); 
//  
//    // Allocating the memory for the stack 
//    node *t= new node; 
//  
//    // Finding the mid 
//    int i, mid = length / 2; 
//  
//    for (i = 0; i < mid; i++) { 
//        push(str[i]); 
//    } 
//     if (length % 2 != 0) { 
//        i++; 
//    } 
//  
    // While not the end of the string 
//    while (str[i] != '\0') { 
//        char ele = pop(); 
//  
//        // If the characters differ then the 
//        // given string is not a palindrome 
//        if (ele != str[i]) 
//            return 0; 
//        i++; 
//    } 
//  
//    return 1; 
//}
disp(){
		node *t=top;
		cout<<endl;
		while (t!=NULL){
			cout<<t->data<<"  ";
			t=t->next;
		}
}
};
main(){
//char str[] = "madwwam";
	st a,b;
	char d;
	cout<<"Enter the string and press 0 to exit\n";
	cin>>d;
	int len=0;
	while(d!='0'){
	a.push(d);
	cin>>d;
	len++;
	}
//	a.disp();
	
//	 cout<<len;
	 if(len%2==0){
	 	len=len/2;
	 	cout<<len;
	 	while(len!=0)
	 	{
	 		b.push(a.pop());
		 	len--;
		 }
	 }
	 b.disp();
//  	cout<<a.pop();
//    if (isPalindrome(str)) { 
//        printf("Yes"); 
//    } 
//    else { 
//        printf("No"); 
//    } 	
}
