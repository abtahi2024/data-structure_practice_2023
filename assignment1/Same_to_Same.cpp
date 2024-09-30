// #include<bits/stdc++.h>
// using namespace std;
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
// void insert_tail(node* &head,int v)
// {
//     node*newnode=new node(v);
//     if(head==NULL)
//     {
//         head=newnode;
//         return;
//     }
//     node* tmp=head;
//     while(tmp->next!=NULL)
//     {
//         tmp=tmp->next;
//     }
//     tmp->next=newnode;
// }
// void print_list(node* head)
// {
//     node* tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
// }
// // int size(node* head)
// // {
// //     node* tmp=head;
// //     int cut=0;
// //     while(tmp!=NULL)
// //     {
// //         cut++;
// //         tmp=tmp->next;
// //     }
// //     return cut;
// // }
// bool same_same(node* head1,node* head2)
// {
//     // int flag=true;
//     node* tmp1=head1;
//     node* tmp2=head2;
//     while(tmp1!=NULL&&tmp2!=NULL)
//     {
//         if(tmp1->val!=tmp2->val)
//         {
//             // flag=false;
//             // break;
//             return false;
//         }
//         tmp1=tmp1->next;
//         tmp2=tmp2->next;
//     }
//     if(tmp1!=NULL||tmp2!=NULL)
//     {
//         return false;
//     }
//     return true;
      

// }
// int main()
// {
//   node* head1=NULL;
//   node* head2=NULL;
//   int v;
// //   int cut=0;
//   while(true)
//   {
//     cin>>v;
//     if(v== -1)
//     {
//         break;
//     }
//     insert_tail(head1,v);
//     // print_list(head);
//     // cut++;
   
//   }
//     while(true)
//    {
//     cin>>v;
//     if(v== -1)
//     {
//         break;
//     }
//    insert_tail(head2,v);
//    }
//   if(same_same(head1,head2))
//   {
//     // return 0;
//     cout<<"YES";
//   }
//   else
//   {
//     cout<<"NO";
//   }


//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(node* &head,int v)
{
    node*newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
int size(node* head)
{
    node* tmp=head;
    int cut=0;
    while(tmp!=NULL)
    {
        cut++;
        tmp=tmp->next;
    }
    return cut;
}
void same_same(node* head1,node* head2)
{
        bool flag=true;
    node* tmp1=head1;
    node* tmp2=head2;
    while(tmp1!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            flag=false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v== -1)
        {
            break;
        }
        insert_tail(head1,v);
    }
    while(true)
    {
        cin>>v;
        if(v== -1)
        {
            break;
        }
        insert_tail(head2,v);
    }
    if(size(head1)!=size(head2))
    {
        cout<<"NO";
        return 0;
    }
    same_same(head1,head2);
    // bool flag=true;
    // node* tmp1=head1;
    // node* tmp2=head2;
    // while(tmp1!=NULL)
    // {
    //     if(tmp1->val!=tmp2->val)
    //     {
    //         flag=false;
    //         break;
    //     }
    //     tmp1=tmp1->next;
    //     tmp2=tmp2->next;
    // }
    // if(flag)
    // {
    //     cout<<"YES";
    // }
    // else
    // {
    //     cout<<"NO";
    // }

}