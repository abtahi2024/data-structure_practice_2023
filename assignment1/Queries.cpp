#include<bits/stdc++.h>
using namespace std;
class node 
{
public:
    int val;
    node* next;
    node(int val) 
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_head(node* &head, int v) 
{
    node* newnode = new node(v);
    newnode->next = head;
    head = newnode;
}
void insert_tail(node* &head,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        // return;
    }
    else
    {
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    }
}

void delete_position(node* &head,int p)
{
    if(head==NULL)
    {
        return;
    }

    if(p==0)
    {
        node* tmp=head;
        head=head->next;
        delete tmp;
        return;
    }

    node* tmp=head;
    for(int i=1;i<=p-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            return;
        }
    }
    if(tmp->next==NULL)
    {
        return;
    }
    node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}

void print_list(node* head) 
{
    node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<< " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    // node* tail = NULL;
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++) 
    {
        int x, v;
        cin >> x >> v;
        if (x == 0) 
        {
            insert_head(head, v);
        } else if (x == 1) 
        {
            insert_tail(head,v);
        } else if (x == 2) 
        {
            delete_position(head, v);
        }
        print_list(head);
    }

    return 0;
}
