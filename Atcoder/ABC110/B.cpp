#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, X, Y, i, max_x, min_y, war = 0;
    cin >> N; // num of x
    cin >> M; // num of y
    cin >> X;
    cin >> Y;
    vector<int> x(N);
    vector<int> y(M);
    
    for (i=0; i<N; i++) cin >> x[i];
    for (i=0; i<M; i++) cin >> y[i];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    max_x = x[N-1];
    min_y = y[0];

    if (max_x >= min_y) war = 1;
    else{
        war = 1;
        for (i=max_x + 1; i<=min_y; i++){
            if (i > X && i<= Y) war = 0;
        }
    }

    // cout << max_x << ' ' << min_y << '\n';

    if (war) cout << "War\n";
    else cout << "No War\n";

}