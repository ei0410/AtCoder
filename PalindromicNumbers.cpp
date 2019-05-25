#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B;
    std::cin >> A >> B;

    int count = 0;
    for (int i = A; i <= B; i++) {
        std::string s = std::to_string(i);
        if (s[0] == s[4] && s[1] == s[3]) {
            count++;
        }
    }

    std::cout << count << std::endl;
    return 0;
}