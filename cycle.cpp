#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> gra,int s,vector<int> &visited)
{
    if(visited[s]==1) return true;
    visited[s]=1;
    for(int i=0;i<gra.size();i++ )
    {
        if(gra[i][s]==1)
        {
            if(dfs(gra,i,visited) || visited[i]==1)
            {
                return true;
            }
        }
    }
    visited[s]=2;
    return false;
}

bool iscycle(vector<vector<int>> &gra)
{
    vector<int> visited(gra.size(),0);
    for(int i=0;i<gra.size();i++)
    {
        if(!visited[i])
        {
            if(dfs(gra,i,visited))
            {
                return true;
            }
        }
    }
    return false;
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
    
    if(iscycle(gra))
    {
        cout<<"cycle";
    }
    else
    {
        cout<<"not cycle";
    }
    return 0;
}
