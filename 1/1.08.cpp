#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p; // パターン
    cin >> p;

    // パターン1
    if (p == 1)
    {
        int price; // 値段
        int N;     // 個数
        cin >> price;
        cin >> N;
        cout << N * price << "円" << endl;
    }

    // パターン2
    if (p == 2)
    {
        string text;
        int price; // 値段
        int N;     // 個数
        cin >> text;
        cin >> price;
        cin >> N;
        cout << text << "!" << endl;
        cout << N * price << "円" << endl;
    }
}
