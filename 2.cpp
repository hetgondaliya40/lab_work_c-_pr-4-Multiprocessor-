#include <iostream>
using namespace std;


class Distance {
private:
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }

    void display() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    Distance operator+(Distance A) {
        int totalFeet = feet + A.feet;
        int totalInches = inches + A.inches;

        if (totalInches >= 12) {
            totalFeet += totalInches / 12;
            totalInches %= 12;
        }

        return Distance(totalFeet, totalInches);
    }
};

int main() {
    int feet1, inches1, feet2, inches2;

    std::cout << "Enter distance 1 (feet): ";
    std::cin >> feet1;

    std::cout << "Enter distance 1 (inches): ";
    std::cin >> inches1;

    std::cout << "Enter distance 2 (feet): ";
    std::cin >> feet2;

    std::cout << "Enter distance 2 (inches): ";
    std::cin >> inches2;

    Distance distance1(feet1, inches1);
    Distance distance2(feet2, inches2);

    Distance totalDistance = distance1 + distance2;

    std::cout << "Distance 1: ";
    distance1.display();

    std::cout << "Distance 2: ";
    distance2.display();

    std::cout << "Total Distance: ";
    totalDistance.display();

    return 0;
}
