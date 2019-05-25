#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    bool flag = false;
    for (int i = 0; i < N; i++) {
        if (a[i] % 2 != 0) {
            flag = true;
        }
    }

    if (flag) {
        std::cout << "first" << std::endl;
    } else {
        std::cout << "second" << std::endl;
    }
    return 0;
}