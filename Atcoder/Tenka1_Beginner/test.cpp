#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int main(){
    int B[3] = {1, 2, 3};
    int C[3];
    int i;

    for (i=2; i>=0; i--){
        cout << B[i];
        C[i] = B[i];
    }

    for (i=0; i<3; i++) cout << B[i];
    cout << '\n';
    for (i=0; i<3; i++) cout << C[i];
    cout << '\n';
}