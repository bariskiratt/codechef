#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v;
	    if(n % 2 == 0){
	        int avg{(1+n)/2};
	        v.push_back(avg);
	        bool isEven{1};
	        for(int j{1}; j < n ; ++j){
	            if(isEven){
	                avg = avg + j;
	                v.push_back(avg);
	                isEven = 0;
	            }
	            else{
	                avg = avg - j;
	                v.push_back(avg);
	                isEven = 1;
	            }
	        }
	        
	        
	    }
	    else{
	        int avg{(1+n)/2};
	        v.push_back(avg);
	        bool isEven{true};
	        for(int j{1}; j < n ; ++j){
	            if(isEven){
	                avg = avg - j;
	                v.push_back(avg);
	                isEven = 0;
	            }
	            else{
	                avg = avg + j;
	                v.push_back(avg);
	                isEven = 1;
	            }
	        }
	        
	    }
	    for(auto x:v){
	        cout << x << " ";
	    }
	    cout << '\n';
	   
	    
	    
	    
	}
	return 0;
}
