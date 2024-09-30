#include<bits/stdc++.h>
using namespace std;
bool same(string s1,string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        string S1,S2;
        cin>>S1>>S2;
        if(same(S1,S2))
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

