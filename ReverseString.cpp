#include<bits/stdc++.h>
using namespace std;
string reversestring(string s){
	int n=s.length();
	
	for(int i=0,j=n-1;i<j;i++,j--){
		swap(s[i],s[j]);
		
	}
	return s;
	
}
int main(){
	string s="Adarsh";
	string p=reversestring(s);
	cout<<p;
	
	
}
