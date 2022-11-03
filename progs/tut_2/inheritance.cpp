#include <iostream>

using namespace std;

// Superclass
class Chef {
    public:
        void makeChicken() {
            cout << "Chef made chicken." << endl;
        }

        void makeSpecialDish() {
            cout << "Chef made BBQ" << endl;
        }
};

// Subclass
class ItalianChef : public Chef {
    public:
        void makeSpaghetti() { // is this racist?
            cout << "The Italian chef made Spaghetti." << endl;
        }

        // override
        void makeSpecialDish() {
            cout << "The Italian chef made Linguini Alfredo" << endl; // based
        }
};

int main() {
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef chefBoyardee;
    chefBoyardee.makeChicken();
    chefBoyardee.makeSpaghetti();

    chefBoyardee.makeSpecialDish();
}