#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_link(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void isert_tail(node* &head,node* &tail,int v)
{
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
// int size(node *head)
// {
//     node *tmp = head;
//     int cut = 0;
//     while (tmp != NULL)
//     {
//         cut++;
//         tmp = tmp->next;
//     }
//     return cut;
// }
void delete_list(node *head, int p)
{
    if (p == 1)
    {
        node *tmp = head;
        tmp = tmp->next;
        delete tmp;
    }
    else
    {
        node *tmp =head;
        for (int i= 1;i<p-1;i++)
        {
            tmp=tmp->next;
        }
        node *deletenode =tmp->next;
        tmp->next = tmp->next->next;
        delete deletenode;
    }
}
void remove_list(node* head)
{
    node* tmp=head;
    while (tmp!=NULL&&tmp->next!=NULL)
    {
        node* mtp=tmp;
        while (mtp->next!=NULL)
        {
            if(mtp->next->val==tmp->val)
            {
                node* dupli=mtp->next;
                mtp->next=mtp->next->next;
                delete dupli;
            }
            else
            {
            mtp=mtp->next;
            }
        }
        tmp=tmp->next;
    }
    
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        // else if (p > size(head))
        // {
        //     delete_list(head, p);
        // }
        else
        {
            isert_tail(head,tail,v);
        }
    }
    remove_list(head);
    print_link(head);
    return 0;
}
