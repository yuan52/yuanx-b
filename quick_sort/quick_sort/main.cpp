#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int sort(vector<int> &p,int low,int high) {
    int temp = p[low], L = low, H = high;
    bool isF = true;
    while (L < H) {
        if (isF) {
            if (p[H] < temp) {
                p[L] = p[H];
                L++;
                isF = false;
            }
            else H--;
        }
        else {
            if (p[L] > temp) {
                p[H] = p[L];
                H--;
                isF = true;
            }
            else L++;
        }
    }
    p[L] = temp;
    return L;
}
void quick_sort(vector<int>&p) {
    queue<int> Q;
    Q.push(0);
    Q.push(p.size() - 1);
    int L, R, mid;
    while (!Q.empty()) {
        L = Q.front();
        Q.pop();
        R = Q.front();
        Q.pop();
        mid=sort(p, L, R);
        if (mid - L > 1) {
            Q.push(L);
            Q.push(mid - 1);
        }
        if (R - mid > 1) {
            Q.push(mid + 1);
            Q.push(R);
        }
    }
}
void print(const vector<int>&p) {
    for (int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}
int main() {
    void(*ptr)(vector<int>&);
    vector<int>p{ 5,8,6,0,1,10,4,6,55,6,5 };
    print(p);
    ptr = quick_sort;
    ptr(p);
    print(p);
    system("pause");
    return 0;
}