#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::list<int> lst;

    int N = 10;
    for (int i = 0; i < N; i++) {
        lst.push_back(i);
    }

    lst.sort();
    //lst.sort(greater<int>());
    lst.unique();

    std::list<int>::iterator pos = lst.end();
    lst.insert(pos, 100);
    lst.insert(pos, 101);
    //lst.erase(pos);

    lst.push_back(0);
    lst.back();
    lst.pop_back();

    lst.push_front(0);
    lst.front();
    lst.pop_front();

    for (std::list<int>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        std::cout << *it << std::endl;
    }

    std::list<int> fromlst;
    std::list<int> tolst;
    tolst.splice(tolst.end(), lst);
    tolst.splice(tolst.end(), fromlst);

    lst.size();
    lst.clear();

    return 0;
}