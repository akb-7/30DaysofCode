using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge>0){
            Person::age = initialAge;
        }
        else{
            cout<<"Age is not valid, setting age to 0."<<endl;
            Person::age = 0;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        int age = Person::age;
        if(age<13){
            cout<<"You are young."<<;
        }
        else if(age>=13 && age<18){
            cout<<"You are teenager.";
        }
        else{
            cout<<"You are old.";
        }
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        Person::age+=1;

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
