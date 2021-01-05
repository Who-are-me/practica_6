#include "house.h"
#include "hotelroom.h"
#include "perenthome.h"
#include "abstracthome.h"

#include <iostream>
#include <string>


int main() {
    /*
    PerentHome* array_houses = new PerentHome[4];

    for (int i = 0; i < 4; i++) {
        int check;

        std::cout << "House(0) or hotel(1)?\n";
        std::cin >> check;

        if (check) {
            array_houses[i] = HotelRoom();
        }
        else {
            array_houses[i] = House();
        }
    }

    for (int i = 0; i < 4; i++) {
        std::cout << array_houses[i];
        array_houses[i].where_home();
    }
    */

    HotelRoom hr(1, 2, 3, 4, "qwerty");
    House h(1, 2, 3, 4, 5, "str");

    std::string path = "myFile.txt";

    hr.saveToFile(path);
    h.saveToFile(path);

    HotelRoom hr_test(0, 0, 0, 0, "0");
    House h_test(0, 0, 0, 0, 0, "0");

    hr_test.loadFromFile(path);
    h_test.loadFromFile(path);

    std::cout << hr_test << h_test;

    return 0;
}