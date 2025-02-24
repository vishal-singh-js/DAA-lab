#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int low,int high,int mid,int &comp,int &in)
{
    vector<int>r;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high)
    {
        comp+=1;
        if(v[i]<=v[j])
        {
            r.push_back(v[i]);
            i++;
        }
        else
        {
            r.push_back(v[j]);
            j++;
            in+=(mid-i+1);
        }
    }
    while(i<=mid)
    {
        r.push_back(v[i]);
        i++;
    }
    while(j<=high)
    {
        r.push_back(v[j]);
        j++;
    }
    for(int i=0;i<r.size();i++)
    {
        v[i+low]=r[i];
    }
}

void mergesort(vector<int>&v,int low,int high,int &comp,int &in)
{
    if(low<high)
    {
        int mid=low+(high-low)/2;
        mergesort(v,low,mid,comp,in);
        mergesort(v,mid+1,high,comp,in);
        merge(v,low,high,mid,comp,in);
    }
}


int main() {
    vector<int>v;
    int n,comp=0,in=0;
    cout<<"enter the no of elements : ";
    cin>>n;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    mergesort(v,0,n-1,comp,in);
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"comparisons : "<<comp;
    cout<<endl<<"inversions : "<<in;
    return 0;
}
