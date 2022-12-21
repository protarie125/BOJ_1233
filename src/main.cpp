#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto sums = vi(a + b + c, 0);
	auto mx = int{ 0 };
	for (auto i = 1; i <= a; ++i) {
		for (auto j = 1; j <= b; ++j) {
			for (auto k = 1; k <= c; ++k) {
				const auto now = i + j + k - 1;
				sums[now] += 1;

				if (sums[mx] < sums[now]) {
					mx = now;
				}
			}
		}
	}

	cout << mx + 1;

	return 0;
}