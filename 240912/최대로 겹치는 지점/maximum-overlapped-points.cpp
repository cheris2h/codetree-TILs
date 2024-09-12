#include<iostream>
using namespace std;

#define OFFSET 100
#define MAX 200

int checked[MAX + 1]{ 0 };  // 배열 크기를 MAX + 1로 설정

int main() {
    int n;
    cin >> n;
    int x1[MAX];
    int x2[MAX];

    // 구간 입력받기 및 처리
    for (int i{ 0 }; i < n; i++) {
        cin >> x1[i] >> x2[i];

        // i++ 대신 j++로 수정하여 구간의 값들을 처리
        for (int j{ x1[i] }; j < x2[i]; j++) {
            checked[j]++;
        }
    }

    int max{ 0 };
    int max_index{ 0 };

    // 가장 많이 체크된 구간 찾기
    for (int i{ 0 }; i <= MAX; i++) {
        if (checked[i] > max) {
            max = checked[i];
            max_index = i;
        }
    }

    // 가장 많이 체크된 구간 출력
    cout << max_index+1;
}