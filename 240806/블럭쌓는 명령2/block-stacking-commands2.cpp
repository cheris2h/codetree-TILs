#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);

	int max{ 0 };
	int max_index{ 0 };

	for (int i{ 0 }; i < k; i++) {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			arr[a - 1]++;
		}
		else {
			for (int j{ a - 1 }; j < b; j++) {
				arr[j]++;
			}
		}
	}

	for (int i{ 0 }; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			max_index = i;
		}
	}
	cout << max ;
}