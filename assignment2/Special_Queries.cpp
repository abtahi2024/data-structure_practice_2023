#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    queue<string>l;
    for(int i=0;i<q;i++)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            string s;
            cin>>s;
            l.push(s);
        }
        else if(c==1)
        {
            if(!l.empty())
            {
                cout<<l.front()<<endl;
                l.pop();
            }
            else
            {
            cout<<"Invalid"<<endl;
            }
        }
    }
  


    return 0;
}

