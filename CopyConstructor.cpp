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
    person(int ID, string name, int age, char gender)
    {
        this->ID=ID;
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    person(person &p)
    {
        ID=p.ID;
        name=p.name;
        age=p.age;
        gender=p.gender;
    }
    void display()
    {
        cout<<"\n\nPERSON DETAILS";
        cout<<"\nId: "<<ID;
        cout<<"\nname: "<<name;
        cout<<"\nage: "<<age;
        cout<<"\ngender: "<<gender;
    }
};

int main()
{
    person p1=person(101, "arshia", 18, 'F');
    p1.display();
    person p2=person(p1);
    p2.display();
    return 0;
}