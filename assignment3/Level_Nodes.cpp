#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val== -1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
    queue<Node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l== -1)
        {
            myLeft=NULL;
        }
        else
        {
            myLeft=new Node(l);
        }
        if(r== -1)
        {
            myRight=NULL;
        }
        else
        {
            myRight=new Node(r);
        }
        p->left=myLeft;
        p->right=myRight;
        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
void level_order(Node* root,int x)
{
    if(root==NULL)
    {
        // cout<<"Invalid";
        return;
    }
    queue<Node* >q;
    q.push(root);
    int l=0;
    bool flag=0;//false
    while (!q.empty())
    {
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            Node* f=q.front();
            q.pop();
              if(l==x)
            {
                cout<<f->val<<" ";
                flag=1;//true
            }
            
            if(f->left)
            {
            q.push(f->left);
            }
            if(f->right)
            {
            q.push(f->right);
            }
        }

            if(flag)
            {
                break;
            }

            l++;
     
    }
    if(!flag)
    {
        cout<<"Invalid";
    }
    
}


int main()
{
    Node* root=input_tree();
    int x;
    cin>>x;
    level_order(root,x);

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* input_tree() 
// {
//     int val;
//     cin >> val;
//     Node* root;
//     if (val == -1) {
//         root = NULL;
//     } else {
//         root = new Node(val);
//     }
//     queue<Node*> q;
//     if (root) {
//         q.push(root);
//     }
//     while (!q.empty()) {
//         Node* p = q.front();
//         q.pop();
//         int l, r;
//         cin >> l >> r;
//         Node* myLeft;
//         Node* myRight;
//         if (l == -1) {
//             myLeft = NULL;
//         } else {
//             myLeft = new Node(l);
//         }
//         if (r == -1) {
//             myRight = NULL;
//         } else {
//             myRight = new Node(r);
//         }
//         p->left = myLeft;
//         p->right = myRight;
//         if (p->left) {
//             q.push(p->left);
//         }
//         if (p->right) {
//             q.push(p->right);
//         }
//     }
//     return root;
// }

// void level_order(Node* root, int x) 
// {
//     if (root == NULL) 
//     {
//         // cout << "Invalid";
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     int l = 0;
//     bool flag = false;
//     while (!q.empty()) 
//     {
//         int size = q.size();
//         for (int i = 0; i < size; i++) {
//             Node* f = q.front();
//             q.pop();
//             if (l == x) 
//             {
//                 cout << f->val << " ";
//                 flag = true;
//             }
//             if (f->left) 
//             {
//                 q.push(f->left);
//             }
//             if (f->right) 
//             {
//                 q.push(f->right);
//             }
//         }
//         if (flag) 
//         {
//             break;
//         }
//         l++;
//     }
//     if (!flag) 
//     {
//         cout << "Invalid";
//     }
// }

// int main() {
//     Node* root = input_tree();
//     int x;
//     cin >> x;
//     level_order(root, x);
//     return 0;
// }
