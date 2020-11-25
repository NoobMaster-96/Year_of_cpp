#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

SinglyLinkedListNode* reversell(SinglyLinkedListNode* head){
	SinglyLinkedListNode* curr = head;
	SinglyLinkedListNode* prev = NULL;
	while(head!=nullptr){
		curr->next = prev;
		head = head->next;
		prev = curr;
		curr = head;
	}
	return curr;
}

void display(SinglyLinkedListNode* head){
	while(head!=NULL){
		cout<<head->data<<" ";
	}
}

int main(){
	SinglyLinkedListNode* p1 = new SinglyLinkedListNode(1);
	SinglyLinkedListNode* p2 = new SinglyLinkedListNode(2);
	SinglyLinkedListNode* p3 = new SinglyLinkedListNode(3);
	p1->next = p2;
	p2->next = p3;
	display(p1);
	SinglyLinkedListNode* rev = reversell(p1);
	display(rev);
}
