/*

Cracking the Coding Interview.
Question: 1.6
Maintainer: Arpit Sardana

O(n)

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str,compressed;
	cin>>str;
	ll count = 1;
	
	for(ll i=1;i<str.size();i++){
	    if(str[i]==str[i-1]){
	        ++count;
	    }
	    else{
	        compressed+=str[i-1]+to_string(count);
	        count=1;
	    }
	}
	compressed+=str[str.size()-1]+to_string(count);
	
	string output = compressed.size()<str.size() ? compressed:str; 
	
	cout<<output<<endl;
	return 0;
}	
