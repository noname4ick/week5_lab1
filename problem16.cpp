#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n_years = 5;
    float price = 12000;
            for(int j=1;j<=n_years;j++) {
                price = price * 1.03;
                cout<<"This $"<<price<<" price is for year "<<j<<endl;
            }
    cout<<"The total price for 5 years is "<<price<<endl;

    return 0;
}