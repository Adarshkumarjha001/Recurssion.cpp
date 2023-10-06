#include<bits/stdc++.h>
using namespace std;
int fibbonnic(int n){
	if(n==0) return 0;
	if (n==1) return 1;
    return fibbonnic(n-1)+fibbonnic(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibbonnic(n);
}
