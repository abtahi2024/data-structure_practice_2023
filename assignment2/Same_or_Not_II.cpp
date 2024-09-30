#include<bits/stdc++.h>
using namespace std;

// Node structure for linked list
class Node
{
    public:
    int v;
    Node*next;
    Node*prev;
    Node(int v)
    {
        this->v=v;
        this->next=NULL;
        this->prev=NULL;
    }
};

// Stack class
class Stack {


public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int v) 
    {
        sz++;
        Node* newNode = new Node(v);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next = newNode;
        tail = tail->next;
        
    }

  void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->v;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
        // return sz==0;
        return true;
        }
        else
        {
            return false;
        }
    }
};

// Queue class
class Queue
{
    public:
    Node* head=NULL;
    Node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if (head==NULL) 
        {
            // front = rear = newNode;
            head=newNode;
            tail=newNode;
            return;
        } 
        //  else
        // {
            tail->next = newNode;
            newNode->prev=tail;
            tail = tail->next;
        // }

        
    }

    void pop() {
    
        sz--;
        // int V=head->val;
        Node* deleteNode= head;
        head = head->next;
       
        // return dequeuedValue;
        if(head==NULL)
        {
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev=NULL;
        delete deleteNode;
        // return V;
    }
    int front()
    {
        return head->v;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
        // return sz==0;
        return true;
        }
        else
        {
            return false;
        }
    }
};


bool Same(Stack& a, Queue& b, int n, int m) {
    while(!a.empty()&&!b.empty())
    {
        int st = a.top();
        int qu =b.front();

        if (st != qu) {
            return false;
        }
        a.pop();
        b.pop();
    }

    return a.empty()==b.empty();
}

int main() {
    int n, m;
    cin >> n >> m;

    Stack a;
    Queue b;

    // Input values into stack A
    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        a.push(v);
    }

    // Input values into queue B
    for (int i = 0; i < m; ++i) {
        int v;
        cin >> v;
        b.push(v);
    }

    // Check if the stack and queue are the same
    if (Same(a, b, n, m)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}