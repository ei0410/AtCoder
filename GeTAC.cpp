#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<int> ans(N+1, 0);
    for (int i = 1; i <= N; i++) {
        ans[i] = ans[i-1];
        if (S[i-1] == 'A' && S[i] == 'C') {
            ++ans[i];
        }
    }

    int l, r;
    for (int i = 0; i < Q; i++) {
        cin >> l >> r;
        cout << ans[r-1] - ans[l-1] << endl;
    }

    return 0;
}
