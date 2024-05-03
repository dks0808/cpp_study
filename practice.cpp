#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate_passwords(vector<char>& letters, int N, int idx, string password) {
    // 기저 사례: 비밀번호의 길이가 N에 도달하면 출력
    if (password.length() == N) {
        cout << password << endl;
        return;
    }

    // 현재 인덱스부터 letters의 끝까지 순회하면서 비밀번호 생성
    for (int i = idx; i < letters.size(); ++i) {
        // 현재 문자를 비밀번호에 추가
        string new_password = password + letters[i];
        // 다음 문자를 포함하여 재귀 호출
        generate_passwords(letters, N, i + 1, new_password);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<char> letters(M);
    for (int i = 0; i < M; ++i) {
        cin >> letters[i];
    }

    // 알파벳 순으로 정렬
    sort(letters.begin(), letters.end());

    // 비밀번호 생성
    generate_passwords(letters, N, 0, "");

    return 0;
}
