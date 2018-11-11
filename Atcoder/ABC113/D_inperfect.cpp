#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int H, W, K;
int goal;

void dfs(int h, int w){ // x, y ; current position
    // cout << h << ' ' << w << '\n';
    if (h == H && w == K-1) goal++;
    int nh = h + 1;
    for (int dw = -1; dw <= 1; dw++){
        int nw = w + dw;
        if (0 <= nw && nw < W && nh <= H ) dfs(nh, nw);
        }
    }

int main(){
    cin >> H;
    cin >> W;
    cin >> K;

    int h = 0;
    int w = 0;
    
    dfs(h, w);

    cout << goal << '\n';

}
