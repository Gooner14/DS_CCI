/*

Cracking the Coding Interview.
Question: 2.2
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
    
    Node* element = head;
    Node* last = head;
    
    ll k;
    cin>>k;
    
    for(int i=0;i<k;i++){
        last = last->next;
    }
    
    while(last!=NULL){
        element = element->next;
        last = last->next;
    }
    
    cout<<element->data<<endl;
    
	return 0;
}	
