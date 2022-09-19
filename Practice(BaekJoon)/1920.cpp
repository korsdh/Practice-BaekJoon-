#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n, m;
vector<int> arr;

int bns(int start, int end, int target) {
	int mid = (start + end) / 2;
	if (start >= end) {
		if (arr[mid] != target) {
			return 0;
		}
		else {
			return 1;
		}
	}
	if (arr[mid] > target) {
		end = mid - 1;
		bns(start, end, target);
	}
	else if (arr[mid] < target) {
		start = mid + 1;
		bns(start, end, target);
	}
	else {
		return 1;
	}
	
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		cout << bns(0,arr.size() - 1, t) << endl;
	}
	return 0;
}