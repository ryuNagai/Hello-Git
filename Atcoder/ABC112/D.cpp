#include <iostream>
using namespace std;

int main() {
    int N, M, i, ans;
    cin >> N;
    cin >> M;

    for (i=M/N; i>0; i--){
        if (M % i == 0) {
            ans = i;
            break;
        }
    }

    cout << ans << '\n';

}