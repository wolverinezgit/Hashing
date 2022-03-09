https://practice.geeksforgeeks.org/problems/equal-0-1-and-23208/1/?page=1&difficulty[]=1&difficulty[]=2&category[]=Hash&sortBy=submissions#


class Solution {
  public:
    long long getSubstringWithEqual012(string str) 
    {
        long long ans=0,n=str.size(),i;
    map<pair<long long,long long>,long long > m1;
    long long ones=0,zeroes=0,twos=0;
    m1[{0,0}]++;
    for(i=0;i<n;i++)
    {
        if(str[i]=='0')
        zeroes++;
        if(str[i]=='1')
        ones++;
        if(str[i]=='2')
        twos++;
        ans+=m1[{ones-zeroes,twos-ones}];
        m1[{ones-zeroes,twos-ones}]++;
    }
    return ans;
    }