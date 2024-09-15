#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num{ 0 };
	char direction;
	int arr[2000]{ 0, };
	int location{ 1000 };
	for (int i{ 0 }; i <n; i++) {
		cin >> num >> direction;
		if (direction == 'R') {
			for (int j{ location }; j < location + num; j++) {
				arr[j]++;
			}
			location += num;
		}
		else if (direction == 'L') {
			for (int j{ location+1 }; j >= location - num; j--) {
				arr[j]++;
			}
			location -= num;
		}
	}
		int sum{ 0 };
		for (int i{ 0 }; i < 2000; i++) {
			if (arr[i] >= 2) {
				sum++;
			}
		}
		cout << sum;
}