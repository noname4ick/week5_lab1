#include <iostream>

using namespace std;

int main() {


    int n;
    float sum = 0;
    cin>>n;
    if(n==0) {
        cout<<"Excluding zero";
    }
    else {
            for(int j=1;j<=n;j++) {
                if (j == n)
                    cout<<"1/"<<j<<" ";
                else
                    cout<<"1/"<<j<<"+";
                sum = sum + 1/float(j);
            }
    }
    cout<<"The sum is "<<sum<<endl;

    return 0;
}