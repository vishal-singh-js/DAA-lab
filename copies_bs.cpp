#include <bits/stdc++.h>
using namespace std;

int ucopies(vector<int>num,int key)
{
    int low=0;
    int high=num.size()-1;
    int res=-1;
    for(int i=0;i<num.size();i++)
    {
        int mid=low+(high-low)/2;
        if(num[mid]==key)
        {
           res=mid;
           high=mid-1;
        }
        else if(num[mid]<key)
        {
            low=mid+1;
        }
        else if(num[mid]>key)
        {
            high=mid-1;
        }
    }
    return res;
}

int hcopies(vector<int>num,int key)
{
    int low=0;
    int high=num.size()-1;
    int res=-1;
    for(int i=0;i<num.size();i++)
    {
        int mid=low+(high-low)/2;
        if(num[mid]==key)
        {
           res=mid;
           low=mid+1;
        }
        else if(num[mid]<key)
        {
            low=mid+1;
        }
        else if(num[mid]>key)
        {
            high=mid-1;
        }
    }
    
    return res;
}
int main() 
{
    vector<int>num;
    int n;
    cout<<"enter the no of elements : ";
    cin>>n;
    int key;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    cout<<"element to be searched: ";
    cin>>key;
    int low=ucopies(num,key);
    int high=hcopies(num,key);
    if(high==-1 || low==-1)
    {
     cout<<"key not found";
     return 0;
    }
    cout<<"key found "<<endl;
    int copy=high-low+1;
    cout<<"no of copies : "<<copy;
    return 0;
}
