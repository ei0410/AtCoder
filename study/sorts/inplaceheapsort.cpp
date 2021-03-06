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

void Heapify(vector<int> &a, int i, int n) {
    int child1 = i*2+1;
    if (child1 >= n) {
        return;
    }
    if (child1 + 1 < n && a[child1 + 1] > a[child1]) {
        child1++;
    }
    if (a[child1] <= a[i]) {
        return;
    }
    swap(a[i], a[child1]);

    Heapify(a, child1, n);
}

void HeapSort(vector<int> &a) {
    int n = (int)a.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(a, i, n);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(a[0], a[i]);
        Heapify(a, 0, i);
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    rep(i, n) {
        cout << a[i] << endl;
    }

    HeapSort(a);

    rep(i, n) {
        cout << a[i] << endl;
    }
    return 0;
}