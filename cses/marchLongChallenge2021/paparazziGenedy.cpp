#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
#define f(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)

void solve()
{
	int n;
	cin>>n;
	int ans=1;
	stack<int> store;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	store.push(0);
	for(int i=1;i<n;i++)
	{
		while(!store.empty()&&arr[store.top()]<=arr[i])store.pop();
		if(!store.empty())
		{
			ans = max(ans,i-store.top());
		}
		store.push(i);
	}
	cout<<ans<<"\n";
}

int main()
{
	FIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc=2;
	cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}

