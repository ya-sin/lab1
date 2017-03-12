#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n<=0){
	cout<<"please enter a number greater than 0"<<endl;
	cin>>n;
}
cout<<n<<" ";
while(n!=1){
	if(n%2!=0) {
		n=3*n+1;
		cout<<n<<" ";
	}
	else{
		n=n/2;
		cout<<n<<" ";
	}
}
cout<<endl;
}
