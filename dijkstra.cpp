#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void path(vector<int> &parent,int j)
{
    if(parenr[j]==-1)
    {
        cout<<j<<" ";
        return;
    }
    path(parent,parenr[j]);
    cout<<j<<" ";
}

void djk(vector<vector<int>> &gra,int s,int d)
{
    vector<int> visited(gra.size(),0);
    vector<int> dist(gra.size(),INT_MAX);
    vector<int> parent(gra.size(),-1);
    priority_queue<int> pq;
    dist[s]=0;
    visited[s]=1;
    pq.push(s);
    while(!pq.empty())
    {
        int u=pq.top();
        pq.pop();
        for(int v=0;v<gra.size();v++)
        {
            if(gra[u][v]!=0)
            {
                if(dist[v]>dist[u]+gra[u][v])
                {
                   dist[v]=dist[u]+gra[u][v];
                   parent[v]=u;
                   if(!visited[v])
                   {
                       pq.push(v);
                       visited[v]=1;
                   }
                }
            }
        }
    }
    for(int i=0;i<dist.size();i++)
    {
        cout<<i<<":"<<dist[i]<<endl;
    }
    path(parent,d);
}



int main() 
{
    int n;
    cout<<"enter ";
    cin>>n;
    vector<vector<int>> gra(n,vector<int> (n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>gra[i][j];
        }
    }
    int d;
    cout<<"enter dest : ";
    cin>>d;
    djk(gra,0,d);
    return 0;
}
