/*
ID: rvpande1
TASK: 
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(const int n){
	int temp=n;
	vector<int> v;
	while(temp>0){
		int lol=temp%10;
		v.push_back(lol);
		temp/=10;
	}
	int l = v.size();
	for(int i=0;i<l/2;i++){
		if(v[i]!=v[l-1-i])return false;
	}
	return true;
}
int maxPalindrome(int n){
	int a,b;
	a=pow(10,n-1);
	b=pow(10,n)-1;
	int p,lp=1;
	
	while(b>a){
		int c=b;
		while(c>a){
			p=c*b;
			if(isPalindrome(p) && lp<p){
				lp=p;
			}
			c--;
		}
		b--;
	}
	return lp;
}

int main() {
	int n;
	cin>>n;
	
	cout<<maxPalindrome(n)<<endl;

	return 0;
}

