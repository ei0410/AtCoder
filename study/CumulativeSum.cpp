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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int left, right;
    cin >> left >> right;

    vector<int> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    vector<int> s(N+1, 0);
    rep (i, N) {
        s[i+1] = s[i] + a[i];
    }

    cout << s[right] - s[left] << endl;
    return 0;
}