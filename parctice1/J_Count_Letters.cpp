#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin>>s;
    char c;
    vector<int>fq(26,0);
    while(cin>>c)
    {
        fq[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(fq[i]>0)
        {
            cout<<char(i+'a')<<" "<<":"<<" "<<fq[i]<<endl;
        }
    }

    return 0;
}