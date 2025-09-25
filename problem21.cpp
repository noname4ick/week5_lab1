#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int n;
    cout <<"Enter the number of seconds: ";
    cin>>n;

    for (int i = n; i >= 1; i--) {
        sleep(1);
        if (i == 1) {
            cout << "Stopped" << endl;
        }else
            cout << i-1 << " seconds remaining "<<endl;

    }

    return 0;
}