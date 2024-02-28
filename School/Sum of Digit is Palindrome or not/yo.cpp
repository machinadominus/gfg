//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int digital = 0;
        while(n != 0){
            digital += n % 10;
            n = n / 10;
        }
        int temp = digital, rev = 0;
        while(temp != 0){
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }
        return rev == digital;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends
