#include <bits/stdc++.h>

using namespace std;

#define MULTITEST

#define x first
#define y second
#define mp make_pair
#define pb push_back
#define sqr(a) ((a) * (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define endl "\n"
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;


const int INF = int(1e9);
const li INF64 = li(1e18);
const int MOD = int(1e9) + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);
vector<int> primes;

li search(int n)
{
	for(int i=0;i<primes.size();i++)
	{
		if(primes[i]>=n)return primes[i];
	}
	return 0;
}

void solve()
{
	int n;
	cin>>n;
	cout<<search(n+1)*search(n*2+1)<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int sz = 1e6+1;
	bool used[sz];
	memset(used,false,sizeof(used));
	for(int i=2;i<sz;i++)
	{
		if(!used[i])
		{
			primes.push_back(i);
			for(int j=i+i;j<sz;j+=i)used[j]=true;
		}
	}
    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

