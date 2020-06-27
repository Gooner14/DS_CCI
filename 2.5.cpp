/*

Cracking the Coding Interview.
Question: 2.5
Maintainer: Arpit Sardana
Time: O(1)


*/


using namespace std;
#include <bits/stdc++.h>
#define ll long long 

struct Node{
    ll data;
    Node* next;
};

Node* head;
Node* head2;

void printLL(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl<<endl;
}

void printLL2(){
    Node* temp = head2;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl<<endl;
}

void insertValueAtBeg(ll data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void insertValueAtBeg2(ll data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = head2;
    head2 = temp;
}

void addLLs(Node* head, Node* head2){
    Node* temp = head;
    ll carry = 0;
    Node* prev = NULL;
    while(temp!=NULL && head2!=NULL){
        
        cout<<temp->data<<" "<<head2->data<<endl;
        
        ll val = temp->data + head2->data + carry;
//        cout<<"carry "<<carry<<endl;
//        cout<<"val "<<val<<endl;
        temp->data = val%10;
        carry = val/10;
        
        cout<<temp->data<<endl;
        prev = temp;
        temp = temp->next;
        head2 = head2->next;
    }
    
    if(head2!=NULL){
        prev->next = head2;
        temp = head2;
    }
    while(temp!=NULL){
        ll val = temp->data + carry;
        temp->data = val%10;
        ll carry = val/10;
        prev = temp;
        temp = temp->next;
    }
    if(carry){
        Node* newNode = new Node();
        newNode->data = carry;
        newNode->next = NULL;
        prev->next = newNode;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    head = NULL;
    cout<<"Enter number of nodes to be inserted at Beginning"<<endl<<endl;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll num;
        cin>>num;
        insertValueAtBeg(num);
       // printLL();
    }
    
    cin>>n;
    for(ll i=0;i<n;i++){
        ll num;
        cin>>num;
        insertValueAtBeg2(num);
       // printLL();
    }
    
    printLL();
    printLL2();
    
    addLLs(head,head2);
    
    printLL();
    
	return 0;
}	
