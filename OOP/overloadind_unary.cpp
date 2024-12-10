#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v){
        value=v;
    }

    Number operator-() {
        return Number(-value);
    }
    Number operator++() {
        ++value;
        return *this;
    }
    Number operator--() {  
        --value;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(10);
    n.display();
    Number n1 = -n;
    n1.display();

    ++n;
    cout << "After applying prefix ++: ";
    n.display();

    --n;
    cout << "After applying prefix --: ";
    n.display();

    return 0;
}
