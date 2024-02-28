#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int DivisibleByEight(string s){
        string y;
        if (s.size() >= 4){
            y = s.substr(s.size() - 3, 3);
        }
        else{
            y = s;
        }
        int x = stoi(y);
        if(x == 0 or x % 8 == 0){
            return 1;
        }
        return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
    return 0;
}
