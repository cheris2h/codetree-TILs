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
        // 시작점 a와 끝점 b도 포함하도록 수정 (a부터 b까지)
        for (int j{ a }; j < b; j++) { // a부터 b-1까지 카운트
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