///fanwick  tree
#include<bits/stdc++.h>
using namespace std;
const int mx=2e5+10;
long long bit[mx];
long long nn;
long long get(long long cursize) //// current je index ache jeta theke 1 pojjonto jabe and sum gula return korbo
{
    long long sum=0;
    while(cursize)
    {
        sum+=bit[cursize];
        cursize-=(cursize & -cursize);
    }
    return sum;
}
void update(long long i,long long x)  /// current index theke upto n pojjonto ami jabo and x er man update korbo .
{
      while(i<=nn)
      {
          bit[i]+=x;
          i+=(i& -i);
      }
}
int main()
{
    long long tt;
    for(int i=0;i<=mx-10;i++)
    {
        bit[i]=0;
    }
    cin>>tt;
    while(tt--)
    {

        cin>>nn;
        long long arr[nn+10];
        long long ans=0;
        for(int i=1;i<=nn;i++)
        {
            cin>>arr[i];
            ans+=get(nn)-get(arr[i]-1);    ////get gula ith theke 1 pojjonto prefix sum er moto dey .
            update(arr[i],1LL);
        }
        cout<<ans<<endl;
        for(int i=0;i<=nn+10;i++)
        {
            bit[i]=0;
        }

    }

}
