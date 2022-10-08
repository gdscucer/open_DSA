#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* create(node* root)
{
 int d;
 cout<<"enter root"<<endl;
 cin>>d;
 if(d!=-1)
 {
    root=new node(d);
    cout<<"enter left node"<<endl;
    root->left=create(root->left);
    cout<<"enter right node"<<endl;
    root->right=create(root->right);
    return root;
 }
 else
 return NULL;
}
void traversal(node* root)
{
    queue<node*>q;
    q.push(root);
    // q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}
int height(node* root)
{
    if(root==NULL)
    return 0;
    int l=height(root->left);
     int r=height(root->right);
     return max(l,r)+1;  
}
int main()
{
    node* root;
    root=create(root);
    cout<<height(root)<<endl;
    traversal(root);
    return 0;
}
