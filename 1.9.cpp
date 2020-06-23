/*

Cracking the Coding Interview.
Question: 1.9
Maintainer: Arpit Sardana

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 

bool isSubstring(string str1, string str2)
{
    if (str1.find(str2) != std::string::npos) {
        return true;
    }    
    return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string str1,str2;
    cin>>str1>>str2;
    
    if(str1.size()!=str2.size())
    {
        cout<<"Not a Rotation"<<endl;
        return 0;
    }
    
    str1+=str1;
    
    bool flag = isSubstring(str1,str2);
    if(flag)
        cout<<"Rotations"<<endl;
    else
        cout<<"Not a Rotation"<<endl;
    
	return 0;
}	
