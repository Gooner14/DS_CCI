/*

Cracking the Coding Interview.
Question: 1.8
Maintainer: Arpit Sardana

O(n^2)
Space O(n+m)
Can be done in O(1) space

*/

using namespace std;
#include <bits/stdc++.h>
#define ll long long 

void printArr(vector<vector<ll>> arr)
{
    for (ll i = 0; i < arr.size(); i++) 
    {
        for (ll j = 0; j < arr[i].size(); j++) 
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    
    }
    cout<<endl;
}    

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    ll n,m;
    cin>>n>>m;
    
    vector<vector<ll>> arr;
    
    for(ll i=0;i<n;i++)
    {
        vector<ll> temp;
        for(ll j=0;j<m;j++)
        {
            int num;
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }
    
    bool flagArrayRow[n] = {false};
    bool flagArrayCol[m] = {false};
    
    for(ll i=0;i<arr.size();i++)
    {
        for(ll j=0; j<arr[i].size();j++)
        {
            if(arr[i][j]==0)
            {
                flagArrayRow[i]=true;
                flagArrayCol[j]=true;
            }
        }
    }
    
    for(ll i=0;i<arr.size();i++)
    {
        for(ll j=0;j<arr[i].size();j++)
        {
            if(flagArrayRow[i] || flagArrayCol[j])
                arr[i][j]=0;
        }
    }
    
    printArr(arr);

	return 0;
}	
