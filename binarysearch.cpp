#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>v,int key)
{
  int low=0;
  int high=v.size()-1;
  while(low<high)
  {
    int mid=(low+high)/2;
    if(v[mid]==key)
    {
        return mid;
    }
    else if(v[mid]<key)
    {
        low=mid+1;
    }
    else if(v[mid]>key)
    {
        high=mid-1;
    }
  }
  
  return -1;
}
int main()
{
  vector<int>v;
  int n;
  cout<<"enter the number of elements ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int ele;
    cout<<"enter the element : ";
    cin>>ele;
    v.push_back(ele);
  }
  int key;
  cout<<"enter element to be searched : ";
  cin>>key;
  int c=binarysearch(v,key);
  if(c==-1)
  {
    cout<<"element not found ";
  }
  else
  {
    cout<<"element found at index : "<<c;
  }
}

