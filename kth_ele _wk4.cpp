#include <bits/stdc++.h>
using namespace std;
void maxele(vector<int> v,int k)
{
    priority_queue<int> pq;
    for(int i=0;i<v.size();i++)
    {
        pq.push(v[i]);
    }
    while(--k)
    {
        pq.pop();
    }
   cout<<"kth largest : "<<pq.top();
}

int main() 
{
    int n,k;
    cout<<"enter the number of elements of array : ";
    cin>>n;
    vector<int> v;
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter the pos : ";
    cin>>k;
    maxele(v,k);
    return 0;
}
