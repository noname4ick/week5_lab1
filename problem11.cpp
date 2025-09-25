#include <iostream>

using namespace std;

int main() {
        int t_p = 0,t_n = 0,num;
    float sum = 0;
    cout << "Enter an integer, the input ends if it is 0: ";
    do {
    cin>>num;
        if(num>0)
            t_p++;
        if(num<0)
            t_n++;
        sum += num;

    }while (num != 0);
    float avg;
    avg = sum/(t_p+t_n);
    cout << "The number of positives is " << t_p<< endl;
    cout << "The number of negatives is " << t_n<< endl;
    cout << "The total is " << sum << endl;
    cout << "The avarage is " << avg << endl;


    return 0;
}