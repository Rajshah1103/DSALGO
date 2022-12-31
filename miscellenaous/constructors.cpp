#include<iostream>
#include<string.h>
using namespace std;

class student{
    string name;
    int roll;
    public:
        student()
        {
            name = "";
            roll = 0;
        }
        student(string name, int roll)
        {
            cout<<"The name of student is "<<" "<<name<<endl;
            cout<<"The roll no of student is "<<" "<<roll<<endl;
        }
        ~student()
        {
            cout<<"Object Destroyed"<<endl;
        }


};

int main(){
    student obj;
    student obj1("Raj",47);
    student obj2(obj1);

return 0;
}