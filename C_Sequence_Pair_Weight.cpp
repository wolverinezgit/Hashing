#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;	
	ll arr[n];
	ll i,j;
	for(i=0;i<n;i++)
		cin>>arr[i];
	map<ll,vector<ll>> m1;
for(i=0;i<n;i++)
{
	m1[arr[i]].pb(i);
}
ll ans=0;
for(auto x:m1)
{
	ll pre=0;
	for(j=0;j<(x.second).size();j++)
	{

ans=ans+(n-((x.second)[j]))*(pre);
pre+=((x.second)[j]+1);
	}
}
cout<<ans<<endl;
}
return 0;
}
 
//
 

 
 
 //1 5 7 2 3 4 5 6