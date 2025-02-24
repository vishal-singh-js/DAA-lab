#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&v,int low,int high,int &comp,int &sh)
{
    int pivot=v[low];
    int i=low;
    int j=high;
    while(i<j)
    {
       while(v[i]<=pivot) 
       {
          i++;
          comp++;
       }
       while(v[j]>pivot)
       {   
          j--;
          comp++;
       }
       if(i<j)
       {
           swap(v[i],v[j]);
           sh++;
       }
    }
    swap(v[j],v[low]);
    sh++;
    return j;
}

void quicksort(vector<int>&v,int low,int high,int &comp,int &sh)
{
    if(low<high)
    {
        
        int pos=partition(v,low,high,comp,sh);
        quicksort(v,low,pos-1,comp,sh);
        quicksort(v,pos+1,high,comp,sh);
    }
}


int main() {
    vector<int>v;
    int n,comp=0,sh=0;
    cout<<"enter the no of elements : ";
    cin>>n;
    cout<<"enter array elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    quicksort(v,0,n-1,comp,sh);
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"comparisons : "<<comp;
    cout<<endl<<"shifts : "<<sh;
    return 0;
}
