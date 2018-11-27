#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int A, B, C, D, E, F;
    int SugerWater, Sugar;
    int l, n, m, o;

    cin >> A >> B >> C >> D >> E >> F;

    double parsent = double(100 * E) / double(100 + E);

    SugerWater = 100 * A;
    Suger = C; 
    int Weight = 0;

    while(Weight <= F) {
        if (double(100 * Sugar) / double(SugerWater) <= parsent) {
            break;
        }
    }

    cout << SugerWater << Sugar;

    return 0;
}