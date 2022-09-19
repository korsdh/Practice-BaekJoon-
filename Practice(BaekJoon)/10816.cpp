#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, m;
vector<int> vec;

int bns(int target) {
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (vec[mid] > target) {
			end = mid - 1;
		}
		else if (vec[mid] < target) {
			start = mid + 1;
		}
		
	}
}


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
}