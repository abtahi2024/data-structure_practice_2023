#include<bits/stdc++.h>
using namespace std;
// class node
// {
//     public:
//     int val;
//     node*next;
//     node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
bool binary(string s)
{
    stack<char>st;
    for(char c:s)
    {
        if(c=='1')
        {
            if(!st.empty()&&st.top()=='0')
            {
              st.pop();
            }
            else
            {
              st.push(c);
            }
           
        }
        else
        {
          st.push(c);  
        }
        
    }
    return st.empty();
}
int main()
{
  int T;
  cin>>T;
  for(int i=0;i<T;i++)
  {
    string s;
    cin>>s;
    // cout<<binary(s)<<endl;
    if(binary(s))
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


