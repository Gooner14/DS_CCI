/*

Cracking the Coding Interview.
Question: 1.1
Maintainer: Arpit Sardana

Current Approach: Using Sets
O(n)

Follow up: 
Sort string, check if ith and i+1 chars are equal.
O(nlogn)

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_set<char> set;
	string str = "abcda";
	for(ll i=0;i<str.size();i++){
	    if(set.find(str[i])!=set.end()){
	        cout<<"Not Unique"<<endl;
	        return 0;
	    }
	    else{
	        set.insert(str[i]);
	    }
	}
	cout<<"Unique"<<endl;
	return 0;
}	
