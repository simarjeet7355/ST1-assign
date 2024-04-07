#include<iostream>
using namespace std;
class larger_Unit{
    private:
        int feet;
    public:
        larger_Unit(int feet):feet(feet){}
        int getFeet(){
            return feet;
        }
};

class small_Unit{
    private: 
        int inches;
    public:
    small_Unit(int inches):inches(inches){}
    operator larger_Unit(){
        return larger_Unit(inches / 12);
    }
};
int main(){
    small_Unit s_obj(36);
    larger_Unit l_obj = s_obj;
    cout<<"the measurment in feet is :"<< l_obj.getFeet()<<endl;
    return 0;
}