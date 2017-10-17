/*
02-���Խṹ2 һԪ����ʽ�ĳ˷���ӷ�����

����ά���飬���չ�ʽ����������ʽ���������ˣ��Ƚ����Ŀռ䣿

�������������˵����ӣ�ֻ���һ������ʽ���ڶ��ڶ�������ʽʱ���ߴ����ռ�ʡһЩ��

���ں���ʦ��������洢�����ˣ�Ϊ��ʡ�ռ仹ͦ�鷳�ģ�����һ�鲻�����ˡ�

*/

#include <iostream>
using namespace std;
#define N 2001

void cal (int a[][2], int b[][2], int power1, int power2) {
    int t[N] = { 0 }, p[N] = { 0 };
    for (int i = 0; i < power1; i++) {
        for (int j = 0; j < power2; j++) {
            int aa = a[i][0] * b[j][0];
            int pp = a[i][1] + b[j][1];
            t[pp] += aa;
        }
    }
    bool flag = false;
    for (int i = N - 1; i >= 0; i--) {
        if (t[i] != 0) {
            if (flag)
                cout << ' ';
            flag = true;
            cout << t[i] << ' ' << i;
        }
    }
    if (!flag)
        cout << "0 0";
    cout << endl;
    for (int i = 0; i < power1; i++) {
        int pp = a[i][1];
        p[pp] += a[i][0];
    }
    for (int i = 0; i < power2; i++) {
        int pp = b[i][1];
        p[pp] += b[i][0];
    }
    flag = false;
    for (int i = N - 1; i >= 0; i--) {
        if (p[i] != 0) {
            if (flag)
                cout << ' ';
            flag = true;
            cout << p[i] << ' ' << i;
        }
    }
    if (!flag)
        cout << "0 0";
    cout << endl;
}

int main() {
    int power1, power2;
    int a[N][2], b[N][2];
    cin >> power1;
    for (int i = 0; i < power1; i++)
        cin >> a[i][0] >> a[i][1];
    cin >> power2;
    for (int i = 0; i < power2; i++)
        cin >> b[i][0] >> b[i][1];
    cal (a, b, power1, power2);
    return 0;
}
