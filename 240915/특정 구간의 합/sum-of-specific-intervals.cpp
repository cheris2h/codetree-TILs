#include<iostream>
using namespace std;

int n, m;

int arr[100]{ 0 };

int main() {
	cin >> n >> m;
	int sum[100]{ 0 };
	for (int i{ 0 }; i < n; i++) {
		cin >> arr[i];
	}
	for (int i{ 0 }; i < m; i++) {
		int a1, a2;
		cin >> a1 >> a2;
		for (int j{ arr[a1-1] }; j < arr[a2]; j++) {
			sum[i] += j;
		}
	}
	for (int i{ 0 }; i < m; i++) {
		cout << sum[i] << endl;
	}
}