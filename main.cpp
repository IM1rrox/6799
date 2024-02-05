#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	int result = 0;
	for (int i = 0; i < n; i++) {
		int minus = k - vec[i];
		int j = n - 1;
		while (vec[j] >= minus && j > i) j--;
		result += (n - j) - 1;
	}
	cout << result << endl;
}

// file "A"
// program: 43666
// site: 43666

// file "B"
// program: 