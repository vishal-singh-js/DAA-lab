#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> gra,int node,int dest,vector<bool> &visited)
{
    if(node==dest) return true;
    visited[node]=true;
    for(int i=0;i<gra.size();i++)
    {
        if(gra[i][node]==1 && !visited[i])
        {
            bool flag=dfs(gra,i,dest,visited);
            if(flag) return true;
        }
    }
    return false;
}

int main() 
{
    vector<vector<int>> gra =
    {
        {0,1,1,0,0},
        {1,0,1,1,1},
        {1,1,0,1,0},
        {0,1,1,0,1},
        {0,1,0,1,0}
    };
    vector<bool> visited(gra.size(),false);
    int node,dest;
    cout<<"enter sc and dest: ";
    cin>>node>>dest;
    if(dfs(gra,node,dest,visited)) cout<<"yes: ";
    else cout<<"no: ";
    return 0;
}
