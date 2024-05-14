// problem link
// https://codeforces.com/problemset/problem/1915/C

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int count = 0;
        for(int i = 0;i <n;i++){
            int k;
            cin >> k;
            count += k;
        }

        long long int temp = count;

        count = sqrt(count);

        if((count * count) == temp){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
