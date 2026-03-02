#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
  double salary;
public:
  // properties / attributes
  string name;
  string dept;
  string subject;

  // methods / member functions
  void changeDept(string newDept) {
    dept = newDept;
  };

  // setter
  void setSalary(double s) {
    salary = s;
  }

  // getter
  double getSalary() {
    return salary;
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
  Teacher t1;
  // Teacher t2;
  // Teacher t3;
  // Teacher t4;

  t1.name = "Shradha";
  t1.subject = "C++";
  t1.dept = "Computer Science";

  cout<<t1.name<<endl;

  return 0;
}