#include <iostream>
using namespace std;

int main()
{
    int n;
    int p;
    int lp;
    int d;
    lp = 0;
    bool flaga;
    cout << "ile liczb pierwszych";
    cin >> n;
    p = 2;
    for (lp = 0; lp < n;) {
        flaga = false;
        for (d = 2; d < p; d += 1) {
            if (p % d == 0) {
                flaga = true;
            }
        }
        if (flaga == false) {
            cout << p << ",";
            lp += 1;
            p += 1;
        }
        else { p += 1; }
    }
}

