#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node*prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_position(node* &head,int p,int v)
{
  
    node* newnode=new node(v);
    node* tmp=head;
    for(int i=1;i<=p-1;i++)
    {
        tmp=tmp->next;
        // if(tmp==NULL)
        // {
        //     // cout<<"Invalid";
        //     return;
        // }
    }
    // if(tmp==NULL)
    // {
    //     cout<<"Invalid";
    //     return;
    // }
    newnode->next=tmp->next;
    // if(tmp->next!=NULL)
    // {
    //     tmp->next->prev=newnode;
    // }
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}
int insert_at_size(node* head)
{
    node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_at_head(node* &head,node* &tail,int v)
{
    node*newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        // head->prev=newnode;
        // tail->next=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_at_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        // head->prev=newnode;
        // newnode->next=head;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    // head->prev=newnode;
    // newnode->next=head;
    // tail=tail->next;
}
void print_normal(node* head)
{
    node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(node* tail)
{
    node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            // cout<<"Invalid"<<endl;
            insert_at_head(head,tail,v);
        }
        else if(x==insert_at_size(head))
        {
            insert_at_tail(head,tail,v);
        }
        else if(x>=insert_at_size(head))
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else
        {
            insert_at_position(head,x,v);
        }
        cout<<"L -> ";
        print_normal(head);
        cout<<"R -> ";
        print_reverse(tail);
    }
   
   

    return 0;
}
