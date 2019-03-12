#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string str1 = "12345";
    std::string str2 = "abcde";
    std::string str3 = "ABCDE";

    std::vector<std::string> v;
    v.push_back(str1);
    v.push_back(str2);
    v.push_back(str3);

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}