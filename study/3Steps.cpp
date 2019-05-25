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

#define MAX_V 100010

vector<int> G[MAX_V];

int N, M;

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A); // undirected graph
    }

    return 0;
}