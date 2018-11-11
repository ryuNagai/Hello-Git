#include <iostream>
#include <string>

using namespace std;

int main(){
    string S, T;
    int N, i, j, ans=1;

    cin >> S;
    cin >> T;

    N = S.size();

    for (i=0; i<N; i++){
        if (S[i] == T[i]){

            for (j=0; j<N; j++){
                if (T[j] == T[i] && j != i && S[j] != T[j]) ans = 0; // fail!
                else if (S[j] == T[i] && j != i && S[j] != T[j]) ans = 0; // fail!
            }

        }
    }

    if (ans) cout << "Yes\n";
    else cout << "No\n";

}