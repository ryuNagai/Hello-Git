#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int N, T, A, i;
    cin >> N;
    cin >> T;
    cin >> A;

    vector<int> H(N);
    vector<double> Diff(N);

    double temp;
    for (i=0; i<N; i++){
        cin >> H[i];
        temp = A - (T - H[i] * 0.006);
        Diff[i] = abs(temp);
    }

    vector<double>::iterator min = min_element(Diff.begin(), Diff.end());
    int index = distance(Diff.begin(), min);

    cout << index + 1 << '\n';

}