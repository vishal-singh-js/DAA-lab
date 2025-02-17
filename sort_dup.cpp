#include<bits/stdc++.h>
using namespace std;
bool dup(vector<int>&v,int n)
{
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i+1])
        {
            return true; 
        }
    }
    return false;
}

int main()
{
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int>v;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    if(dup(v,n))
    {
        cout<<"array contains duplicate elements "<<endl;
    }
    else
    {
        cout<<"array does not contains duplicate elements "<<endl;
    }
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
}
