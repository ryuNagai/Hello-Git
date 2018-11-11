#include <iostream>
#include <string>

using namespace std;

int main(){
    string S, T, same, diff;
    int N, i, j, ans=1;

    cin >> S;
    cin >> T;

    N = S.size();


    for (i=0; i<N; i++){
        if (S[i] == T[i]){
            if ( (int)same.find(S[i]) == -1 ) same.push_back(S[i]);            
        }
        if (S[i] != T[i]){
            if ( (int)diff.find(S[i]) == -1 ) diff.push_back(S[i]);
            if ( (int)diff.find(T[i]) == -1 ) diff.push_back(T[i]);            
        }
    }

    for (i=0; i<same.size(); i++){
        if ( (int)diff.find(same[i]) != -1 ) ans = 0;
    }

    if (ans) cout << "Yes\n";
    else cout << "No\n";
}