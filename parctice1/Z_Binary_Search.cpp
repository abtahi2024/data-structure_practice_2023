#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  for (int i = 0; i <q; i++)
  {
    int x;
    cin>>x;
    // auto it=find(a.begin(),a.end(),x);
    // bool fund=false;
    // for(int j=0;j<n;j++)
    // {
    //     if(a[j]==x)
    //     {
    //         fund=true;
    //         break;
    //     }
    // }
    if(binary_search(a.begin(),a.end(),x))
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
  }
  



    return 0;
}