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
    // while (tmp->next!=NULL)
    // {
    //     tmp=tmp->next;
    // }
    tail->next=newnode;
    tail=newnode;

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
      insert_lsit(head,tail,v);
    }
      node* tmp=head;
        int maxval=INT_MIN,minval=INT_MAX;
        while(tmp!=NULL)
        {
            if(maxval<tmp->val)
            {
                maxval=tmp->val;
            }
            if(minval>tmp->val)
            {
                minval=tmp->val;
            }
            // maxval=max(maxval,tmp->val);
            // minval=min(minval,tmp->val);
            tmp=tmp->next;
        }
        cout<<(maxval- minval);



    return 0;
}
