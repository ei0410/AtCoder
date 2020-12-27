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

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

#define MAX_N 100010
#define MAX_Q 200010

int N, Q;
int P[MAX_Q], A[MAX_Q], B[MAX_Q], parent[MAX_N], rank[MAX_N];

void init(ll n) {
    for (ll i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

ll root(ll x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = root(parent[x]);
    }
}

bool same(ll x, ll y) {
    return root(x) == root(y);
}

void unite(ll x, ll y) {
    x = root(x);
    y = root(y);

    if (x == y) {
        return;
    }

    if (rank[x] < rank[y]) {
        parent[x] = y;
    } else {
        parent[y] = x;
        if (rank[x] == rank[y]) {
            rank[x]++;
        }
    }
}
 
int main(int argc, char *argv[])
{
    cin >> N >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> P[i] >> A[i] >> B[i];
    }

    init(N);

    for (int i = 0; i < Q; i++) {
        if (P[i]) {
            if (same(A[i], B[i])) {
                Yes
            } else {
                No
            }
        } else {
            unite(A[i], B[i]);
        }
    }
    return 0;
}