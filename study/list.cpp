#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::list<int> lst;

    std::cout << lst.size() << std::endl;

    lst.push_front(1);
    lst.push_back(1);

    lst.pop_front();
    lst.pop_back();

    lst.clear();
    std::cout << lst.size() << std::endl;
    std::cout << std::boolalpha << lst.empty() << std::endl;

    lst.resize(1, -1);
    lst.resize(3, -2);
    lst.resize(2);

    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    std::cout << lst.front() << std::endl;
    std::cout << lst.back() << std::endl;

    std::list<int>::iterator pos = lst.begin();
    lst.insert(pos, -3);
    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    std::cout << *pos << std::endl;
    lst.erase(pos);
    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    lst.push_back(0);
    lst.erase(++lst.begin(), lst.end());
    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    std::list<int> other(5, 1);
    lst.splice(lst.begin(), other, other.begin(), other.end());
    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }
    for (std::list<int>::iterator it = other.begin(), end = other.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    lst.push_front(-2);
    lst.sort();
    //lst.sort(greater<int>());

    lst.unique();
    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }
    
    return 0;
}