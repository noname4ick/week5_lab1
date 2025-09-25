#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num, i = 2;
    cin>>num;
    while (num != 1){
        if (num % i == 0) {
            while (num % i == 0) {
                if (num == i)
                    cout<<i;
                else
                    cout<<i<<", ";
                num = num / i;
            }

        }
        i++;
    }

    return 0;
}