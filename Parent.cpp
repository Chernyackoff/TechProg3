#include "Parent.hpp"

Parent::Parent() {
    std::cout << "Enter full name:" << std::endl;
    full_name = correct_input<std::string>();
    std::cout << "Enter birth date:" << std::endl;
    birth_date = correct_input<std::string>();
}

void Parent::print() {
    std::cout << "Name: " << full_name << std::endl;
}