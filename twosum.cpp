#include <bits/stdc++.h>
using namespace std;
void twosum(vector<int> &v,int key)
{
    sort(v.begin(),v.end());
    int i=0;
    int j=v.size()-1;
    int f=0;
    while(i<j)
    {
        int sum=v[i]+v[j];
        if(sum==key)
        {
            f=1;
            cout<<"sum : "<<v[i]<<"+"<<v[j]<<endl;
            i++;
            j--;
        }
        else if(v[i]+v[j]>key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(f==0)
    {
       cout<<"sum not found ";
    }
    
}

int main() 
{
    int n,key;
    cout<<"enter the number of elements : ";
    cin>>n;
    vector<int> v;
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter key : ";
    cin>>key;
    twosum(v,key);
    return 0;
}
