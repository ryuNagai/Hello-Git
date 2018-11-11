#include <iostream>
using namespace std;

int main() {
    int N, T, i, c, t, ans;
    int cmin = 1001;
    cin >> N;
    cin >> T;


    for (i=0; i<N; i++){
        cin >> c;
        cin >> t;
        if (t <= T && c < cmin) cmin = c;
    }

    if (cmin==1001) cout << "TLE";
    else cout << cmin << '\n';
}