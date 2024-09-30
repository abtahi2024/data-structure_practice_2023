#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    for(long long int i=0;i<T;i++)
    {
        long long int H,A,B;
        cin>>H>>A>>B;
        if(A>=H)
        {
            cout<<1<<endl;
        }
        else if(A<=B)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
           long long int n=A-B;
            long long int c=(H-A+n-1)/n;
            long long int m=c*2+2;
            if(c*n)
            {
                m--;
            }
            cout<<m<<endl;
            
        }
        
    }


    return 0;
}





// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         long long H, A, B;
//         cin >> H >> A >> B;

//         if (A >= H) {
//             cout << 1 << endl;
//         } else if (A <= B) {
//             cout << "Impossible" << endl;
//         } else {
//             long long netClimb = A - B;
//             long long cycles = (H - A + netClimb -1) / netClimb;
//             long long minutes = cycles * 2 + 2; // Account for initial climb and cycles

//             // Handle edge case for exact multiples
//             if (cycles * netClimb) {
//                 minutes--;
//             }

//             cout << minutes << endl;
//         }
//     }

//     return 0;
// }


