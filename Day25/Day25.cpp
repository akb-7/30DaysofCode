#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    cin>>test;
    while(test--){
        int val;
        cin>>val;
        for(int i=2; i<=val/i; i++){
            if(val%i==0) val=1;
        }
        if(val==1) cout<<"Not prime"<<endl;
        else cout<<"Prime"<<endl;
    }
    return 0;
}
