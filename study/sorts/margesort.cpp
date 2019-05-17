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

void MergeSort(vector<int> &a, int left, int right) {
    if (right - left == 1) {
        return;
    }

    int mid = left + (right - left) / 2;

    MergeSort(a, left, mid);
    MergeSort(a, mid, right);

    vector<int> buf;
    for (int i = left; i < mid; i++) {
        buf.push_back(a[i]);
    }
    for (int i = right-1; i >= mid; i--) {
        buf.push_back(a[i]);
    }

    int iterator_left = 0;
    int iterator_right = (int)buf.size() - 1;
    for (int i = left; i < right; i++) {
        if (buf[iterator_left] <= buf[iterator_right]) {
            a[i] = buf[iterator_left++];
        } else {
            a[i] = buf[iterator_right--];
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

    MergeSort(a, 0, n);

    rep (i, n) {
        cout << a[i] << endl;
    }
    return 0;
}