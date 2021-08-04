#include <iostream>
#include<cmath>
using namespace std;
//质数统计
bool isCombination(int x) {
    int temp = sqrt(x);
    for (int i = 2; i < temp + 1; i++) {
        if (x%i == 0)return true;
    }
    return false;
}

int main() {
    int x;
    cout << "请输入整数待统计质数:";
    cin >> x;
    int value = 0;
    for (int i = 2; i <= x; ++i) {
        if (!isCombination(i)) { cout << i << "是质数" << endl; value++; }
    }
    cout << "质数有：" << value << "个" << endl;
    system("pause");
    return 0;
}