//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
        // code here 
        char ch = tolower(c);
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'){
            return "YES";
        }
        return "NO";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
