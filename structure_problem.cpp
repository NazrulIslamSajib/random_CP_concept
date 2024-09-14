#include<bits/stdc++.h>
using namespace std;
struct sajib
{
    long long left;
    long long right;
    long long index;
};
bool cmp(const sajib &a,const sajib &b)
{
       if(a.left!=b.left)
       {
           return a.left<b.left;
       }
       return  a.right>b.right;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt=1;
   /// cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;
        vector<sajib>v;
        for(int i=1;i<=n;i++)
        {
            sajib tmp;
            long long x,y;
            cin>>x>>y;
            tmp.left=x;
            tmp.right=y;
            tmp.index=i;
            v.push_back(tmp);

        }
        sort(v.begin(),v.end(),cmp);
        vector<long long>con1(n+1,0);
        vector<long long>con2(n+1,0);
        long long max1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].right<=max1)
            {
                con2[v[i].index]=1;
            }
            max1=max(max1,v[i].right);

        }
        long long min1=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i].right>=min1)
            {
                con1[v[i].index]=1;
            }
            min1=min(v[i].right,min1);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<con1[i]<<" ";
        }
        cout<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<con2[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}


