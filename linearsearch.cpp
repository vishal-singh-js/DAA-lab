#include <bits/stdc++.h>
using namespace std;
int linearsearch(vector<int>v,int key)
{
  for(int i=0;i,v.size();i++)
  {
    if(v[i]==key)
    {
      return i;
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
  int c=linearsearch(v,key);
  if(c==-1)
  {
    cout<<"element not found ";
  }
  else
  {
    cout<<"element found at index : "<<c;
  }
}

