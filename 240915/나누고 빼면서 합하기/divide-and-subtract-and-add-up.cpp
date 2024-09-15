#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int arr[100]{ 0 };
	for (int i{ 0 }; i < n; i++) {
		cin >> arr[i];
	}
	int sum{ 0 };
	while (m != 1) {
		if (m % 2 != 0) {
			sum += arr[m-1];
			m -= 1;
		}
		else {
			sum += arr[m-1];
			m /= 2;
		}
	}
	sum += arr[0];
	cout << sum;

	return 0;
}