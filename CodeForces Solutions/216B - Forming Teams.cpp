#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define int           long long
#define endl 		  "\n"
#define all(x) 		  x.begin(), x.end()
#define deb(x) 		  cout << #x << " --> " << (x) << endl
#define pb		 	  push_back              
#define mod 		  1000000007 // 1e9 + 7
#define prec(x,y)	  fixed << setprecision(y) << x
#define print(v)	  for(auto x : v) cout << x << " "; cout << endl

void solve(){
	int n, i, j, _ip, m; cin >> n >> m;
	vector <pair <int, int>> arch;
	map <int, int> arch_cnt;
	for(i=0; i<m; ++i) {
		int a, b; 
		cin >> a >> b;
		arch.pb(make_pair(a, b));
		arch_cnt[a]+=1;
		arch_cnt[b]+=1;
	}
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int _t;
    // cin >> _t;
    	// while(_t--)
    		// solve();
}