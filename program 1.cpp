#include<iostream>
using namespace std;
int main(){
	int n,i=1,sum=0;
	cout<<"enter your number :";
	cin>>n;
	while (i<=n){
		cout<<i<<"*"<<i<<"="<<i*i<<endl;
		sum+=i*i;
		i++;
		
		
	}
	cout<<"the result is "<<sum<<endl;
	return sum;
}
