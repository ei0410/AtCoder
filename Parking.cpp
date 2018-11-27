#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, a, b;

    cin >> n >> a >> b;
    
    int c = a*n;

    if(c <= b) {
        cout << c;
    } else {
        cout << b;
    }
    return 0;
}