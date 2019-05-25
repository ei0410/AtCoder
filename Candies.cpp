#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a1(N);
    std::vector<int> a2(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a1[i];
    }
    for (int i = 0; i < N; i++) {
        std::cin >> a2[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        int temp = 0;
        for (int j = 0; j <= i; j++) {
            temp += a1[j];
        }
        for (int j = i; j < N; j++) {
            temp += a2[j]; 
        }
        if (max < temp) {
            max = temp;
        }
    }

    std::cout << max << std::endl;
    return 0;
}