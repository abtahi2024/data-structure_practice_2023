// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin>>T;
//     for(int i=0;i<T;i++)
//     {
//       int n;
//       cin>>n;
//       vector<int>a(n);
//       for(int i=0;i<n;i++)
//       {
//         cin>>a[i];
//       }
//       sort(a.begin(),a.end());

//       a.erase(unique(a.begin(),a.end()),a.end());
//       for(int i=0;i<a.size();i++)
//       {
//         cout<<a[i]<<" ";
//       }

//       cout<<endl;

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
 
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int v;
      cin >> v;
      s.insert(v);
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
      cout << *it << " ";
    }
    cout << endl;
  }

  return 0;
}
