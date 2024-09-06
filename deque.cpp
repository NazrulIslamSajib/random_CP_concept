#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin>>tt;
    while(tt--)
    {
         deque<long long>dq;
         long long n,i;
         cin>>n;
         string s;
         cin>>s;
         long long zero=0,one=0;
         for(i=0;i<n;i++)
         {
             if(s[i]=='0')
             {
                 zero++;
             }
             else
             {
                 one++;
             }
             dq.push_back(s[i]-'0');
         }
         if(zero!=one || n%2==1)
         {
             cout<<-1<<endl;
             continue;
         }
         long long l=1,r=n,cnt=0;
         vector<long long>v;
         while(!dq.empty())
         {
             if(dq.front()==dq.back() && dq.front()==1)
             {
                 dq.push_front(1);
                 v.push_back(l-1);
                 l++;
                 dq.pop_back();
                 cnt+=2;
                 r--;
             }
             else if(dq.front()==dq.back() && dq.front()==0)
             {
                 v.push_back(r+cnt);
                 dq.push_back(0);
                 dq.pop_front();
                 r++;
                 l++;
             }
             else
             {
                 dq.pop_front();
                 dq.pop_back();
                 l++;
                 r--;
             }

         }
         cout<<v.size()<<endl;
         for(auto x:v)
         {
             cout<<x<<" ";
         }
         cout<<endl;
    }
    return 0;
}
