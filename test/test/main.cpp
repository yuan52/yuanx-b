#include <iostream>
#include<cmath>
using namespace std;
//����ͳ��
bool isCombination(int x) {
    int temp = sqrt(x);
    for (int i = 2; i < temp + 1; i++) {
        if (x%i == 0)return true;
    }
    return false;
}

int main() {
    int x;
    cout << "������������ͳ������:";
    cin >> x;
    int value = 0;
    for (int i = 2; i <= x; ++i) {
        if (!isCombination(i)) { cout << i << "������" << endl; value++; }
    }
    cout << "�����У�" << value << "��" << endl;
    system("pause");
    return 0;
}