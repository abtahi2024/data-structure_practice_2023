#include<bits/stdc++.h>
using namespace std;
// class node
// {
//     public:
//     int val;
//     node*next;
//     node*prev;
//     node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
void print_list(list<int>& mylist)
{
        for(int e:mylist)
        {
            // cout<<e<<" ";
            cout<<" "<<e;
        }
            cout<<endl;
}
void revers(list<int>&mylist)
{
   mylist.reverse();
}
int main()
{
    int q;
    cin>>q;
    list<int>mylist;
    for(int i=0;i<q;i++)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            mylist.push_front(v);
        }
        if(x==1)
        {
            mylist.push_back(v);
        }
        if(x==2)
        {
            if(v<mylist.size())
            // if(it!=mylist.end())
            {
                auto it=next(mylist.begin(),v);
                mylist.erase(it);
            }
        }
            cout<<"L ->";
            print_list(mylist);
     
            cout<<"R ->";
            revers(mylist);
            print_list(mylist);
        
            revers(mylist);
         
    }
    //   print_norma(head);
  

    return 0;
}


