#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int* arr{new int[n]{}};
	    for(int i{}; i < n; ++i){
	        cin >> arr[i];
	    }
        sort(arr, arr+n);
        for(int j{}; j < n; ++j){
            if(j % 2== 1 && j + 1 < n  ){
                int sub{};
                sub = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sub;
            }
        }
        for(int k{}; k < n; ++k){
            cout << arr[k] << " ";
            
        }
        cout << endl;
	    
	    
	}
	return 0;
}
