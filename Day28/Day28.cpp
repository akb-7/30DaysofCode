#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    regex exp(".+@gmail\\.com$");
    vector<string> v;
    for(int i = 0; i < n; i++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if(regex_match(emailID,exp)){

            v.push_back(firstName);

        }
    }
    sort(v.begin(),v.end()); 
    for(int i = 0;i < v.size();i++) {
        cout << v[i] << endl; 
    }

    return 0;

}
