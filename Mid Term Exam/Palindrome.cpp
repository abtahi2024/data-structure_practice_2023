

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
void insert_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;

}
bool is_palindrome(node* head,node* tail)
{
    node* i=head;
  node* j=tail;
  bool flag=true;
  while(i!=j)
  {
    if(i->val!=j->val)
    {
        flag=false;
        break;
    }
    // else 
    // {
        i=i->next;
        j=j->prev;
    // }
  }
  return flag;
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

  if(is_palindrome(head,tail))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }

    return 0;
}
