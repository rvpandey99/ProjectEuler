/*
ID: rvpandey99
TASK: Multiples of 3 and 5
LANG: C++
*/

#include <iostream>

using namespace std;

long long int sumMultiple(long long a,long long limit){
	long long sum=0,multiple=0,i=1;
	while(1){
		multiple=a*i;
		if(multiple<limit){
			sum+=multiple;
		}else return sum;
		i++;		
	}
	return -1;
}
long long gcd(long long a, long long b){
	if(a%b==0)return b;
	else return(gcd(b,a%b));
	return 1;
}

int main() {
    long long sum=0,limit,a,b,lcm;
    cout<<"Please Enter two number whose multiple is to be calculated followed by the limit.(Numbers should be space separated)\nFor Example: 3 5 1000"<<endl;
    cin>>a>>b>>limit;
    lcm=a*b/gcd(a,b);
	sum= sumMultiple(a,limit) + sumMultiple(b,limit) - sumMultiple(lcm,limit);
	cout<<"Sum of the multiples of "<<a<<" and "<<b<<" which are less than "<<limit<<" is: "<<sum<<endl;	
    return 0;
}

