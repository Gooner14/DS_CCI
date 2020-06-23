/*

Cracking the Coding Interview.
Question: 1.7
Maintainer: Arpit Sardana

O(n^2)
In Place

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
    
    ll n;
    cin>>n;
    
    vector<vector<ll>> arr;
    
    for(ll i=0;i<n;i++)
    {
        vector<ll> temp;
        for(ll j=0;j<n;j++)
        {
            int num;
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }

    printArr(arr);
    
    for(ll i=0;i<arr.size()/2;i++)
    {   int row = i;
        for(ll j=row;j<n-1-row;j++)
        {
            int temp = arr[row][row+j];
            int right = arr[row+j][n-1-row];
            int bottom = arr[n-1-row][n-1-row-j];
            int left = arr[n-1-row-j][row];
            
        //    cout<<"top "<<row<<" "<<row+j<<" value: "<< temp<<endl;
        //    cout<<"right "<<row+j<<" "<<n-row<<" value: "<<right<<endl;
        //    cout<<"vottom "<<n-row<<" "<<n-row-j<<" value: "<<bottom<<endl;
        //    cout<<"left "<<n-row-j<<" "<<row<<" value: "<<left<<endl;
            
            arr[row][row+j] = arr[n-1-row-j][row];
            arr[n-1-row-j][row] = arr[n-1-row][n-1-row-j];
            arr[n-1-row][n-1-row-j] = arr[row+j][n-1-row];
            arr[row+j][n-row-1] = temp;
            
        //    printArr(arr);
        }
    }
    
    printArr(arr);

	return 0;
}	
