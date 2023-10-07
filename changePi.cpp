#include<bits/stdc++.h>
using namespace std;
void changepi(string s){
    if(s.length()==0){
		return;
	}
	if(s[0]=='p'&& s[1]=='i'){
		cout<<"3.14";
		changepi(s.substr(2));
		
	}
	else{
		cout<<s[0];
		changepi(s.substr(1));
		
	}
}
int main(){
	string s="pipipqrpi";
	changepi(s);
	
}
