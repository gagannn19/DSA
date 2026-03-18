#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
  double salary;
  
public:

// when different types of constructor present inside the class, this phenomenon is called constructor overloading. Constructor Overloading is the example of polymorphism.
 
  // non parametrized constructor
  Teacher() {
    // cout << "Hi, I am a constructor\n";
    dept = "Computer Science";
  }

  // parametrized constructor
  Teacher(string n, string s, string d, double sal) {
    name = n;
    subject = s;
    dept = d;
    salary = sal;
  } 

  // properties / attributes
  string name;
  string dept;
  string subject;

  // methods / member functions
  void changeDept(string newDept) {
    dept = newDept;
  };

  // setter
  // void setSalary(double s) {
  //   salary = s;
  // }

  // // getter
  // double getSalary() {
  //   return salary;
  // }

  void getInfo() {
    cout << "name :- " << name << endl;
    cout << "subject :- " << subject <<endl;
  }
};

class Student {
public:
  string name;
  int rollno;
  int age;

};

class Account {
private:
  double balance;
  string password;  // data hiding

public:
  string accountId;
  string username;
};

int main() {
  // Teacher t1; // constructor call (compiler calls constructor whenever we create new object)
  // Teacher t2;

  // t1.name = "Shradha";
  // t1.subject = "C++";
  // t1.dept = "Computer Science";

  // cout<<t1.name<<endl;
  // cout<<t1.dept<<endl;
  // cout<<t2.dept<<endl;

  Teacher t3("Shradha", "C++", "Computer Science", 25000);
  t3.getInfo();
  

  return 0;
}