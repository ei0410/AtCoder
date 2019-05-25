#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;

    std::string a, b, c, d;
    a = s[0];
    b = s[1];
    c = s[2];
    d = s[3];

    int A = std::stoi(a);
    int B = std::stoi(b);
    int C = std::stoi(c);
    int D = std::stoi(d);
    
    if (A+B+C+D == 7) {
        std::cout << A << "+" << B << "+" << C << "+" << D << "=7" << std::endl;
    } else if (A+B+C-D == 7) {
        std::cout << A << "+" << B << "+" << C << "-" << D << "=7" << std::endl;
    } else if (A+B-C+D == 7) {
        std::cout << A << "+" << B << "-" << C << "+" << D << "=7" << std::endl;
    } else if (A+B-C-D == 7) {
        std::cout << A << "+" << B << "-" << C << "-" << D << "=7" << std::endl;
    } else if (A-B+C+D == 7) {
        std::cout << A << "-" << B << "+" << C << "+" << D << "=7" << std::endl;
    } else if (A-B+C-D == 7) {
        std::cout << A << "-" << B << "+" << C << "-" << D << "=7" << std::endl;
    } else if (A-B-C+D == 7) {
        std::cout << A << "-" << B << "-" << C << "+" << D << "=7" << std::endl;
    } else if (A-B-C-D == 7) {
        std::cout << A << "-" << B << "-" << C << "-" << D << "=7" << std::endl;
    }

    return 0;
}