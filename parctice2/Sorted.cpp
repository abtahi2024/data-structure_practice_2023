#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // sort(a,a+n);
        // for(int i=0;i<n;i++)
        int flag=true;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               if(a[i]>a[j])
               {
                flag=false;
                break;
               }
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
    } 


    return 0;
}
