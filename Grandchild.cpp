#include "Grandchild.hpp"

Grandchild::Grandchild() {
    std::cout << "Enter home city: " << std::endl;
    home_city = correct_input<std::string>();
}


void Grandchild::print() {
    std::cout << "Name: " << full_name << std::endl;
    std::cout << "Birthday" << birth_date << std::endl;
    std::cout << "Home city: " << home_city << std::endl;
    std::cout << "Parent data: "<< std::endl;
    parent->print();
}