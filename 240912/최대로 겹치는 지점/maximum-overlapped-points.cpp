#include<iostream>
using namespace std;

#define OFFSET 100
#define MAX 100

int checked[MAX + 1]{ 0 };

int main() {
	int n;
	cin >> n;
	int x1[MAX];
	int x2[MAX];

	for (int i{ 0 }; i < n; i++) {
		cin >> x1[i] >> x2[i];

		for (int j{ x1[i] }; j < x2[i]; j++) {
			checked[j]++;
			}
		}
	
int max{ 0 };
int max_index{ 0 };

	for (int i{ 0 }; i < MAX; i++) {
		if (checked[i] > max) {
			max = checked[i];
			max_index = i;
		}
	}
	cout << max_index+1;
}