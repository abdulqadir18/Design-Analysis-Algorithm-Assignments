// A vertex cover of a graph G = (V;E) is a subset of vertices S ⊂ V that includes
// at least one endpoint of every edge in E. Give & write a linear-time algorithm for finding
// the size of the smallest vertex cover of T. For instance, in the following tree, possible vertex
// covers include A;B;C;D;E; F;G and A;C;D; F but not C;E;F. The smallest vertex cover has
// size 3: B;E;G.

#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<vector<int>>&adj, vector<bool>&vis)
{
  if(vis[i]) return;
  vis[i] = true;
  for(int j = 0; j<adj[i].size(); j++)
  {
    if(!vis[adj[i][j]]) dfs(adj[i][j], adj, vis);
  }
}

int main()
{
  int n, m;
  cin>>n>>m;
  vector<vector<int>>adj(n);
  for(int i=0; i<m; i++)
  {
    int u, v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int ans = 0;
  vector<bool>vis(n, false);
  for(int i=0; i<n; i++)
  {
    if(!vis[i])
    {
      dfs(i, adj, vis);
      ans++;
    }
  }

  cout<<ans;

}