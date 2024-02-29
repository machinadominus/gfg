//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    bool fascinating(int n) {
        int n_2 = n * 2;
        int n_3 = n * 3;
        string s = to_string(n) + to_string(n_2) + to_string(n_3);
        
        if (s.size() != 9) {
            return false;
        }
        
        sort(s.begin(), s.end());
        
        for (int i = 0; i < 9; i++) {
            if (s[i] != '0' + i + 1) {
                return false;
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends
