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

    vector<int> diff(N);
    diff[0] = abs(A[0]);
    for (int i = 1; i < N; i++) {
        diff[i] = abs(A[i] - A[i-1]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += diff[i];
    }

    for (int i = 0; i < N-1; i++) {
        if (() || ()) {
            
        }
        cout << sum + abs(A[N-1]) << endl;
    }

    return 0;
}