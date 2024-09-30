#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
       if(find(a.begin(),a.end(),a[i]+1)!=a.end())
       cnt++;
    }
    // for(int i=0;i<n;i++)
    // {
        cout<<cnt;
    // }


    return 0;
}