#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    bool flag = false;
    if (S[0] == 'a' && S[1] == 'b' && S[2] == 'c') {
        flag = true;
    }
    if (S[0] == 'a' && S[1] == 'c' && S[2] == 'b') {
        flag = true;
    }
    if (S[0] == 'b' && S[1] == 'a' && S[2] == 'c') {
        flag = true;
    }
    if (S[0] == 'b' && S[1] == 'c' && S[2] == 'a') {
        flag = true;
    }
    if (S[0] == 'c' && S[1] == 'b' && S[2] == 'a') {
        flag = true;
    }
    if (S[0] == 'c' && S[1] == 'a' && S[2] == 'b') {
        flag = true;
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}