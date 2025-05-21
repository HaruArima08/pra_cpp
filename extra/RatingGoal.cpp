#include <bits/stdc++.h>
using namespace std;

int main()
{
    double rating;
    double goal;
    double parformance;
    cin >> rating;
    cin >> goal;
    parformance = 2.0 * goal - rating;
    cout << parformance << endl;
}