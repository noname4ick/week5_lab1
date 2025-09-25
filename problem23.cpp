#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n = 0;
    while(pow(2,n) < 30000) {
        n++;
    }
    cout<<"The largest n is "<<n - 1;

    return 0;
}