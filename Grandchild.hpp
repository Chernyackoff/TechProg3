#ifndef LAB3_GRANDCHILD_HPP
#define LAB3_GRANDCHILD_HPP
#include "Child.hpp"

class Grandchild : public Child{
private:
    std::string home_city;
public:
    Grandchild();
    Grandchild(std::string name, std::string city, int day, int month, int year, Parent* p);
    ~Grandchild() = default;
    void print(std::ostream &out) final;

};

#endif //LAB3_GRANDCHILD_HPP
