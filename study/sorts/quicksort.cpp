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

void QuickSort(vector<int> &a, int left, int right) {
    if (right - left <= 1) {
        return;
    }

    int pivot_index = (left + right) / 2;
    int pivot = a[pivot_index];
    swap(a[pivot_index], a[right - 1]);

    int i = left;
    for (int j = left; j < right - 1; j++) {
        if (a[j] < pivot) {
            swap(a[i++], a[j]);
        }
    }
    swap(a[i], a[right-1]);

    QuickSort(a, left, i);
    QuickSort(a, i+1, right);
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

    QuickSort(a, 0, n);

    rep (i, n) {
        cout << a[i] << endl;
    }
    return 0;
}