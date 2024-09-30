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
// void level_order(Node* root)
// {
//     if(root== NULL)
//     {
//         return;
//     }
//     queue<Node* >q;
//     q.push(root);
//     while (!q.empty())
//     {
//         /* code */
//         Node* f=q.front();
//         q.pop();
//         cout<<f->val<<" ";
//         if(f->left)
//         {
//             q.push(f->left);
//         }
//         if(f->right)
//         {
//             q.push(f->right);
//         }
//     }
    
// }
void printleft(Node* root)
{
    if(root->left)
    {
        printleft(root->left);
        cout<<root->left->val<<" ";
    }
    else if(root->right)
    {
        printleft(root->right);
        cout<<root->right->val<<" ";
    }
}
void printright(Node* root)
{
    if(root->right)
    {
        cout<<root->right->val<<" ";
        printright(root->right);
    }
    else if(root->left)
    {
        cout<<root->left->val<<" ";
        printright(root->left);
      
    }

}
int main()
{
  Node* root=input_tree();
//   level_order(root);
  if(root->left)
  {
    printleft(root);
    // cout<<root->val<<" ";
  }
  cout<<root->val<<" ";
  if(root->right)
  {

    printright(root);


  }
    // cout<<root->val<<" ";

//   inorder(root);
//   preorder(root);
//   postorder(root);



    return 0;
}








