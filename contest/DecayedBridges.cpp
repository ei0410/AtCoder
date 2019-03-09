#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

#define MAX_N 100010

int parent[MAX_N];

void init(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
}

int root(int x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = root(parent[x]);
    }
}

bool same(int x, int y) {
    return root(x) == root(y);
}

void unite(int x, int y) {
    x = root(x);
    y = root(y);

    if (x == y) {
        return;
    }

    parent[x] = y;
}

int size(int x) {
    return -parent[root(x)];
}
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        std::cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    std::vector<ll> ans(M, 0);
    ans[M-1] = ll(N)*ll(N-1)/2;

    init(N);

    for (int i = M-1; i >= 0; i--) {
        if (root(A[i]) != root(B[i])) {
            ans[i-1] = ans[i] - ll(size(A[i])) * ll(size(B[i]));
            unite(A[i], B[i]);
        } else {
            ans[i-1] = ans[i];
        }
    }

    for (int i = 0; i < M; i++) {
        std::cout << ans[i] << std::endl;
    }
    return 0;
}
