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
q.push(NULL);
while(!q.empty())
{
    if(q.front()!=NULL){
        Node* curr = q.front(); //curr=1
        if(curr->left)
            q.push(curr->left); //12
    
        if(curr->right)
            q.push(curr->right);//123
        q.pop();//23
    }
    else 
    {
        cout<<curr->data<<" "; //1
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }

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
