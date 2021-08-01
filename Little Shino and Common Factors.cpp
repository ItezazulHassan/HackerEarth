#include<iostream>
#include<math.h>
using namespace std;
long long gcd(long long, long long);
long long commDiv(long long, long long);

int main() {
	long long a;
	cin >> a;
	long long b;
	cin>>b;
	cout<<commDiv(a,b);
}
long long commDiv(long long a, long long b)
{
    long long n = gcd(a, b);
    int result;
	result=0;
	int i;
	i=1;
    for (i = 1; i <= sqrt(n); i++) {
        if (n % i == 0 && n/i == i) {
            result += 1;
        }
		else if(n % i == 0 && n/i != i){
			result += 2;
		}
    }
    return result;
}
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}