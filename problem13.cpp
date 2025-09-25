#include <iostream>

using namespace std;

int main() {


    int n,count = 0;
    cin>>n;
    for(int i=0;i<n;i++) {
        count++;
        for(int j=0;j<count;j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}