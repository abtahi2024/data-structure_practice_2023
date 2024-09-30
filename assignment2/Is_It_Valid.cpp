// #include<bits/stdc++.h>
// using namespace std;
// bool isvalid(string s)
// {
//   int cunt= 0,cunt1=0;
//   for(char c:s)
//   {
//     if(c=='0')
//     {
//         if(cunt1>0)
//         {
//             cunt1--;
//         }
//         else
//         {
//             cunt++;
//         }
//     }
//     else
//     {
//         if(cunt>0)
//         {

//             cunt--;
//         }
//         else
//         {
//             cunt1++;
//         }
//     }
//   }
// //   return cunt==0&&cunt1==0;
//   return cunt==cunt1;

// }
// int main()
// {
//     int T;
//     cin>>T;
//     for(int i=0;i<T;i++)
//     {
//         string s;
//         cin>>s;
//         if(isvalid(s))
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        string s;
        cin>>s;
        stack<char>st;
        for(char c:s)
        {
            if(!st.empty()&&c!=st.top())
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if(st.empty())
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