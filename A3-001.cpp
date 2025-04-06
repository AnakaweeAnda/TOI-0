#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[1010];
int ans = 0;

int dfs(int u, int type){
	if(type == 1){
		return u;
	}
	int l = dfs(adj[u][0].first, adj[u][0].second);
	int r = dfs(adj[u][1].first, adj[u][1].second);
	ans += abs(l - r);
	return max(l, r) * 2;
}


int main(){
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
        int opr,x;
		cin >> opr >> x;
		adj[i].emplace_back(x, opr);
		cin >> opr >> x;
		adj[i].emplace_back(x, opr);
	}
	dfs(1, 0);
	cout << ans;
	return 0;
}