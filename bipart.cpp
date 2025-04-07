#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> gra,vector<int> set1,vector<int>set2)
{
    bool f1=true;
    bool f2=true;
    for(int i=0;i<set1.size();i++)
    {
        for(int j=0;j<set1.size();j++)
        {
            if(gra[i][j]==1)
            {
                f1=false;
                break;
            }
        }
    }
    for(int i=0;i<set2.size();i++)
    {
        for(int j=0;j<set2.size();j++)
        {
            if(gra[i][j]==1)
            {
                f2=false;
                break;
            }
        }
    }
    if(f1 && f2)
    {
        cout<<"bipartite";
    }
    else
    {
        cout<<"not bipartite";
    }
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
    vector<int> set1;
    vector<int> set2;
    for(int j=0;j<5;j++)
    {
        if(gra[0][j]==0)
        {
            set1.push_back(j);
        }
        else
        {
            set2.push_back(j);
        }
    }
    dfs(gra,set1,set2);
    return 0;
}
