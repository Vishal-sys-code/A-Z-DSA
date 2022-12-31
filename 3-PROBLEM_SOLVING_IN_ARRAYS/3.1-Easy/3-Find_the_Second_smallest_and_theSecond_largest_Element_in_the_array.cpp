#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c
#define read4(a,b,c,d,e) cin>>a>>b>>c>>d
#define read5(a,b,c,d,e) cin>>a>>b>>c>>d>>e

void FAST_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    FAST_IO();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
#endif
    int n; read1(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    // Remove duplicate elements
    v.erase(std::unique(v.begin(), v.end()), v.end());

    // Find the maximum and minimum elements
    int max1 = *std::max_element(v.begin(), v.end());
    int min1 = *std::min_element(v.begin(), v.end());

    // Remove the maximum and minimum elements from the vector
    v.erase(std::remove(v.begin(), v.end(), max1), v.end());
    v.erase(std::remove(v.begin(), v.end(), min1), v.end());

    if (n == 1) {
        cout << "Smallest Second Element: " << -1 << endl;
        cout << "Largest  Second Element: " << -1 << endl;
    }
    else {
        // Find the maximum and minimum elements
        int max2 = *std::max_element(v.begin(), v.end());
        int min2 = *std::min_element(v.begin(), v.end());

        cout << "Smallest Second Element: " << min2 << endl;
        cout << "Largest  Second Element: " << max2 << endl;
    }
    return 0;
}