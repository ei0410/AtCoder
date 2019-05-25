#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    int check[26] = {0};

    for (int i = 0; i < S.size(); i++) {
        check[S[i] - 'a']++;
    }

    bool flag = true;
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (check[i] == 0) {
            std::cout << char(i + 'a') << std::endl;
            flag = false;
            break;
        }
    }

    if (flag) {
        std::cout << "None" << std::endl;
    }

    return 0;
}