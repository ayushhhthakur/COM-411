#include <iostream>

class Carpet {
private:
    double length;
    double width;
    double price;

public:
    Carpet(double len, double wid) {
        length = len;
        width = wid;
        double area = len * wid;
        if (area < 100) {
            price = area * 3;
        } else if (area >= 100 && area <= 200) {
            price = area * 5;
        } else {
            price = area * 7.5;
        }
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    double length, width;
    char continue_input;

    do {
        std::cout << "Enter length and width of carpet: ";
        std::cin >> length >> width;

        Carpet carpet(length, width);

        std::cout << "Carpet dimensions: " << carpet.getLength() << " x " << carpet.getWidth() << std::endl;
        std::cout << "Carpet price: " << carpet.getPrice()<< std::endl;

        std::cout << "Do you want to continue (Y/N)? ";
        std::cin >> continue_input;
    } while (continue_input == 'y' || continue_input == 'Y');

    return 0;
}
