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

void insert_lsit(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    // node* tmp=head;
    // while(tmp->next!=NULL)
    // {
    //     tmp=tmp->next;
    // }
    tail->next=newnode;
    tail=newnode;
}

int main()
{

  
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      
        node* head=NULL;
        node* tail=NULL;
        int v;

        // node* tmp=head;
        while (true)
        {
            cin>>v;
            if(v== -1)
            {
                break;
            }
            insert_lsit(head,tail,v);
        }
        int x;
        cin>>x;
        int p=0;
        bool flag=false;
        node* tmp=head;
        while(tmp!=NULL)
        {
            if(x==tmp->val)
            {
                flag=true;
                break;
            }
            p++;
            tmp=tmp->next;
        }
        
        if(flag)
        {
            cout<<p<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }


    }

    return 0;
}