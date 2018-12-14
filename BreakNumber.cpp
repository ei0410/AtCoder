#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    if (N != 1) {
        std::map<int, int> m;

        for (int i = 1; i <= N; i++) {
            int num = i;
            int count = 0;
            while (num % 2 == 0) {
                num /= 2;
                count++;
            }
            m[i] = count;
        }

        int max = 0;
        int num = 0;
        std::map<int, int>::iterator it;

        for (it = m.begin(); it != m.end(); it++) {
            if (max < it->second) {
                max = it->second;
                num = it->first;
            }
        }

        std::cout << num << std::endl;
    } else {
        std::cout << 1 << std::endl;
    }

    return 0;
}