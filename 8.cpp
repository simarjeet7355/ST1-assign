#include<iostream>
using namespace std;
class sample{
    public:
    int result(int n) {
    int sum = 0;
        for (int i = 1; i <= n; i++) {
        sum += i*(i+1)/2;
        }
        return sum;
    }
};
int main(){
    sample obj;
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"Sum of series is: "<<obj.result(n);
    return 0;
}
