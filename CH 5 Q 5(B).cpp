#include <iostream>
using namespace std;
void printOdd(int cur, int limit);
int main()
{
    int upperLimit;
	//input n
    cout<<"Enter upper limit: ";
    cin>> upperLimit;
    cout<<"Odd Numbers from 1 to "<<upperLimit<<":  ";
    //function call
	printOdd(1, upperLimit); 
    
    return 0;
}

void printOdd(int cur, int limit)
{	//base case
    if(cur>limit)
        return;
    // Recursively call to printOdd to get next value
    printOdd(cur + 2, limit);
	cout<<cur<<"   ";	
    
}
