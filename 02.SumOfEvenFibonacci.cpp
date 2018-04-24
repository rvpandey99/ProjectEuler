/*
ID: rvpandey99
TASK: 02.SumOfEvenFibonacci
LANG: C++
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll sum=0,a=1,b=1;
	while(b<4000000){
		ll temp=a+b;
		if(temp<4000000 && temp%2==0)sum+=temp;
		a=b;
		b=temp;
	}
	cout<<sum<<endl;
	return 0;
}
