#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    cin>>x;
    a.insert(a.begin()+x,b.begin(),b.end());
    for(int y:a)
    {
        cout<<y<<" ";
    }



    return 0;
}