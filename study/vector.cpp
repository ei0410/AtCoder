#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::vector<int> v(2);
    std::vector<int> v2(2, 0);

    v.resize(4);
    v2.resize(4, 1);

    for (int i = 0; i < v2.size(); i++) {
        std::cout << v2[i] << std::endl;
    }

    std::cout << v2.front() << std::endl;
    std::cout << v2.back() << std::endl;

    v.clear();
    std::cout << v.size() << std::endl;
    std::cout << v.capacity() << std::endl;

    std::cout << std::boolalpha << v.empty() << std::endl;

    v.push_back(2);
    std::cout << v.size() << std::endl;
    std::cout << v.capacity() << std::endl;
    
    std::vector<char> vstr(4);
    vstr[0] = 's';
    vstr[1] = 't';
    vstr[2] = 'r';
    vstr[3] = '\0';
    std::cout << &vstr[0] << std::endl;
    for (int i = 0; i < v2.size(); i++) {
        std::cout << vstr[i] << std::endl;
    }
    return 0;
}