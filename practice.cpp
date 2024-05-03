#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void generate_passwords(vector<char>& letters, int N, int idx, string password) {
    // ���� ���: ��й�ȣ�� ���̰� N�� �����ϸ� ���
    if (password.length() == N) {
        cout << password << endl;
        return;
    }

    // ���� �ε������� letters�� ������ ��ȸ�ϸ鼭 ��й�ȣ ����
    for (int i = idx; i < letters.size(); ++i) {
        // ���� ���ڸ� ��й�ȣ�� �߰�
        string new_password = password + letters[i];
        // ���� ���ڸ� �����Ͽ� ��� ȣ��
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

    // ���ĺ� ������ ����
    sort(letters.begin(), letters.end());

    // ��й�ȣ ����
    generate_passwords(letters, N, 0, "");

    return 0;
}
