/*
ID: rvpandey99
TASK: 
LANG: C++
*/

#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
	if(a%b==0)return b;
	else return gcd(b,a%b);
}
ll lcm(ll a, ll b){
	ll c=gcd(a,b);
	ll d=a*b/c;
	return d;
}

int main() {
	ll n;
	cin>>n;
	ll temp=1;
	for(ll i=1;i<=n;i++){
		temp=lcm(temp,i);
	}
	cout<<temp<<endl;
	return 0;
}


