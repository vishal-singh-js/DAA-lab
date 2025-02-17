#include<bits/stdc++.h>
using namespace std;
void insrt_sort(vector<int> &v)
{
    int n=v.size();
    int comp=0;
    int shift=0;
    for(int i=1;i<n;i++)
    {
       int key=v[i];
       int j=i-1;
       while(j>=0 && v[j]>key)
       {
           comp++;
           shift++;
           v[j+1]=v[j];
           j--;
       }
       v[j+1]=key;
       if(j>=0)
       {
           comp++;
       }
    }
    cout<<"comparisons : "<<comp<<endl;
    cout<<"shifts : "<<shift<<endl;
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
    insrt_sort(v);
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
}
