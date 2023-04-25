// A subsequence is palindromic if it is the same whether read left to right or right to
// left. For instance, the sequence A;C; G; T; G; T;C; A; A; A; A; T;C;G has many palindromic
// subsequences, including A;C; G;C;A and A; A; A;A (on the other hand, the subsequence A;C;
// T is not palindromic). Devise an algorithm that takes a sequence x[1 : : : n] and returns the
// (length of the) longest palindromic subsequence. Its running time should be O(n
// 2
// ).

#include<bits/stdc++.h>
using namespace std;

int findLength(string s1, string s2) {
        int m = s1.size(), n = s2.size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        for(int i=0; i<=m; i++) dp[i][0] = 0;
        for(int j=0; j<=n; j++) dp[0][j] = 0;

        int ans = 0;
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s1[i-1]==s2[j-1]) {dp[i][j] = 1+dp[i-1][j-1];}
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];  
    }

int main()
{
  string s;
  cin>>s;
  string r = s;
  reverse(r.begin(), r.end());
  cout<<findLength(s, r);
  return 0;
}