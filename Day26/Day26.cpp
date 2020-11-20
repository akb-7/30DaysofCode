#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int actual_date,actual_month,actual_year;
    int return_date,return_month,return_year;
    int result;
    cin>>return_date>>return_month>>return_year;
    cin>>actual_date>>actual_month>>actual_year;
    if (return_year-actual_year>0){
        result = 10000;
    }
    else if(return_month-actual_month>0 && actual_year==return_year){
        result = 500 * (return_month-actual_month);
    }
    else if(return_date-actual_date>0 && actual_month==return_month && actual_year==return_year){
        result = 15 * (return_date - actual_date);
    }
    else{
        result = 0;
    }
    cout<<result<<endl;
    return 0;
}
