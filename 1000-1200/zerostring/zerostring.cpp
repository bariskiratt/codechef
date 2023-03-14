#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,zeroCount = 0,oneCount = 0;
	    cin >> n;
	    string s{};
	    cin >> s;
	    for (auto el:s){
	        if(el == '0') zeroCount += 1;
	        else oneCount += 1;
	    }
	    if(oneCount > zeroCount && zeroCount != 0) cout << zeroCount + 1 << endl;
	    else if(oneCount > zeroCount && zeroCount == 0) cout << 1 << endl;
	    else if(zeroCount > oneCount && oneCount != 0) cout << oneCount << endl;
	    else if(zeroCount > oneCount && oneCount == 0) cout << 0 << endl;
	    else if(zeroCount == oneCount) cout << oneCount << endl;
    	    
	}
	return 0;
}
