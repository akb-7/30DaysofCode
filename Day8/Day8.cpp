#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,long int> m;
    long int n;
    string s;
    long int num;
    cin>>n;
    for(long int i=0;i<n;i++){
        cin>>s>>num;
        m.insert({s,num});
    } 
    while(cin >> s) {
        if (m.find(s) != m.end()) {
            cout << s << "=" << m.find(s)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
