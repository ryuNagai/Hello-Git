#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(3);
    int a, b, c, max, ans;
    cin >> v[0];
    cin >> v[1];
    cin >> v[2];

    sort(v.begin(), v.end());

    cout << v[2] * 10 + v[1] + v[0] << '\n';
}