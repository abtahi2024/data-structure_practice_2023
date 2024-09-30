#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>a;
    queue<int>b;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    while(!a.empty()&&!b.empty())
    {
        if(a.top()==b.front())
        {
            a.pop();
            b.pop();
        }
        else 
        {
            break;;
        }
    }
    if(a.empty()&&b.empty())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}