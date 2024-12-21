///https://codeforces.com/contest/35/problem/C
#include<bits/stdc++.h>
using namespace std;
queue<pair<long long,long long>>q;
pair<long long,long long>ans;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
long long n,m;
bool vis[2010][2010];
bool is_valid(int x,int y)
{
    if(x>=1 && x<=n && y>=1 && y<=m)
    {
        return true;
    }
    return false;
}
void bfs()
{
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        ans={x,y};
        q.pop();
        for(int k=0;k<=3;k++)
        {
            int x1=x+dx[k];
            int y1=y+dy[k];
            if(is_valid(x1,y1) && vis[x1][y1]==false)
            {
                q.push({x1,y1});
                vis[x1][y1]=true;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ifstream input("input.txt");
    ofstream output("output.txt");
    input>>n>>m;
    long long k;
    input>>k;
    while(k--)
    {
        int u,v;
        input>>u>>v;
        vis[u][v]=true;
        q.push({u,v});
    }
    bfs();
    output<<ans.first<<" "<<ans.second<<endl;
    input.close();
    output.close();
    return 0;
}

