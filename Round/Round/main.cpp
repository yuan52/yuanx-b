#include<iostream>
#include<iomanip>
using namespace std;
double MyRound(double dValue, int nPlace) {
    long long temp = dValue*pow(10, nPlace);
    double value = (double)(temp) / (long long)pow(10, nPlace);
    return value;
}
int main() {
    double num;
    int n;
    cout << "������˫���ȸ�������";
    cin >> num;
    cout << "������λ����";
    cin >> n;
    double f = MyRound(num, n);
    cout << f << endl;
    system("pause");
    return 0;
}