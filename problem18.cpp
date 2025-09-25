#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int bin, deci = 0,power = 0;
    cin>>bin;
    while (bin > 0) {
        deci = deci + bin%10*pow(2,power);
        bin = bin/10;
        power++;
    }

    cout<<"The decimal number is "<<deci<<endl;
    return 0;
}