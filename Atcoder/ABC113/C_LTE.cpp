#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>
#include <string>

using namespace std;

int main(){
    int N, M, i;
    cin >> N;
    cin >> M;

    vector< pair<int, int> > p(M);
    vector< int > Y(M);
    vector< int > app(M);
    vector< string > SN(M);
    
    int P;
    for (i=0; i<M; i++){
        cin >> P;
        cin >> Y[i];
        p[i] = make_pair(Y[i], P);
        //cout << p[i].first << ' ' << p[i].second << '\n';
    }

    sort(p.begin(), p.end());

    int temp, num, j;
    for (i=0; i<M; i++){
        app[p[i].second]++;
        num = app[p[i].second];
        vector<int>::iterator it = find(Y.begin(), Y.end(), p[i].first);
        int index = distance(Y.begin(), it);
        cout << SN[index];
        string s1 = to_string(num); //build order
        string s2 = to_string(p[i].second); //num of pref.
        for (j=0; j<6-s2.size(); j++) SN[index].push_back('0');
        SN[index] += s2;
        for (j=0; j<6-s1.size(); j++) SN[index].push_back('0');
        SN[index] += s1;
        
    }

    for (i=0; i<M; i++){
        cout << SN[i] << '\n';
    }

}