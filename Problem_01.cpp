/*
author : santanukgp
problem:https://codeforces.com/problemset/problem/{ProblemSet}/{ProblemNumber}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	if(sizeof(int)>-1) cout<<"Yes\n";
	else cout<<"No\n";
	/*
	In C++, when an integer value is compared with an unsigned it,
	the int is promoted to unsigned. Negative numbers are stored in 2's complement 
	form and unsigned value of the 2's complement form is much higher than the sizeof int.
	*/
	
	int i;
	cout<<"Enter an integer: ";
//	cin>> i+4; 
	cout<<i;
	return 0;
}
