/*

Cracking the Coding Interview.
Question: 1.9
Maintainer: Arpit Sardana
Time: O(n)
Space: O(n)

Follow Up:
Time: O(n^2)
Space: O(n)

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
    
    map<ll,ll> map;
    
    Node* temp = head->next;
    Node* prev = head;
    ++map[head->data];
    while(temp!=NULL){
        if(map[temp->data])
        {
            Node* del = temp;
            temp = temp->next;
            delete(del);
            continue;
        }
        prev->next = temp;
        ++map[temp->data];
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    
    printLL();
    
	return 0;
}	
