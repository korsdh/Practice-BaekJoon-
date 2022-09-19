#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int arr[100001];

int bns(int start, int end, int target) {
	int mid = (start + end) / 2;
	if (start > end) return 0;
	if (arr[mid] > target) {
		bns(start, mid - 1, target);
	}
	else if (arr[mid] < target) {
		bns(mid + 1, end, target);
	}
	else {
		return 1;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		cout << bns(0, n - 1, t) << endl;
	}
	return 0;
}