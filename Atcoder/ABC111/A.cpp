#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string S;
    cin >> S;

    int i, n = S.size();
    int ans[n];

    for (i=0; i<n; i++){
        if (S[i]=='1') ans[i] = 9;
        else ans[i] = 1;
    }
    cout << ans[0] << ans[1] << ans[2] << '\n';




}