#include<iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int n, k;
int arr[11];
int cnt = 0;

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (k > 0) {
		for (int i = (n - 1); i >= 0; i--) {
			if (k >= arr[i]) {
				k -= arr[i];
				break;
			}
			else {
				continue;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}