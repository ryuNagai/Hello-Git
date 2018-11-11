#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    int i;

    for (i=N; i<1000; i++){
        string ans = to_string(i);
        if (ans[0]==ans[1] && ans[1]==ans[2]){
            cout << ans[0] << ans[1] << ans[2] << '\n';
            break;
            }
    }
    

}