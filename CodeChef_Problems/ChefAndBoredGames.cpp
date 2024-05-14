// problem link
// https://www.codechef.com/problems/PCJ18B

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count = 0, flag = 1;
	    for(int i = n;i >= 1;i--){
	        if(flag%2 == 1){
	            count += i*i;
	        }
	        flag++;
	    }
	    cout << count << endl;
	}
	return 0;
}
