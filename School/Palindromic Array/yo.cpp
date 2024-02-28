//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int cnt = 0;
    	for(int i = 0; i < n; i++){
    	    int temp = a[i], rev = 0;
    	    while(temp != 0){
    	        int digit = temp % 10;
    	        rev = rev * 10 + digit;
    	        temp /= 10;
    	    }
    	    if (rev == a[i]){++cnt;}
    	}
    	if(cnt == n){return 1;}
    	return 0;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
