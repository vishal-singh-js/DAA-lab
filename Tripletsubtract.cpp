#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>triplet(vector<int>num)
{
    vector<int>temp;
    vector<vector<int>>ans;
    int n=num.size();
    for(int i=0;i<n;i++)
    {
        int k=0;
        {
            for(int j=i+1;j<n;j++)
            {
                if(num[j]-num[i]!=num[k])
                {
                    j--;
                    k++;
                    if(k==n)
                    {
                        break;
                    }
                }
                else
                {
                    temp.push_back(j);
                    temp.push_back(i);
                    temp.push_back(k);
                    ans.push_back(temp);
                    temp.clear();
                    j++;
                }
            }
        }
        
    }
    return ans;
}

int main() 
{
    vector<int>num;
    vector<vector<int>>ans;
    int n;
    cout<<"enter the no of elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    ans=triplet(num);
    int row=ans.size();
    int col=ans[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
