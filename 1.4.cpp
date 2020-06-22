/*

Cracking the Coding Interview.
Question: 1.4
Maintainer: Arpit Sardana

Current Approach: Using Counting Array
O(n)

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	getline(cin,str);
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	
	ll countStr[26] = {0};
	
	for(ll i=0;i<str.size();i++){
	    if(str[i]!=' ')
	        ++countStr[str[i]-'a'];
	}
	int oddCount = 0;
	for(ll i=0;i<26;i++){
	    if(countStr[i]&1)
	        ++oddCount;
	    if(oddCount==2){
	        cout<<"Not a Palindrome"<<endl;
	        return 0;
	    }
	}
	
	cout<<"Palindrome"<<endl;
	return 0;
}	
