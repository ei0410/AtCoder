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

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int ans = INF;
    for (int i = -100; i <= 100; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += pow(abs(i - a[j]), 2); 
        }
        if (ans > sum) {
            ans = sum;
        }
    }

    cout << ans << endl;
    return 0;
}