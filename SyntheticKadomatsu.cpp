#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

#define MAX_N 8

int N, A, B, C;
int l[MAX_N];
int ans[70000];

/*
void dfs(int n, std::vector<int> v) {
    if (n == N) {
        calc(v);
    }

    for (int i = 0; i < 4; i++) {
        v[n] = i;
        dfs(n+1, v);
    }
}
*/

int calc(std::vector<int> v) {
    int sum = INF;
    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < N; i++) {
        if (v[i] == 0) {
            acount++;
            a += l[i];
        } else if (v[i] == 1) {
            bcount++;
            b += l[i];
        } else if (v[i] == 2) {
            ccount++;
            c += l[i];
        }
    }

    if (acount && bcount && ccount) {
        int tmpa = (acount - 1)*10 + std::abs(a - A);
        int tmpb = (bcount - 1)*10 + std::abs(b - B);
        int tmpc = (ccount - 1)*10 + std::abs(c - C);
        sum = tmpa + tmpb + tmpc;
    }

    return sum;
}

int main(int argc, char *argv[])
{
    std::cin >> N >> A >> B >> C;

    for (int i = 0; i < N; i++) {
        std::cin >> l[i];
    }

    for (int i = 0; i < 70000; i++) {
        ans[i] = INF;
    }

    for (int i = 0; i < (1<<2*N); i++) {
        std::vector<int> v(N);
        for (int j = 0; j < N; j++) {
            v[j] = (i >> 2*j) & 3;
        }
        ans[i] = calc(v);
    }

    int min = INF;
    for (int i = 0; i < 70000; i++) {
        if (min > ans[i]) {
            min = ans[i];
        }
    }

    std::cout << min << std::endl;
    return 0;
}