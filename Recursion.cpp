
#progeam for finding sum of n number.

#include<iostream>
using namespace std;
int sum(int n){
	if (n==0){
		return 0;
	}
	return n+sum(n-1);
}
int main(){
	int n;
	cin>>n;
	int p=sum(n);
	cout<<"The sum is: "<<p;
	
}
