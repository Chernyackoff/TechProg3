#include "Child.hpp"


Child::Child() {
    parent = new Parent;
}

Child::~Child() {
    delete parent;
}

void Child::print() {
    std::cout << "Name: " << full_name << std::endl;
    std::cout << "Birthday: " << birth_date << std::endl;
    parent->print();
}