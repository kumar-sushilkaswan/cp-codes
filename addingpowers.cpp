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


void solve()
{
	li n,k;
	cin>>n>>k;
	int bits[64]={0};
	li arr[n];
	forn(i,n)cin>>arr[i];
	forn(i,n)
	{
		li j;
		j=arr[i];
		int cnt=0;
		while(j>0)
		{
			
			int rem = 50;
			if(k)rem = j%k;
			else
			{
				cout<<"NO\n";
			}
			if(rem>1)
			{
				cout<<"NO\n";
				return;
			}
			if(rem)bits[cnt]++;
			cnt++;
			j/=k;
		}
	}
	forn(i,64)
	{
		if(bits[i]>1)
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

