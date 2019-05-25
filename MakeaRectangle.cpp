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

    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    map<int, int> m;
    for (int i = 0; i < N; i++) {
        m[A[i]]++;
    }

    ll edge1 = 0;
    ll edge2 = 0;
    ll sq = 0;
    for (map<int, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        if (it->second > 1) {
            if (it->second >= 4) {
                sq = (ll)it->first * (ll)it->first;
            }
            if (edge1 == 0) {
                edge1 = it->first;
            } else {
                edge2 = edge1;
                edge1 = it->first;
            }
        }
    }

    cout << max(edge1*edge2, sq) << endl;
    return 0;
}