#include <iostream>

using namespace std;

int main() {

    const int REPS = 10;
    cout <<"|| "<< "Miles" << " | " <<"Kilometers"<<" ||"<<endl;
    for (int i = 1; i <= REPS; i++) {
        cout <<"||   "<< i << "   |   " <<i*1.609<<"    ||"<<endl;
    }

    return 0;
}