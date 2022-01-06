#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node*left;
	struct Node*right;
	Node(int val){
	data=val;
	left =NULL;
	right=NULL;
}
};
void leftview(Node*root)
{
    if(root==NULL)
    return;
queue<Node*>q;
q.push(root);
while(!q.empty())
{
    int n=q.size();
    for(int i=1;i<=n;i++)//CHANGES IN THE RANGES TO  COVERT IT TO LEFT FORM RIGHT
    {
    Node* curr=q.front();
    q.pop();
    if(i==1)//CHANGES
    cout<<curr->data<<" ";
        
     if(curr->left)
    q.push(curr->left);
    
        if(curr->right)
            q.push(curr->right);
    }
}
}
int main()
{
    
 struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    leftview(root);
    return 0;
}
