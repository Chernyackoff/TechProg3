#include "Grandchild.hpp"
#include <utility>

Grandchild::Grandchild() {
    std::cout << "Enter home city: " << std::endl;
    home_city = correct_input<std::string>();
}


void Grandchild::print(std::ostream &out) {
    Parent::print(out);
    out << "Home city:\t" << home_city << '\n';
    out << "Parent:\n";
    parent->print(out);
}

Grandchild::Grandchild(std::string name, std::string city, int day, int month, int year, Parent *p)
        : Child(std::move(name), day, month, year, p) {
    home_city = std::move(city);
}
