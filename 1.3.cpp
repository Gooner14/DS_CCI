/*

Cracking the Coding Interview.
Question: 1.3
Maintainer: Arpit Sardana

Current Approach: Using in Place char array
O(n)

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	char str[100];
	cin.get(str, 100, '\n');
	
	ll length;
	cin>>length;
	
	cout<<str<<endl;
	
	ll spaceCount = 0;
	
	for(ll i=0;i<length;i++){
	    if(str[i]==' ')
	        ++spaceCount;
	}
	
	ll newSize = spaceCount*2 + length;
	
	for(ll i=length-1;i>=0;i--){
	    if(str[i]==' '){
	        str[newSize-1]='0';
	        str[newSize-2]='2';
	        str[newSize-3]='%';
	        newSize-=3;
	    }
	    else
	        str[newSize-1] = str[i];
	        --newSize;
	}
	
	cout<<str<<endl; 
	
	return 0;
}	
