/*
ID: rvpandey99
TASK: 10001st prime
LANG: C++
*/

#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

bool isPrime(int m){
	ll s=sqrt(m);
	for(int i=2;i<=s;i++){
		if(m%i==0)return false;
	}
	return true;
}

int main() {
	ll n,count=1,i=2,out;
	cin>>n;
	while(count<=n){
		if(isPrime(i)){
			out = i;
			count++;
		}
		i++;
	}
	cout<<out;
	system("pause");
	return 0;
}


