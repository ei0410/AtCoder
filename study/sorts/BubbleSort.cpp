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

void BubbleSort(vector<int> &a) {
    for (int i = 0; i < (int)a.size() - 1; i++) {
        for (int j = (int)a.size() - 1; j > i; j--) {
            if (a[j-1] > a[j]) {
                swap(a[j-1], a[j]);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    rep (i, n) {
        cin >> a[i];
    }
    rep (i, n) {
        cout << a[i] << endl;
    }

    BubbleSort(a);

    rep (i, n) {
        cout << a[i] << endl;
    }
    return 0;
}