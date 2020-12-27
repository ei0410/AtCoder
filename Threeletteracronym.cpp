#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;

    std::transform(s1.begin(), s1.end(), s1.begin(), toupper);
    std::transform(s2.begin(), s2.end(), s2.begin(), toupper);
    std::transform(s3.begin(), s3.end(), s3.begin(), toupper);

    std::cout << s1[0] << s2[0] << s3[0] << std::endl;
    return 0;
}