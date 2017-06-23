#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
#define ll long long
#define test ll t;sd(t);while(t--)
#define sd(n) scanf("%lld", &n)
#define repi(a, b) for(ll i=a;i<b;i++)
#define repj(a, b) for(ll j=a;j<b;j++)
#define rofi(a, b) for(ll i=a;i>b;i--)
#define rofj(a, b) for(ll j=a;j>b;j--)
ll pow(ll a, ll n, ll p)
{
	if(n==0)
		return 1;
	if (n==1)
		return a;
	ll temp=1;
	while(n>1)
	{
		if(n%2)
		{
			temp=(temp*a)%p;
		}
		a=a*a%p;
		n/=2;
	}
	return temp*a%p;
}
bool isPrime(ll n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	ll d = n-1;
	ll r=0;
	while(d%2==0)
	{
		d/=2;
		r+=1;
	}
	srand(time(NULL));
	ll epochs = 20;
	ll a;
	while(epochs--)
	{
		a = 2 + rand()%min((ll)(1000000000), n-2);
		if(pow(a, n-1, n)!=1)
			return false;
		a = pow(a, d, n);
		if(a==1 || a==n-1)
			continue;
		repi(0, r-1)
		{
			a = pow(a, 2, n);
			if(a==1)
				return false;
			else if(a==n-1)
				break;
		}
		if(a!=n-1)
			return false;
	}
	return true;
}
int main()
{
	ll n;
	cout<<"Enter the number to be checked for primality  :  ";
	cin>>n;
	if(isPrime(n))
		cout<<"The number is prime."<<endl;
	else
		cout<<"The number is composite."<<endl;
}