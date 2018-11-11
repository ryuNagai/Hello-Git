#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;

    int i;

    if (S.size() == 2){
        cout << S;
    }
    else{
        for (i=2; i>=0; i--) cout << S[i];
    }
    cout << '\n';
}