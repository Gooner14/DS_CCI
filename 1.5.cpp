/*

Cracking the Coding Interview.
Question: 1.5
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

	string str1,str2;
	cin>>str1>>str2;
	
	if(abs(str1.size()-str2.size())>1){
	    cout<<"NO"<<endl;
	    return 0;
	}
	
	if(str2.size()>str1.size())
        swap(str1,str2);	
	
	bool flag = false;
	
	for(ll i=0,j=0;i<str1.size();i++,j++){
	    if(str1[i]!=str2[j]){
	        if(flag){
	            cout<<"NO"<<endl;
	            return 0;
	        }
	        flag = true;
	        if(str1.size()!=str2.size())
	            ++i;
	    }
	}
	
	cout<<"Yes"<<endl;
	return 0;
}	
