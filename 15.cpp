#include<iostream>
using namespace std;
class node1{
    private:
        int  data;
    public:
        node1(int x): data(x){}
        int getData(){
            return  data;
        }
};
class node2{
    private:
        int data;
    public:
        node2(int x):data(x) {}
        int getData(){
            return data;
        }
};
int sum(node1&  n, node2 &m){
    return n.getData() + m.getData();
}
int main(){
    node1 n1(5);
    node2 n2(10);
    cout << "The sum is: " << sum(n1, n2) << endl;
    return 0;
}