#include <iostream>

using namespace std;

int main() {


    int n,count = 0;
    cin>>n;
    if(n==0) {
        cout<<"The depth is 0";
    }
    else {
        for(int i=1;i<=n;i++) {
            count++;
            for(int j=1;j<=count;j++) {
                cout<<i;
            }
            cout<<endl;
        }
    }

    return 0;
}