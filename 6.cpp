#include<iostream>
using namespace std;

class sample {
public:
    int Compute(int (sample::*pf)(int)) { // receive pointer to member function
        int num;
        cout << "Enter a number: ";
        cin >> num;
        return (this->*pf)(num); // call the member function with 'this' pointer
    }

    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char *argv[]) {
    sample obj;
    int choice;
    cout << "1. Factorial\n2. Square\n3. Cube\n";
    cout << "Enter your choice: ";
    cin >> choice;

    int (sample::*pf)(int); // declare a function pointer
{
    switch (choice) {
        case 1:
            pf = &sample::findFactorial;
            break;
        case 2:
            pf = &sample::findSquare;
            break;
        case 3:
            pf = &sample::findCube;
            break;
        default:
            cout << "Invalid choice!";
            return 0;
    }

    int result = obj.Compute(pf);
    cout << "Result: " << result << endl;
}
    return 0;
}