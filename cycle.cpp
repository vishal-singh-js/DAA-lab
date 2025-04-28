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
    vector<vector<int>> gra=
    {
        {0,1,1},
        {1,0,1},
        {1,1,0}
    };
    
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
