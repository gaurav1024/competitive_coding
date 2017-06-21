#include <iostream>
#include <cstdio>
#include <cmath>
#include <cmath>
using namespace std;
#define ll long long
#define sd(n) scanf("%lld", &n)
#define repi(a, b) for(ll i=a;i<b;i++)
#define repj(a, b) for(ll j=a;j<b;j++)
#define rofi(a, b) for(ll i=a;i>b;i--)
#define rofj(a, b) for(ll j=a;j>b;j--)
#define test ll t;sd(t);while(t--)
void quicksort(ll ar[], ll low, ll high)
{
	if(low>=high)
		return;
	ll temp;
	ll mid=(low+high)/2;
	if((ar[high]-ar[mid])*(ar[low]-ar[mid])<0)
	{
		temp = ar[mid];
		ar[mid] = ar[low];
		ar[low] = temp;
	}
	else if((ar[mid]-ar[high])*(ar[low]-ar[high])<0)
	{
		temp = ar[high];
		ar[high] = ar[low];
		ar[low] = temp;
	}
	ll pivot = ar[low];
	ll lowctr=low;
	ll highctr=low;
	repi(low+1, high+1)
	{
		if(ar[i]>=pivot)
		{
			highctr++;
		}
		else if(ar[i]<pivot)
		{
			temp = ar[i];
			ar[i] = ar[lowctr+1];
			ar[lowctr+1] = temp;
			lowctr++;
			highctr++;
		}
	}
	ar[low]=ar[lowctr];
	ar[lowctr]=pivot;
	quicksort(ar, low, lowctr-1);
	quicksort(ar, lowctr+1, high);
}
ll sum(ll ar[], ll low, ll high)
{
	ll sum=0;
	repi(low, high+1)
		sum+=ar[i];
	return sum;
}
int main()
{
	test
	{
		ll n, k;
		sd(n);sd(k);
		ll ar[n];
		repi(0, n)
			sd(ar[i]);
		quicksort(ar, 0, n-1);
		cout<<max(sum(ar, k, n-1)-sum(ar, 0, k-1), sum(ar, n-k, n-1)-sum(ar, 0, n-k-1))<<endl;
	}
}