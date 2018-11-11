#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

const int mod = 1000000007;
int main() {
	int H, W, K;
	cin >> H >> W >> K;
	vector<vector<int> > dp(H + 1, vector<int>(W, 0)); dp[0][0] = 1;
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			for (int k = 0; k < 1 << (W - 1); ++k) { // 1 << (W - 1) means 2^(W-1) ; << is bitshift
				// Check if two horizontal lines are connecting
				// 2 つの横線がつながっていないか調べる
				bool ok = true;
				for (int l = 0; l < W - 2; ++l) {
					if (((k >> l) & 1) && ((k >> (l + 1)) & 1)) {
						ok = false;
					}
				}
				if (ok) {
					if (j >= 1 && ((k >> (j - 1)) & 1)) {
						// The case which goes left
						// 左方向に横線をたどるケース
						dp[i + 1][j - 1] += dp[i][j];
						dp[i + 1][j - 1] %= mod;
					}
					else if (j <= W - 2 && ((k >> j) & 1)) {
						// The case which goes right
						// 右方向に横線をたどるケース
						dp[i + 1][j + 1] += dp[i][j];
						dp[i + 1][j + 1] %= mod;
					}
					else {
						// The case which goes straight
						// 横線をたどらないケース
						dp[i + 1][j] += dp[i][j];
						dp[i + 1][j] %= mod;
					}
				}
			}
		}
	}
	cout << dp[H][K - 1] << '\n';
	return 0;
}
