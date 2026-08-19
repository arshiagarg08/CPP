#include <iostream>
using namespace std;

class person
{
    private:
        int ID;
        string name;
        int age;
        string gender;

    public:
    person()
    {
        ID=1;
        name="person 1";
        age= 18;
        gender= "NULL";
    }
    void display()
    {
        cout<<"PERSON DETAILS";
        cout<<"\nId: "<<ID;
        cout<<"\nname: "<<name;
        cout<<"\nage: "<<age;
        cout<<"\ngender: "<<gender;
    }
};

int main()
{
    person p1=person();
    p1.display();
    return 0;
}