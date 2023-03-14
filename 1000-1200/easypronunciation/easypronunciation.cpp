#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t{};
	cin >> t;
	for(int i{}; i < t ; ++i){
	    int n{},consCount{};
	    bool init{0};
	    cin >> n;
	    string s{};
	    cin >> s;
	    for (auto& x:s){
	        if (!(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')){
	            consCount += 1;
	            if (consCount == 4){
	                init = 1;
	            }
	        }
	        else consCount = 0 ;
	    }
	    if (init) cout << "NO" << endl;
	    else cout << "YES" << endl;  
	}
	
	
	return 0;
}
