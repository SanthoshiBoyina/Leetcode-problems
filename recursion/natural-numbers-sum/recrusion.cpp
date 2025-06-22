#include <bits/stdc++.h>
using namespace std;

int sumOfNnumbers(int n) {
    if(n == 1)
        return 1;
    return n + sumOfNnumbers(n-1);
}

int main() {
    int n;
    cin >> n;

    cout << sumOfNnumbers(n);
    return 0;
}