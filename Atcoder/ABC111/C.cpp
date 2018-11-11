#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int much(int i, int n, vector< pair<int, int> >& c){
    int temp = 0;
    int j;
    for (j=0; j<n; j++){
        if (c[j].second == i){
            return j;
        }
    }
    return -1;
}

int main() {
    int n, i, j;
    cin >> n;

    int e, o, temp;
    vector< pair<int, int> > evenList(0); // appearence, num
    vector< pair<int, int> > oddList(0); // appearence, num
    
    // divide even and odd
    for (i=0; i<n; i++){
        if (i % 2 == 0){
            cin >> e;
            // check if the num appeared before
            temp = much(e, evenList.size(), evenList);
            if (temp >= 0){
                evenList[temp].first--;
            }
            else {
                evenList.push_back(make_pair(-1, e));
            }
        }
        if (i % 2 != 0) {
            cin >> o;
            // check if the num appeared before
            temp = much(o, oddList.size(), oddList);
            if (temp >= 0){
                oddList[temp].first--;
            }
            else {
                oddList.push_back(make_pair(-1, o));
            }
        }
    }

    sort(evenList.begin(), evenList.end());
    sort(oddList.begin(), oddList.end());
    
    if (evenList[0].second != oddList[0].second) cout << n + evenList[0].first + oddList[0].first << '\n';
    else if (evenList[0].first == -n/2 && oddList[0].first == -n/2) cout << n / 2 << '\n';
    else if (evenList.size() > 1 && oddList.size() > 1){
        cout << n + min(evenList[1].first + oddList[0].first, evenList[0].first + oddList[1].first) << '\n';
    }
    else if (evenList.size() == 1){
        cout << n + evenList[0].first + oddList[1].first << '\n';
    }
    else if (oddList.size() == 1){
        cout << n + evenList[1].first + oddList[0].first << '\n';
    }
    // for debug
    // cout << evenList[0].first << ' ' << evenList[0].second << '\n';
    // cout << oddList[0].first << ' ' << oddList[0].second << '\n';
}
