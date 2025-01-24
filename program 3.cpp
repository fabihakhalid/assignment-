#include<iostream>
using namespace std;
int main(){
	int number;
	int positiveCounter=0;
	int negativeCounter=0;
	
	cout<<"Enter your number : ";
	cin>>number;
	
	if (number>0){
		positiveCounter++;
	}else if(number<0) {
		negativeCounter++;
	}while (number != 0)
	
	
	cout<<"The total number of positive number are : "<<positiveCounter<<endl;
	cout<<"The total number of negative number are : "<<negativeCounter<<endl;
return 0;
}
