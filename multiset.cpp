#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt=1;
    ////cin>>tt;
    while(tt--)
    {
       long long n,m;
       cin>>n>>m;
       multiset<long long>ms;
       long long arr[n+10];
       for(int i=1;i<=n;i++)
       {
           long long x;
           cin>>x;
           ms.insert(x);
       }
       for(int i=1;i<=m;i++)
       {
           long long x;
           cin>>x;
           auto ok=ms.upper_bound(x);
           if(ok==ms.begin())
           {
               cout<<-1<<endl;
           }
           else
           {
               ok--;
               long long num=*ok;
               cout<<num<<endl;
               ms.erase(ok);
           }
       }
    }
    return 0;
}

