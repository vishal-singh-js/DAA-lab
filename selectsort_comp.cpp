#include<bits/stdc++.h>
using namespace std;
void select_sort(vector<int> &v)
{
    int shift=0;
    int comp=0;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int ind=i;
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(v[j]<v[ind])
            {
                ind=j;
                
            }
        }
        swap(v[ind],v[i]);
        if(ind!=i)
          shift++;
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
    select_sort(v);
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
}
