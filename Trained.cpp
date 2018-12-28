#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(N+1);
    a[0] = 0;
    for (int i = 1; i <= N; i++) {
        std::cin >> a[i];
    }

    int num = 1;
    int count = 0;
    while(1) {
        if (num == 2) {
            std::cout << count << std::endl;
            break;
        }
        if (count > N) {
            std::cout << -1 << std::endl;
            break;
        }
        count++;
        num = a[num];
    }
    return 0;
}