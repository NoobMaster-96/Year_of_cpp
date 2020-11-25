#include<bits/stdc++.h>
using namespace std;

class Emp{
public:
    int ID;
    string name;
};

class Node{
public:
    Emp data;
    Node* next;
};

class LinkedList{
    Node* root;
    Node* tail;
public:
    LinkedList(){
        root = NULL;
        tail = NULL;
    }

    void addnode(Emp x){

        Node* newnode = new Node;
        newnode->data = x;
        newnode->next = NULL;
        if(root==NULL){
            root = newnode;
            tail = root;
        }
        else{
            tail->next = newnode;
            tail = tail->next;
        } 
    }

    void display(){
        Node* temp = root;
        while(temp!=NULL){
            cout<<temp->data.name<<" ";
            temp = temp->next;
        }
    }
    
};

int main(){
    LinkedList l;
    for(int i=0;i<3;i+=1){
        int id;
        string name;
        cin>>id>>name;
        Emp e;
        e.ID = id;
        e.name = name;
        l.addnode(e);
    }
    l.display();
} 