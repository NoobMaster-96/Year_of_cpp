#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int val;
	Node* right;
	Node* left;

	Node(int a){
		val = a;
		right = NULL;
		left = NULL;
	}
};

int burn(Node* root, int target, queue<Node*>& q){
	if(root==NULL){
		return 0;
	}
	if(root->val==target){
		cout<<root->val<<endl;
		if(root->right!=NULL){
			q.push(root->right);
		}
		if(root->left!=NULL){
			q.push(root->left);
		}
		return 1;
	}

	int l = burn(root->left,target,q);
	if(l==1){
		int qsize = q.size();
		while(qsize--){
			Node* temp = q.front();
			q.pop();
			cout<<temp->val<<" ";
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			if(temp->left!=NULL){
				q.push(temp->left);
			}
		}
		if(root->right!=NULL){
			q.push(root->right);
		}
		cout<<root->val<<endl;
		return 1;
	}
	int r = burn(root->right,target,q);
	if(r==1){
		int qsize = q.size();
		while(qsize--){
			Node* temp = q.front();
			q.pop();
			cout<<temp->val<<" ";
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			if(temp->left!=NULL){
				q.push(temp->left);
			}
		}
		if(root->left!=NULL){
			q.push(root->left);
		}
		cout<<root->val<<endl;
		return 1;
	}
	return 0;
}

void burntree(Node* root, int target){
	queue<Node*> q;
	burn(root,target,q);
	while(!q.empty()){
		int qsize = q.size();
		while(qsize--){
			Node* temp = q.front();
			q.pop();
			cout<<temp->val<<" ";
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			if(temp->left!=NULL){
				q.push(temp->left);
			}
		}
		cout<<endl;
	}
}

int main(){
/*      10 
       /  \ 
      12  13 
          / \ 
         14 15 
        / \ / \ 
      21 22 23 24 
  
    Let us create Binary Tree as shown 
    above */
	Node* root = new Node(10); 
    root->left = new Node(12); 
    root->right = new Node(13); 
  
    root->right->left = new Node(14); 
    root->right->right = new Node(15); 
  
    root->right->left->left = new Node(21); 
    root->right->left->right = new Node(22); 
    root->right->right->left = new Node(23); 
    root->right->right->right = new Node(24); 
    int targetNode = 14;
    burntree(root,targetNode);
}