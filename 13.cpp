#include <iostream>
#include <vector>
using namespace std;

class Menu_items {
public:
    virtual double getPrice() = 0;
    virtual string getName() = 0;
};

class starters : public Menu_items {
private:
    string name;
    double price;
public:
    starters(string name, double price) : name(name), price(price) {}

    double getPrice() {
        return price;
    }

    string getName() {
        return name;
    }
};

class maincourse : public Menu_items {
private:
    string name;
    double price;
public:
    maincourse(string name, double price) : name(name), price(price) {}

    double getPrice() {
        return price;
    }

    string getName() {
        return name;
    }
};

class Dessert : public Menu_items {
private:
    string name;
    double price;
public:
    Dessert(string name, double price) : name(name), price(price) {}

    double getPrice() {
        return price;
    }

    string getName() {
        return name;
    }
};

class Bill {
private:
    vector<Menu_items*> Menu_itemss;
public:
    void addMenu_items(Menu_items* Menu_items) {
        Menu_itemss.push_back(Menu_items);
    }

    double getTotalPrice() {
        double totalPrice = 0;
        for (Menu_items* Menu_items : Menu_itemss) {
            totalPrice += Menu_items->getPrice();
        }
        return totalPrice;
    }

    void printBill() {
        cout << "Bill:\n";
        for (Menu_items* Menu_items : Menu_itemss) {
            cout << Menu_items->getName() <<": "<< Menu_items->getPrice() << "\n";
        }
        cout << "Total: Rs. " << getTotalPrice() << "\n";
    }
};

int main() {
    starters starters1("Paneer Tikka", 220.00);
    maincourse maincourse1("Butter Chicken", 450.00);
    Dessert dessert1("Gulab Jamun",45.00);

    Bill bill;
    bill.addMenu_items(&starters1);
    bill.addMenu_items(&maincourse1);
    bill.addMenu_items(&dessert1);

    bill.printBill();
    return 0;
}