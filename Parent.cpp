#include "Parent.hpp"

#include <utility>

Parent::Parent() {
    std::cout << "Enter full name:" << std::endl;
    full_name = correct_input<std::string>();
    std::cout << "Enter birth date:" << std::endl;
    birth_date = correct_input<std::string>();
}

void Parent::print(std::ostream &out) {
    out << "Name:\t" << full_name << '\n';
    out << "Birthday:\t" << birth_date << '\n';
}

Parent::Parent(std::string name, int day, int month, int year) {
    full_name = std::move(name);
    birth_date = std::to_string(day) + '.' + std::to_string(month) + '.' + std::to_string(year);
}
