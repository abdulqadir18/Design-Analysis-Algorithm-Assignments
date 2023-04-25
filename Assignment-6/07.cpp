#include<bits/stdc++.h>
using namespace std;

int maxPath(int i, int j, vector<vector<int>>&a)
{
  if(i>=a.size()) return 0;
  if(i==a.size()-1) return a[i][j];
  int striaght = maxPath(i+1, j, a);
  int diagonal = maxPath(i+1, j+1, a);
  return a[i][j] + max(striaght, diagonal);
}

int main()
{
  int n;
  cin>>n;
  vector<vector<int>>a(n, vector<int>(n));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=i; j++) cin>>a[i][j];
  }

  cout<<maxPath(0, 0, a);
  return 0;
}