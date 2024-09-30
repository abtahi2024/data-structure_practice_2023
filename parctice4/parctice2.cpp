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
void insert_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_reverse(node* head)
{
    if(head==NULL)
    {
        return;
    }
        print_reverse(head->next);
        cout<<head->val<<" ";
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v== -1)
        {
            break;
        }
        insert_tail(head,tail,v);
    }
    print_reverse(head);

  


    return 0;
}

