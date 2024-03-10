#include<iostream>
#include<cstring>
using namespace std;
class sample {
public:
    char *name;
    sample() { }
    //Dynamic constructor
    sample(char *str, int length) {
        name = new char[length+1];
        strcpy(name,str);
    }

    // Copy constructor
    sample(const sample& other) {
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
    }

    //Display
    void show(){
        cout<<name<<endl;
    }

    //Alter name
    void setName(const char *str) {
            name = new char[strlen(str)+1];
            strcpy(name,str);
    }
};
int main(int argc, char *argv[]) {
    sample user1((char *)"chitkara",8);
    
    cout<<"user1: ";
    user1.show();
    sample user2(user1);
    cout<<"After copy constructing (user2): ";
    user2.show();

    user1.setName("dummy");
    cout<<"new user1: ";
    user1.show();
    cout<<"user2 after changing user1: ";
    user2.show();

    return 0;
}
