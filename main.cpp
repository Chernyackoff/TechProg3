#include "Grandchild.hpp"
#include "Vector.cpp"
#include <fstream>


void save(Vector<Parent*> v){
    if (v.size() == 0){
        std::cout<< "Nothing to save!" << std::endl;
        return;
    }
    std::ofstream file("../data.txt");
    file << v.size() << '\n';
    for (int i = 0; i < v.size(); i++){
        v[i]->print(file);
    }
}

void addParent(Vector<Parent*>& v){
    int day, month, year;
    std::cout << "Please enter day of birth:\n";
    day = correct_input<int>();
    while (day < 1 || day > 31){
        std::cout << "Violation! Enter the right day" << std::endl;
        day = correct_input<int>();
    }
    std::cout << "Please enter month of birth:\n";
    month = correct_input<int>();
    while (month < 1 || month > 12){
        std::cout << "Violation! Entre the right day" << std::endl;
        month = correct_input<int>();
    }
    std::cout << "Please enter year of birth:\n";
    year = correct_input<int>();
    while (year > 2022){
        std::cout << "Violation! Entre the right day" << std::endl;
        year = correct_input<int>();
    }
    std::cout << "Please enter full name:\n";
    std::ws(std::cin);
    std::string name;
    std::getline(std::cin, name);
    auto temp = new Parent(name, day, month, year);
    v.append(temp);
}

void addChild(Vector<Parent*>& v){
    int day, month, year;
    std::cout << "Parent data:\n";
    std::cout << "Please enter day of birth:\n";
    day = correct_input<int>();
    while (day < 1 || day > 31){
        std::cout << "Violation! Enter the right day" << std::endl;
        day = correct_input<int>();
    }
    std::cout << "Please enter month of birth:\n";
    month = correct_input<int>();
    while (month < 1 || month > 12){
        std::cout << "Violation! Entre the right day" << std::endl;
        month = correct_input<int>();
    }
    std::cout << "Please enter year of birth:\n";
    year = correct_input<int>();
    while (year > 2022){
        std::cout << "Violation! Entre the right day" << std::endl;
        year = correct_input<int>();
    }
    std::cout << "Please enter full name:\n";
    std::ws(std::cin);
    std::string name;
    std::getline(std::cin, name);
    auto p = new Parent(name, day, month, year);

    std::cout << "Child data:\n Please, enter day of birth:\n";
    day = correct_input<int>();
    while (day < 1 || day > 31){
        std::cout << "Violation! Enter the right day" << std::endl;
        day = correct_input<int>();
    }
    std::cout << "Please enter month of birth:\n";
    month = correct_input<int>();
    while (month < 1 || month > 12){
        std::cout << "Violation! Entre the right day" << std::endl;
        month = correct_input<int>();
    }
    std::cout << "Please enter year of birth:\n";
    year = correct_input<int>();
    while (year > 2022){
        std::cout << "Violation! Entre the right day" << std::endl;
        year = correct_input<int>();
    }
    std::cout << "Please enter full name:\n";
    std::ws(std::cin);
    std::getline(std::cin, name);
    auto temp = new Child(name, day, month, year, p);
    v.append(temp);
}
void addGrandchild(Vector<Parent*>& v){
    int day, month, year;
    std::cout << "Parent data:\n";
    std::cout << "Please enter day of birth:\n";
    day = correct_input<int>();
    while (day < 1 || day > 31){
        std::cout << "Violation! Enter the right day" << std::endl;
        day = correct_input<int>();
    }
    std::cout << "Please enter month of birth:\n";
    month = correct_input<int>();
    while (month < 1 || month > 12){
        std::cout << "Violation! Entre the right day" << std::endl;
        month = correct_input<int>();
    }
    std::cout << "Please enter year of birth:\n";
    year = correct_input<int>();
    while (year > 2022){
        std::cout << "Violation! Entre the right day" << std::endl;
        year = correct_input<int>();
    }
    std::cout << "Please enter full name:\n";
    std::string name;
    std::ws(std::cin);
    std::getline(std::cin, name);
    auto p = new Parent(name, day, month, year);

    std::cout << "Grandchild data:\n Please, enter day of birth:\n";
    day = correct_input<int>();
    while (day < 1 || day > 31){
        std::cout << "Violation! Enter the right day" << std::endl;
        day = correct_input<int>();
    }
    std::cout << "Please enter month of birth:\n";
    month = correct_input<int>();
    while (month < 1 || month > 12){
        std::cout << "Violation! Entre the right day" << std::endl;
        month = correct_input<int>();
    }
    std::cout << "Please enter year of birth:\n";
    year = correct_input<int>();
    while (year > 2022){
        std::cout << "Violation! Entre the right day" << std::endl;
        year = correct_input<int>();
    }
    std::cout << "Please enter full name:\n";
    std::ws(std::cin);
    std::getline(std::cin, name);
    std::string city;
    std::ws(std::cin);
    std::cout << "Please, enter home city:\n";
    std::getline(std::cin, city);
    auto temp = new Grandchild(name, city, day, month, year, p);
    v.append(temp);
}
void printCustom(Vector<Parent*>& v){
    if (v.size() == 0){
        std::cout<< "Nothing to print!" << std::endl;
        return;
    }
    std::cout << "Enter index (from 0 to " << v.size() <<"):\n";
    int i = correct_input<int>();
    while (i < -v.size() || i > v.size()){
        std::cout << "Enter correct value! Index:\n";
        i = correct_input<int>();
    }
    v[i]->print(std::cout);
}

void printAll(Vector<Parent*> v){
    if (v.size() == 0){
        std::cout<< "Nothing to print!" << std::endl;
        return;
    }
    for(int i = 0; i < v.size(); i++){
        v[i]->print(std::cout);
    }
}

int main() {
    Vector<Parent*> obj;
    int choice;
    while(true){
        std::cout<< "Choose an action:\n"
                    "1. Add Parent\n"
                    "2. Add Child\n"
                    "3. Add Grandchild\n"
                    "4. Print last item\n"
                    "5. Print some item of vector\n"
                    "6. Print all\n"
                    "7. Save to data.txt\n"
                    "8. Exit\n";
        choice = correct_input<int>();
        switch (choice) {
            case 1:
                addParent(obj);
                break;
            case 2:
                addChild(obj);
                break;
            case 3:
                addGrandchild(obj);
            case 4:
                obj[obj.size()-1]->print(std::cout);
                break;
            case 5:
                printCustom(obj);
                break;
            case 6:
                printAll(obj);
                break;
            case 7:
                save(obj);
                break;
            case 8:
                return 0;
            default:
                std::cout << "Wrong input! Try again!" << std::endl;
                break;
        }
    }
}
