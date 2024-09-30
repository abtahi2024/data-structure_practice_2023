#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    priority_queue<long long int,vector<int>,greater<int>>pq(a.begin(),a.end());
    long long int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long int c;
        cin>>c;
        if(c==0)
        {
            long long int x;
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl;
        }
        else if(c==1)
        {
            if(!pq.empty())
            {
            cout<<pq.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(c==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                    cout<<pq.top()<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        // else
        // {
        //     cout<<"Empty"<<endl;
        // }
    }
    
  


    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> A(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> A[i];
//     }

//     priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end());

//     int q;
//     cin >> q;

//     while (q--) {
//         int c;
//         cin >> c;

//         if (c == 0) {
//             int x;
//             cin >> x;
//             pq.push(x);
//             cout << pq.top() << endl;
//         } else if (c == 1) {
//             if (!pq.empty()) {
//                 cout << pq.top() << endl;
//             } else {
//                 cout << "Empty" << endl;
//             }
//         } else if (c == 2) 
//         {
//             if (!pq.empty()) 
//             {
//                 int minVal = pq.top();
//                 pq.pop();
//                 if (!pq.empty()) 
//                 {
//                     cout << pq.top() << endl;
//                 } else 
//                 {
//                     cout << "Empty" << endl;
//                 }
//             } 
//             else 
//             {
//                 cout << "Empty" << endl;
//             }
//         } 
//         else 
//         {
//             cout << "Invalid command" << endl;
//         }
//     }

//     return 0;
// }
