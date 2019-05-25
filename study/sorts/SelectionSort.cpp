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

void SelectionSort(vector<int> &a) {
    for (int i = 0; i < (int)a.size(); i++) {
        int min_index = i;
        for (int j = 0; min_index; j < (int)a.size(); j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }

        swap(a[i], a[min_index]);
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

    SelectionSort(a);

    rep (i, n) {
        cout << a[i] << endl;
    }
    return 0;
}