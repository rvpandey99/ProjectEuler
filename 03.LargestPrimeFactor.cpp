/*
ID: rvpandey99
TASK: LargestPrimeFactor
LANG: C++
*/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long n){
	long long i=2,s=sqrt(n);
	while(i<=s){
		if(n%i==0)return false;
		i++;
	}
	return true;
}

int main() {
	long long n,l=1;
	cin>>n;
	long long s=sqrt(n);
	if(isPrime(n))l=1;
	else
	for(long long i=1;i<=s;i++){
		if(n%i==0){
			long long t1,t2;
			if(isPrime(i)){
				t1=i;
			}
			if(isPrime(n/i)){
				t2=n/i;
			}
			if(t2>t1){
				l=t2;
			}else l=t1;
		}
	}
	cout<<l<<endl;
	return 0;
}


