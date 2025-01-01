#include<bits/stdc++.h>
using namespace std;
int a[20]={1,2,3,4,5,6,7,8,9,10};
bool vis[20];
int b[20];
void dfs(int s,int t)
{
    if(s==t)
    {
        for(int i=0;i<t;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=0;i<t;i++)
    {
        if(!vis[i])
        {
            vis[i]=true;
            b[s]=a[i];
            dfs(s+1,t);
            vis[i]=false;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    dfs(0,n);
    return 0;
}
