#include<iostream>
using namespace std;
class Array_operations {
public:
    void matrix1(int first[3][3]) {
        int m = 3, n = 3;
        cout << "enter first matrix: ";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cin >> first[i][j];
        }
    }

    void matrix2(int second[3][3]) {
        int m = 3, n = 3;
        cout << "enter second matrix: ";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cin >> second[i][j];
        }
    }

    void add(int first[3][3], int second[3][3], int sum[3][3]) {
        int m = 3, n = 3;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                sum[i][j] = first[i][j] + second[i][j];
            }
        }
    }

    void display(int sum[3][3]) {
        int m = 3, n = 3;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cout << sum[i][j] << " ";
            cout << endl;
        }
    }
};
int main(){
    Array_operations ob1;
    int first[3][3], second[3][3], sum[3][3];
    ob1.matrix1(first);
    Array_operations ob2;
    ob2.matrix2(second);
    Array_operations ob3;
    ob3.add(first, second, sum);
    cout<<"Sum of two matrices is : \n";
    ob3.display(sum);
    return 0;
}
