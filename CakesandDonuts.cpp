#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    bool flag = false;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            int num = i * 4 + j * 7;
            if (num == N) {
                flag = true;
            }
        }
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}