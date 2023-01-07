/*
author : santanukgp
problem:https://codeforces.com/problemset/problem/{ProblemSet}/{ProblemNumber}
*/
#include<bits/stdc++.h>
using namespace std;
void permute(string str, int l, int r){
	if(l==r){
		cout<< str<<"\n";
		return;
	}
	for(int i=l;i<=r;i++){
		swap(str[l],str[i]);
		permute(str,l+1,r);
		swap(str[l],str[i]);
	}
}
int main(){
	permute("abcd",0,3);
	return 0;
}
