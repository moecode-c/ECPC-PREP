#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

template <typename T>
using vec = vector<T>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const int INF = (int)1e9;
const ll LINF = (ll)4e18;
const int MOD = 1'000'000'007;

void fast_io() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
}

ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

ll mod_pow(ll a, ll e, ll mod = MOD) {
	a %= mod;
	ll result = 1;
	while (e > 0) {
		if (e & 1) result = (result * a) % mod;
		a = (a * a) % mod;
		e >>= 1;
	}
	return result;
}

void solve() {
	// Write solution for one test case here.
}

int main() {
	fast_io();

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
