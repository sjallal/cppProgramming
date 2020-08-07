#include <iostream>
using namespace std;
class Student;
class Student
{
    string name;
    int age;

public:
    void setStd(string s, int a)
    {
        name = s;
        age = a;
    }
    friend ostream &operator<<(ostream &, Student);
};
ostream &operator<<(ostream &dout, Student s)
{
    return dout << "Name: " << s.name << ", Age:" << s.age << endl;
}

int main()
{
    pair<int, Student> p1;
    Student s1;
    s1.setStd("Saqib", 20);
    p1 = make_pair(1, s1);
    cout << p1.first << " " << p1.second << endl;
    return 0;
}
