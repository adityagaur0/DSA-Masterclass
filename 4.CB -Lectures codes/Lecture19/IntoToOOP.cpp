#include <iostream>
using namespace std;
class customer{
public:
    string name;
    char gender;
    int age;
    double credits;



};
int main(){
    customer c1;
    c1.gender='M';
    c1.age=21;
    c1.credits= 85.90;
    c1.name="Aditya";

    cout<<c1.name;


}