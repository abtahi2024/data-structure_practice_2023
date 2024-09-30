
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string s;
    Node*next;
    Node*prev;
    Node(string s)
    {
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail(Node* &head,Node* &tail,string s)
{
    Node* newnode  =new Node(s);
    if(head == NULL)
    {
        tail = newnode;
        head = tail ;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void visit(Node* &head,Node* &tail, string c)
{
    Node* tmp = head;
    bool flag=true;
    while(tmp != NULL )
    {
        if(tmp->s==c)
        {
            tail=tmp;
            flag=false;
            break;
        }
        tmp = tmp->next;
    }
    if(flag==false)
    {
        // head = tmp;
        cout << tmp->s << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void next(Node* &head)
{
    if(head != NULL && head->next != NULL)
    {
        head=head->next;
        cout<<head->s<<endl;   
    }
    else
    {
        cout<<"Not Available"<<endl;
    }
}
void prev(Node* &head)
{
    if(head != NULL && head->prev != NULL )
    {
        head = head->prev;
        cout << head->s << endl;
    }   
    else
    {
        cout << "Not Available" << endl;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    string search;

    while (true)
    {
        cin >> search ;
        if(search == "end") 
        {
            break;
        }
        insert_tail(head, tail, search);
        
    }
    // Node* save_head = head; 
    int q;
    cin>>q;
    Node *tmp=head;
    for(int i=0 ; i<q ; i++)
    {
        string c;
        cin>>c;
        if(c == "visit")
        {
            string a;
            cin >> a;
            visit(head,tmp, a); 
        }
        else if(c == "next")
        {
            next(tmp);
        }
        else if(c== "prev")
        {
            prev(tmp);
        }
    }
    return 0;
}