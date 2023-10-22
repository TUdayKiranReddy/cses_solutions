// Weird Algorithm 
// Introductory Problems

#include <bits/stdc++.h>
using namespace std;

#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

void solve(int n){
	ll i = n;
	while(i != 1){
		if(i%2){
			cout << i << " ";
			i = 3*i + 1;
		}
		else{
			cout << i << " ";
			i = i >> 1;
		}
	}
	cout << "1\n";
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//////////////////////////////////////
	int n; cin >> n;
	solve(n);
	//////////////////////////////////////
	return 0;
}
