#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    char c;
    cin>>c;
    // switch ('+','-','*','/')
    if (c=='+')
    cout<<a+b<<endl;
    else if (c=='-')
    cout<<a-b<<endl;
    else if (c=='*')
    cout<<a*b<<endl;
    else if (c=='/')
    cout<<fixed<<setprecision(7)<<((double)a)/b<<endl;
	return 0;
}
