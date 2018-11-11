#include <iostream>
using namespace std;

int main() {
    int N, Cx, Cy, xdif, ydif, k, temp_H;

    cin >> N;

    int x[N], y[N], h[N];


    for (k=0; k<N; k++){
        cin >> x[k];
        cin >> y[k];
        cin >> h[k];
    }

    for (Cx = 0; Cx <= 100; Cx++){
        for (Cy = 0; Cy <= 100; Cy++){

            for (k=0; k<N; k++){
                if (h[k]>0){
                    xdif = max(x[k] - Cx, Cx - x[k]);
                    ydif = max(y[k] - Cy, Cy - y[k]);
                    temp_H = h[k] + xdif + ydif;
                    break;
                }
            }

            for (k=0; k<N; k++){
                xdif = max(x[k] - Cx, Cx - x[k]);
                ydif = max(y[k] - Cy, Cy - y[k]);
                if (h[k] != max(temp_H - xdif - ydif, 0) ) break;
                }

            if (k==N){
                cout << Cx << ' ';
                cout << Cy << ' ';
                cout << temp_H << '\n';
                Cx = 101;
                Cy = 101;
            }

            }
        }
    }
