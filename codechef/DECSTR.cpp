#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
#define ll long long
#define test ll t;sd(t);while(t--)
#define sd(n) scanf("%lld", &n)
#define repi(a, b) for(ll i=a;i<b;i++)
#define repj(a, b) for(ll j=a;j<b;j++)
#define rofi(a, b) for(ll i=a;i>b;i--)
#define rofj(a, b) for(ll j=a;j>b;j--)
int main()
{
	test
	{
		string str = "zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba";
		ll n;
		cin>>n;
		ll ansLen = n+1+(n-1)/25;
		cout<<str.substr(str.length()-ansLen, ansLen)<<endl;
	}

}