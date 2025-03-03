#include <bits/stdc++.h>
using namespace std;
void intersect(vector<int> v1,vector<int> v2,int n,int m)
{
    vector<int>res;
    int c=0;
    int i=0,j=0;
    while(i<n && j<m)
    {
        while(v1[i]==v1[i+1])
        {
            i++;
        }
        while(v2[j]==v2[j+1])
        {
            j++;
        }
        if(v1[i]==v2[j])
        {
            c=1;
            res.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]<v2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if(c==1)
    {
        cout<<"common elements : ";
    }
    else
    {
        cout<<"no common elements";
        return;
    }
    for(int k=0;k<res.size();k++)
    {
        cout<<res[k]<<" ";
    }
}

int main() 
{
    int n,m;
    cout<<"enter the number of elements of array 1: ";
    cin>>n;
    vector<int> v1;
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"enter the number of elements of array 2: ";
    cin>>m;
    vector<int> v2;
    cout<<"enter the elements : ";
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    intersect(v1,v2,n,m);
    return 0;
}
