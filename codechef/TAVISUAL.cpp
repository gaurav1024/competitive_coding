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
ll flip(ll l, ll r, ll c)
{
	if(l>c || r<c)
		return c;
	return r+l-c;
}
int main()
{
	test
	{
		ll n, c, q, l, r;
		cin>>n>>c>>q;
		repi(0, q)
		{
			sd(l);sd(r);
			c = flip(l, r, c);
		}
		cout<<c<<endl;
	}
}