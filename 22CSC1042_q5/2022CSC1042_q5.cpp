#include <bits/stdc++.h>
#include <string.h>

using namespace std;

long i, n, a[1001][1001], x, mid,m,j;


class Employee //base class
{
protected:
    string name;
    int id;
    double salary;
public:
    void input() //Input
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter ID: "<<endl;
        cin>>id;
        cout<<"Enter salary"<<endl;
        cin>>salary;
    }
    void display() //Output
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }

};

class Manager : public Employee //derived class
{
protected:
    string department;
public:

    void input() //Input
    {
        cout<<"Enter department: "<<endl;
        cin>>department;
    }
    void display() //Output
    {
        Employee em;
        em.input(); //Call object
        cout<<"Manager detail: "<<endl;
        em.display(); //Call object
        cout<<"Department: " << department <<endl;
    }
};

class Engineer : public Employee //derived class
{
protected:
    string specialization;
public:

    void input() //Input
    {
        cout<<"Enter specialization: "<<endl;
        cin>>specialization;
    }
    void display() //Output
    {
        Employee em;
        em.input(); //Call object
        cout<<"Engineer detail: "<<endl;
        em.display(); //Call object
        cout<<"Specialization: " << specialization <<endl;
    }
};

class Salesperson : public Employee //derived class
{
protected:
    string commission;
public:

    void input() //Input
    {
        cout<<"Enter commission: "<<endl;
        cin>>commission;
    }
    void display() //Output
    {
        Employee em;
        em.input(); //Call object
        cout<<"Salesperson detail: "<<endl;
        em.display(); //Call object
        cout<<"Commission: $" << commission <<endl;
    }
};

int main()
{

    //Output
    Manager ma;
    ma.input(); //Call object
    ma.display(); //Call object
    cout<<endl;

    Engineer en;
    en.input(); //Call object
    en.display(); //Call object
    cout<<endl;

    Salesperson sa;
    sa.input(); //Call object
    sa.display(); //Call object
    cout<<endl;


    return 0;
}
