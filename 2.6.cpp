/*

Cracking the Coding Interview.
Question: 2.5
Maintainer: Arpit Sardana
Time: O(n)
Recursive


*/


using namespace std;
#include <bits/stdc++.h>
#define ll long long 

struct Node{
    ll data;
    Node* next;
};

Node* head;
Node* node;

void printLL(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl<<endl;
}

bool isPalindrome(Node* temp){
    if(temp==NULL)
        return true;
    bool value = isPalindrome(temp->next);
    cout<<temp->data<<" "<<node->data<<endl;
    if(temp->data == node->data)
    {   
        node = node->next;
        return value;
    }return false;
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
    node = head;
    Node* temp = head;
    cout<<isPalindrome(temp);
    
	return 0;
}	
