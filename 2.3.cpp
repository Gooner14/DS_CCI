/*

Cracking the Coding Interview.
Question: 2.3
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
    
    Node* element = head->next->next->next->next;
    cout<<element->data<<endl;
    
    element->data = element->next->data;
    Node* del = element->next;
    element->next = del->next;
    delete(del);
    
    printLL();
    
	return 0;
}	
