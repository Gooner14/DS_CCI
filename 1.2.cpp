/*

Cracking the Coding Interview.
Question: 1.2
Maintainer: Arpit Sardana

Current Approach: Using Counting Arrays
O(n)

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str1,str2;
	cin>>str1>>str2;
	
	if(str1.size()!=str2.size()){
	 cout<<"Not permutations";
	 return 0;
	}
	
	ll count[26] = {0};
	
	for(ll i=0;i<str1.size();i++){
	    ++count[str1[i]-97];
	}
	
	for(ll i=0;i<str2.size();i++){
	    --count[str2[i]-97];
	    if(count[str2[i]-97]<0){
	        cout<<"Not permutations";
	        return 0;
	    }
	}
	
	cout<<"Permutations"<<endl;
	return 0;
}	
