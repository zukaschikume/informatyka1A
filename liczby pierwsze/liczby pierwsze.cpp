#include <iostream>
using namespace std;

int main()
{
    int n;
    int p;
    int lp;
    int d;
    lp = 0;
    p = 2;
    bool flaga;
    cout << "Ile liczb pierwszych chcesz wyswietlic =";
    cin >> n;
    cout << "Liczby pierwsze:";
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

