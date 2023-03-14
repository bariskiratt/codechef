#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i{}; i < t; ++i){
	    int N;
        cin >> N;
        int A[N], B[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
	    int ind{0};
	    for (int i{1}; i < N; ++i){
	        if (A[i] > A[ind]) {
	        ind = i;
	        }
	        else if(A[i] == A[ind] && B[i] > B[ind]){
	        ind = i;
	        }
	    }
	    
	    cout << ind+1 << endl;
	    
	    
	}
	return 0;
}
