#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
#define pb push_back
int main()
{
	int n;
	cin>>n;
string arr[n];
ll i,j;
ll ans=0;
map<string,ll> m1;
for(i=0;i<n;i++)
{
	cin>>arr[i];
	ll cc[26]={0};
	string hsh;
	for(j=0;j<arr[i].size();j++)
	{
		cc[arr[i][j]-'a']++;
	}
	// if(arr[i]=="ps")
	// 	cout<<"old="<<ans<<endl;
	for(j=0;j<26;j++)
	{
if(cc[j]%2)
	hsh+='1';
else
	hsh+='0';
	}
	if(m1.find(hsh)!=m1.end())
	ans=ans+m1[hsh];
	string nill=hsh;
	
for(j=0;j<26;j++)
{
	string st=nill;
if(hsh[j]=='0')
{
	st[j]='1';
 
}
else
st[j]='0';
if(m1.find(st)!=m1.end()&&st!=hsh)
ans=ans+m1[st];
}
m1[hsh]++;
// cout<<ans<<endl;
 
}
 
cout<<ans<<endl;
 
return 0;
}