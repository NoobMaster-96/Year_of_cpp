#include<bits/stdc++.h>
using namespace std;

class bst{
public:
	int data;
	bst* right;
	bst* left;

	bst(int n){
		this->data = n;
		this->right = NULL;
		this->left = NULL;
	}	
};

int kthlargest(bst node, int k){
	if(node==NULL){
		return 0;
	}
	int r = kthlargest(node->right);
	if(r==k-1){
		cout<<node->data;
	}
	else if(r<k){
		if(k-(r+1)>0 && node->left==NULL){
			cout<<"NOT that many nodes in tree";
		}
		else{
			kthlargest(node->left,(k-(r+1)));
		}
	}
	return r+1;
}

int main(){
	bst root = new bst(5);
	bst r1 = new bst(3);
	bst r2 = new bst(7);
	root->left = r1;
	root->right = r2;
	int k=3;
	cout<<kthlargest(node,k);
}