#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int diff_sum(vector<int> B, int N){
    int i, diff = 0;
    for (i=0; i<N-1; i++){
        diff += abs(B[i] - B[i+1]);
    }

    return diff;
}

int main(){
    int N, i, j, k, ans;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    for (i=0; i<N; i++){
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    ans = 0;
    if (N % 2){
        for (i=0; i<(N-1)/2; i++){
            ans -= 2 * A[i];
            cout << ans << ' ';
            }
        ans += A[i];
        cout << ans << ' ';
        ans += A[i+1];
        cout << ans << ' ';
        for (i=0; i<N/2-1; i++){
            ans += 2 * A[(N-1)/2 + 2 + i];
            cout << ans << ' ';
        }

    }
    else {
        for (i=0; i<N/2; i++){
            ans -= 2 * A[i];
        }
        ans += A[i];
        for (i=0; i<N/2-1; i++){
            ans += 2 * A[N/2 - 1 + 1 + i];
        }    }

    cout << ans << '\n';

}
