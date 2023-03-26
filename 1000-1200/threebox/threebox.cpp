#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int arr[3] = {a,b,c};
	    std::sort(arr,arr + 3);
	    int neededBags{1}, currentBag{};
	    for (auto x:arr){
	        if (currentBag + x <= d ){
	            currentBag += x;
	        }
	        else if(currentBag + x > d ){
	            currentBag = x;
	            neededBags += 1;
	        }
	    }
	    cout << neededBags << endl;
	    
	    
	}
	return 0;
}
