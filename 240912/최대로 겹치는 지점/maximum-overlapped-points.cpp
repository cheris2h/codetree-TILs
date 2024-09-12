#include<iostream>
using namespace std;

#define MAX 200     // 구간 범위에 맞게 배열 크기를 넉넉히 설정

int checked[MAX + 1]{ 0 };  // 배열 크기를 MAX + 1로 설정

int main() {
    int n;
    cin >> n;
    int x1[100];  // 구간 시작값 배열
    int x2[100];  // 구간 끝값 배열

    // 구간 입력받기 및 처리
    for (int i{ 0 }; i < n; i++) {
        cin >> x1[i] >> x2[i];

        // 시작 구간 x1[i]에서 끝 구간 x2[i]까지 값을 체크
        for (int j{ x1[i] }; j <= x2[i]; j++) {
            checked[j]++;
        }
    }

    int max{ 0 };

    // 가장 많이 체크된 구간 찾기
    for (int i{ 0 }; i < MAX; i++) {
        if (checked[i] > max) {
            max = checked[i];
        }
    }

    // 가장 많이 체크된 구간 출력
    cout << max;
}