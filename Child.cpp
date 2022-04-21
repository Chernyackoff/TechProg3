#include "Child.hpp"

#include <utility>


Child::Child() {
    std::cout << "Enter parent data" << std::endl;
    parent = new Parent;
}

Child::~Child() {
    delete parent;
}

void Child::print(std::ostream &out) {
    Parent::print(out);
    out << "Birthday:\t" << birth_date << '\n';
    out << "Parent data:\t" << '\n';
    parent->print(out);
}

Child::Child(std::string name, int day, int month, int year, Parent* p) : Parent(std::move(name), day, month, year){
    parent = p;
}
