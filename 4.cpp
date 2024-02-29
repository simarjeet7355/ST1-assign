#include<iostream>
#include<string>
using namespace std;
class calculator{
    public:
    int compute(int p, int q){
        return p + q;
    }

    double compute(int p , float q){
        return p + q;
    }

    double compute(int p , double q){
        return p + q;
    }

     int compute(char p, char q){
        return int(p) + int(q);
    }

    int compute(char p, int q){
        return int(p) + q;
    }

    int compute(){
        return 0;
    }
};
int main(){
    calculator obj;
    cout<< obj.compute(5, 8) <<endl;
    cout<< obj.compute(9, 7.5) <<endl;
    cout<< obj.compute(8, 8.42) <<endl;
    cout<< obj.compute('p', 'q') <<endl;
    cout<< obj.compute('s', 1) <<endl;
    cout<< obj.compute() <<endl;
    return 0;
}