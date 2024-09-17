#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[100]{ 0 };
	for (int i{ 0 }; i < n; i++) {
		cin >> arr[i];
	}
	int min = INT_MAX;
	for (int i{ 0 }; i < n; i++) {
		int sum{ 0 };
		for (int j{ 0 }; j < n; j++) {
			sum+=arr[j] * abs(i - j);
		}
		if (sum < min) {
			min = sum;
		}
	}
	cout << min;
}