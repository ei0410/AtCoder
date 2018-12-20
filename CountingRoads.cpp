#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> a(M);
    std::vector<int> b(M);
    for (int i = 0; i < M; i++) {
        std::cin >> a[i] >> b[i];
    }

    std::vector<int> num(51, 0);
    for (int i = 0; i < M; i++) {
        num[a[i]]++;
        num[b[i]]++;
    }

    for (int i = 1; i <= N; i++) {
        std::cout << num[i] << std::endl;
    }

    return 0;
}