//https://codeforces.com/problemset/problem/2132/B


//B. The Secret Number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> arr;
        int num_digits = to_string(n).length();

        long long base = 10;
        for (int i = 1; i < num_digits; ++i) {
            long long divisor = 1 + base;

            if (n % divisor == 0) {
                arr.push_back(n / divisor);
            }

            base *= 10;
        }

        cout << arr.size() << endl;
        sort(arr.begin(), arr.end());
        for (long long x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
