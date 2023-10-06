#program related to two to the power m.
#include<iostream>
using namespace std;
int poweroftwo(int n){
	if(n==0) return 1;
	return 2*poweroftwo(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<"The power of two is: "<<poweroftwo(n);
}
