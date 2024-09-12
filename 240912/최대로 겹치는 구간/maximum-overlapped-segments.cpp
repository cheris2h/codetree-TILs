#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int offset{ 100 };
    int arr[200]{ 0 };
    for (int i{ 0 }; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int j{ a+1 }; j < b; j++) {
            arr[j + offset]++;
        }
    }
    int max{ 0 };
    for (int i{ 0 }; i < 200; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}