#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt=1;
    //cin>>tt=1;
    while(tt--)
    {
       long long gave,sum=0,first,i,n;
       cin>>n;
       vector<long long>v;
       cout<<"? "<<1<<" "<<n<<endl;
       cin>>gave;
       first=gave;
       cout<<"? "<<2<<" "<<n<<endl;
       cin>>gave;
       int second=gave;
       int one=first-second;
       sum+=one;
       v.push_back(one);
       for(i=2;i<=n-1;i++)
       {
          cout<<"? "<<i-1<<" "<<i<<endl;
          cin>>gave;
          v.push_back(gave-v[i-2]);
          sum+=gave-v[i-2];
       }
       v.push_back(first-sum);
       cout<<"! ";
       for(auto x:v)
       {
           cout<<x<<" ";
       }
       cout<<endl;

    }
    return 0;
}

