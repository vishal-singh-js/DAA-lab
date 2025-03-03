#include <bits/stdc++.h>
using namespace std;
void countsort(string s)
{
    int c=0;
    vector<int> a (256,0);
    for(int i=0;i<s.length();i++)
    {
        a[s[i]]++;
    }
    for(int j=0;j<256;j++)
    {
        if(a[j]>c)
        {
            c=a[j];
        }
    }
    cout<<"maximum occurence: "<<endl;
    for(int j=0;j<256;j++)
    {
        if(a[j]==c)
        {
          cout<<"character : "<<(char)(j);
          cout<<" freq: "<<c<<endl;
        }
    }
    
}

int main() 
{
    string s;
    cout<<"enter the string : ";
    cin>>s;
    countsort(s);
    return 0;
}
