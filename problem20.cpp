#include <iostream>

using namespace std;

int main() {

    int q = 20000;
    /*
    When q = 10000
    Pi is 3.1415
    When q = 20000
    Pi is 3.14155
    Wehn q = 100000
    Pi is 3.14159
     */
    float pi = 0;
    for (int i = 1; i <= q; i++) {
        float v = i;
        if (i % 2 != 0)
            pi = pi + 1 / (2*v -1);
        else
            pi = pi - 1 / (2*v - 1);
    }
    pi = pi * 4;
    cout << pi << endl;


    return 0;
}