#include<iostream>
using namespace std;
int main(){
	int start,end;
	int product = 1;
	bool foundOdd = false;
	
	cout<<"enter your starting number : " ;
	cin>>start;
	
	cout<<"enter your ending number : ";
	cin>>end;
	
	cout<<"The even number between" <<start << "and" <<end <<"are" <<endl;
	for (int i=start;i<=end;i++){
		if (i%2==0){
			cout<<i<<""<<endl;
		}
	}
	cout<<"The product of the odd numbers between "<<start<<" & "<<end<<" are "<<endl;
	for (int i=start;i<=end;i++)
	if (i%2!=0){
		product*=i;
		foundOdd=true;
		}
		
		if (foundOdd){
			cout<<"The product of odd numbers are "<<product<<endl;
		}else{
		cout<<"There was no odd numbers"<<endl;	
		}
		
	
	return 0;
}  