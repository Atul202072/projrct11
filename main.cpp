// Tree traversal in binary tree
#include <iostream>
using namespace std;

    struct Node 
{
    int data;
    struct Node *left, *right;
    Node(int data) 
    {
        this->data=data;
        left=right=NULL;
    }
};
// Inorder traversal
    void inorderTraversal(struct Node* node)
{
    if(node==NULL)
    return;
    inorderTraversal(node->left);
    cout<<node->data<<",";
    inorderTraversal(node->right);
}
// Preorder traversal
    void preorderTraversal(struct Node* node) 
{
    if(node==NULL)
    return;
    cout<<node->data<<",";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
// Postorder traversal
    void postorderTraversal(struct Node* node) 
{
    if(node==NULL)
    return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->data<<",";
}
    int main() 
{
    struct Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    cout<<"Inorder traversal of the binary tree: ";
    inorderTraversal(root);
    cout<<"\nPreorder traversal of the binary tree: ";
    preorderTraversal(root);
    cout<<"\nPostorder traversal of the binary tree: ";
    postorderTraversal(root);
    return 0;
}