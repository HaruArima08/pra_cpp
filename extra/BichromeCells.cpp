#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cells;      // マス目
    int blackCells; // 黒マスの数
    int whiteCells; // 白マスの数
    cin >> cells;
    cin >> blackCells;
    whiteCells = (cells * cells) - blackCells;
    cout << whiteCells << endl;
}