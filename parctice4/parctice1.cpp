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
void insert(node* head,int p,int v)
{
    node* newnode=new node(v);
    node* tmp=head;
    for (int i=1;i<=p-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    
}
int size(node* head)
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
int main()
{
  node* head=NULL;
  node* head2=NULL;
  node* tail=NULL;
  node* tail2=NULL;
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
  while(true)
  {
    cin>>v;
    if(v== -1)
    {
        break;
    }
  insert_tail(head2,tail2,v);

  }
    // insert(head,p,v);

  if(size(head)==size(head2))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }

    return 0;
}


