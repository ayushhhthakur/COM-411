#include <iostream>
using namespace std;

class Num {
private:
    int value;
public:
    Num(int val) {
        value = val;
    }

    int gVal() const {
        return value;
    }

    bool operator>=(const Num& other) const {
        return value >= other.value;
    }

    bool operator==(const Num& other) const {
        return value == other.value;
    }

    Num& operator=(const Num& other) {
        value = other.value;
        return *this;
    }

    Num& operator+=(const Num& other) {
        value += other.value;
        return *this;
    }

    Num operator--(int) {
        Num temp(value);
        value--;
        return temp;
    }
};

int main() {
    int input1, input2;
    cout << "Enter the value for num1: ";
    cin >> input1;
    cout << "Enter the value for num2: ";
    cin >> input2;

    Num num1(input1);
    Num num2(input2);
    printf("\n");
    // >= operator
    if (num1 >= num2) {
        cout <<input1 << " is greater than or equal to (>=) " <<input2<< endl;
    } else {
        cout <<input1 << " is less than (<=) " << endl;
    }
    printf("\n");
    // == operator
    if (num1 == num2) {
        cout <<input1 << " is equal to (==) " <<input1<< endl;
    } else {
        cout <<input1<< " is not equal to (!=) " <<input2 << endl;
    }
    printf("\n");
    // = operator
    Num num3 = num1;
    cout << "num3 value (=): " << num3.gVal() <<input2 << endl;
    printf("\n");
    // += operator
    num1 += num2;
    cout << "num1 value after += num2 : " << num1.gVal() << endl;
    printf("\n");
    // -- operator
    Num num4 = num1--;
    cout << "num4 value: " << num4.gVal() << endl;
    cout << "\nnum4 value after decrement(--): " << num1.gVal() << endl;
    return 0;
}
