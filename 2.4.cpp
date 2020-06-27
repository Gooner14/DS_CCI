/*

Cracking the Coding Interview.
Question: 2.4
Maintainer: Arpit Sardana
Time: O(n)


*/


using namespace std;
#include <bits/stdc++.h>
#define ll long long 

struct Node{
    ll data;
    Node* next;
};

Node* head;

void printLL(){
    Node* temp = head;
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
    
    printLL();
    
    ll partitionVal;
    cin>>partitionVal;
    
    Node* temp = head;
    Node* partition = head;
    while(temp!=NULL){
        Node* temp2 = temp;
        temp = temp->next;
        if(temp2->data < partitionVal){
            temp2->next = head;
            head = temp2;
        }
        else{
            partition->next = temp2;
            partition = temp2;
        }
        partition->next = NULL;
    }
    
    printLL();
    
	return 0;
}	
