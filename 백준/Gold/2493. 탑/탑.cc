#include <bits/stdc++.h>
using namespace std;
#define int int64_t
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using db = deque<bool>;
using ddb = deque<deque<bool>>;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define forn(i, n) for (int i = 0; i < (int)n; i++)
#define forn1(i, n) for (int i = 1; i <= (int)n; i++)
const int maxn = 1e9 + 7;
const double mod = 1e9 + 7;
#define checkInGrid() if (nx < 0 or nx >= n or ny < 0 or ny >= m) continue;


void solution()
{
	int n;
	cin >> n;
	vi tower(n);
	forn(i, n) cin >> tower[i];

	stack<int> st;	// 인덱스
	vi ans(n);

	forn(i, n)
	{
		while (st.empty() == false and
			tower[st.top()] < tower[i]) st.pop();

		if (st.empty() == false and
			tower[st.top()] >= tower[i]) ans[i] = st.top() + 1;

		st.push(i);
	}

	forn(i, n) cout << ans[i] << ' ';
}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	// cin >> t;
	while (t--) solution();
	return 0;
}