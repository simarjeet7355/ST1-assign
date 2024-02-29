#include <iostream>
#include <string>
using namespace std;
class User {
private:
    string name;
    int birth_year;
    int birth_day;
    int birth_month;
    double salary;

public:
//constructor initializer list
User(string n, int by, int bd, int bm, double s) : name(n), birth_year(by), 
     birth_day(bd), birth_month(bm), salary(s){}

    string getname() 
         const { return name; }
    int getBirthYear()
         const { return birth_year; }
    int getBirthDay()
         const { return birth_day; }
    int getBirthMonth()
         const { return birth_month; }
    double getSalary() 
         const { return salary; }

int compare(const User& other) const {
        if (birth_year < other.birth_year) return 1;
        if (birth_year > other.birth_year) return -1;
        if (birth_month < other.birth_month) return 1;
        if (birth_month > other.birth_month) return -1;
        if (birth_day < other.birth_day) return 1;
        if (birth_day > other.birth_day) return -1;
        return 0;
    }

void incrementSalary(double percentage) {
        salary += salary * (percentage / 100.0);
    }

void displayUserDetails() const {
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birth_year << endl;
        cout << "Birth Month: " << birth_month << endl;
        cout << "Birth Day: " << birth_day << endl;
        cout << "Salary: " << salary << endl<<endl;
    }
};
int main() {
    User user1("jaskaran", 1999, 1, 1, 50000);
    User user2("simar", 2003, 1, 1, 60000);

    user1.displayUserDetails();
    user2.displayUserDetails();
   
    int result = user1.compare(user2);
    if (result == 1) {
        cout << "User1 is elder." << endl;
    } else if (result == -1) {
        cout << "User2 is elder." << endl;
    } else {
        cout << "Both users are equal in age." << endl;
    }

    double average_sal = (user1.getSalary() + user2.getSalary()) / 2;
    cout << "Average Salary: " << average_sal << endl;

    user1.incrementSalary(5);
    user2.incrementSalary(10);

    cout << "User1 Details After Salary Increment:" << endl;
    user1.displayUserDetails();

    cout << "User2 Details After Salary Increment:" << endl;
    user2.displayUserDetails();
    return 0;
}