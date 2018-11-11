#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    int A, B, K, i;

    cin >> A;
    cin >> B;
    cin >> K;

    for (i=1; i<=K; i++){
        if (i % 2){ // odd
            if (A % 2) A--;
            B += A / 2;
            A = A / 2;
        }
        else {
            if (B % 2) B--;
            A += B / 2;
            B = B / 2;
        }
    }

    cout << A << ' ' << B << '\n';

}