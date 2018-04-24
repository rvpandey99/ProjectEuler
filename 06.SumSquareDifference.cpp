/*
ID: rvpandey99
TASK: Sum square difference
LANG: C++
*/

#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

int main() {
	ll n,ssq=0;
	cin>>n;
	for(ll i=1;i<=n;i++){
		ssq+=pow(i,2);
	}
	ll sum=(n*(n+1)/2),dif;
	dif=pow(sum,2) - ssq;
	cout<<dif<<endl;
	system("pause");
	return 0;
}


