#include <bits/stdc++.h>
using namespace std;

int sansaXor(vector<int> arr) {
    int n = arr.size();
    
    // If the size is even, return 0
    if (n % 2 == 0) return 0;

    // XOR all elements at odd indices
    int result = 0;
    for (int i = 0; i < n; i += 2) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << sansaXor(arr) << endl;
    }
    
    return 0;
}
