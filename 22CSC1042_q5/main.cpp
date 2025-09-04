#include <bits/stdc++.h>
#include <string.h>

using namespace std;

long i, n, a[1001][1001], x, mid,m,j;


class Employee
{
protected:
    string name;
    int id;
    double salary;
public:
    void input()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter ID: "<<endl;
        cin>>id;
        cout<<"Enter salary"<<endl;
        cin>>salary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }

};

class Manager : public Employee
{
protected:
    string department;
public:

    void input()
    {
        cout<<"Enter department: "<<endl;
        cin>>department;
    }
    void display()
    {
        Employee em;
        em.input();
        cout<<"Manager detail: "<<endl;
        em.display();
        cout<<"Department: " << department <<endl;
    }
};

class Engineer : public Employee
{
protected:
    string specialization;
public:

    void input()
    {
        cout<<"Enter specialization: "<<endl;
        cin>>specialization;
    }
    void display()
    {
        Employee em;
        em.input();
        cout<<"Engineer detail: "<<endl;
        em.display();
        cout<<"Specialization: " << specialization <<endl;
    }
};

class Salesperson : public Employee
{
protected:
    string commission;
public:

    void input()
    {
        cout<<"Enter commission: "<<endl;
        cin>>commission;
    }
    void display()
    {
        Employee em;
        em.input();
        cout<<"Salesperson detail: "<<endl;
        em.display();
        cout<<"Commission: $" << commission <<endl;
    }
};

int main()
{

    //Output
    Manager ma;
    ma.input();
    ma.display(); //Call object
    cout<<endl;
    Engineer en;
    en.input();
    en.display();
    cout<<endl;
    Salesperson sa;
    sa.input();
    sa.display();
    cout<<endl;


    return 0;
}
