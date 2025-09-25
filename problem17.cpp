#include <iostream>
using namespace std;

int main() {

    int num, sumOfDigits = 0;
    cin>>num;
    while (num > 0) {
        sumOfDigits = sumOfDigits + num%10;
        num = num/10;
    }

    cout<<"The sum of digits is "<<sumOfDigits<<endl;
    return 0;
}