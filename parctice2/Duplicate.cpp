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
    // sort(a.begin(),a.end());
    int flag =false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        if(a[i]==a[j])
         {
        flag=true;
        break;
         }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}