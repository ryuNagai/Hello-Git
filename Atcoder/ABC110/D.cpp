#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int N, M, rtM, ans, i, flag;

    cin >> N;
    cin >> M;

    // factoring M
    rtM = sqrt(M);
    vector<int> fact(0);
    
    if (M==1) ans = 1;

    if (M>1){
        for (i=2; i<=rtM; i++){
            do {
                if (M % i ==0){
                    M = M / i;
                    fact.push_back(i);
                    flag = 1;
                }
                else flag = 0;
            } while (flag);
        }
        if (M != 1) fact.push_back(M);

    }

    int K = fact.size(), s = 1;

    for (i=0; i<fact.size(); i++){
        cout << fact[i] << ' ';
        s *= fact[i];
    }
    cout << '\n' << K << '\n' << s << '\n';
}