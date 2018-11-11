#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

#define TEST 0

using namespace std;

int main()
{
    int N, i, j, flag = 0, flag2 = 0;
    cin >> N;
    
    vector<int> X(N);
    vector<int> Y(N);
    vector<int> U(N);
    vector<int> V(N);

    for (i=0; i<N; i++){
        cin >> X.at(i);
        cin >> Y.at(i);
        U[i] = X[i] + Y[i];
        V[i] = X[i] - Y[i];

        if (i>0){
            if ( abs( (X[i] + Y[i]) % 2 ) != abs( (X[i-1] + Y[i-1]) % 2 ) ){
                flag = 1;
            }
        }
    }

    if (flag) {cout << -1 << '\n'; return -1;}

    if ((X[0] + Y[0]) % 2 == 0){
        flag2 = 1;
        for (i=0; i<N; i++){
            X[i] = X[i] - 1;
            U[i] = X[i] + Y[i];
            V[i] = X[i] - Y[i];
        }
    }

    int m, deci1, deci2;

    int minU = *min_element(U.begin(), U.end());
    int maxU = *max_element(U.begin(), U.end());
    int minV = *min_element(V.begin(), V.end());
    int maxV = *max_element(V.begin(), V.end());

    int lim = max (max(abs(minU), abs(maxU)), max(abs(minV), abs(maxV)));

    if (TEST) cout << "lim = " << lim << '\n';

    for (i=1; i<41; i++){
        if (pow(2,i)-1 >= lim) {
            m = i;
            break;
            }
    }

    if (flag2) cout << m+1 << '\n';
    else cout << m << '\n';

    vector<int> d(m);

    for (i=0; i<m; i++){
        d[i] = pow(2, i);
        cout << d[i] << ' ';
    }
    if (flag2) cout << 1;
    cout << '\n';

    vector<int> UU(m);
    vector<int> VV(m);
    for (i=0; i<N; i++){
        deci1 = (U[i] + pow(2, m) - 1) / 2;
        if (TEST) cout << deci1 << '\n';
        for (j=0; j<m; j++){
            UU[j] = deci1 % 2;
            deci1 /= 2; // opposite order to bonary representation
        }

        deci2 = (V[i] + pow(2, m) - 1) / 2;
        
        for (j=0; j<m; j++){
            VV[j] = deci2 % 2;
            deci2 /= 2; // opposite order to bonary representation
        }

        for (j=0; j<m; j++){
            if (UU[j] == 1 && VV[j] == 1) cout << 'R';
            else if (UU[j] == 1 && VV[j] == 0) cout << 'U';
            else if (UU[j] == 0 && VV[j] == 1) cout << 'D';
            else if (UU[j] == 0 && VV[j] == 0) cout << 'L';
        }
        if (flag2) cout << 'R';
        cout << '\n';

    }


    if (TEST){
        cout << "UU = ";
        for (i=0; i<m; i++){
            cout << UU[i];
        }
        cout << '\n' << "VV = ";
        for (i=0; i<m; i++){
            cout << VV[i];
        }
        cout << '\n';
    }
    
    
}