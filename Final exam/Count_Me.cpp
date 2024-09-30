#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int i=0;i<T;i++)
    {
        string s;
        getline(cin,s);
        string word;
        stringstream ss(s);
        map<string,int>mp;
        string maxw;
        int maxc=0;
        while (ss>>word)
        {
           mp[word]++;
           if(mp[word]>maxc)
        {
            maxc=mp[word];
            maxw=word;
        }
        }
        cout<<maxw<<" "<<maxc<<endl;
        
    }


    return 0;
}


