#include <iostream>
#include <string>
#include <limits>
#include <vector>

void exercise_1_2();
void exercise_3_4();
void exercise_5();

struct CandyBar 
{

    CandyBar(std::string name, double weight, int16_t calories)
        : nameCandy{name}, weightCandy{weight}, kkal{calories} {}

    std::string nameCandy;
    double weightCandy {};
    int16_t kkal {};

};

int main()
{
    //exercise_1_2();
    //exercise_3_4();
    exercise_5();
}


void exercise_1_2()
{
    std::cout << "What is your first name? ";

    std::string firstName;
    std::getline(std::cin, firstName);

    std::cout << "What is your last name? ";
    std::string lastName;
    std::getline(std::cin, lastName);

    std::cout << "What letter grade do you deserve? ";
    char letterDeserve;
    std::cin >> letterDeserve;

    std::cout << "What is your age? ";
    int age;
    std::cin >> age;

    std::cout << "Name: " << lastName << ", " << firstName << std::endl;
    std::cout << "Grade: " << char(letterDeserve + 1) << std::endl;
    std::cout << "Age: " << age;

}

void exercise_3_4()
{
    return;

    std::cout << "Enter your first name: ";

    std::string firstName;
    std::cin >> firstName;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter your last name: ";

    std::string lastName;
    std::cin >> lastName;

    std::cout << "Here's the information in a single string: " << lastName << ", " << firstName;
    
}

void exercise_5()
{
    std::vector<CandyBar> vectorCandy
    {
        {"Mocha Munch", 2.3, 157},
        {"Munch Munch", 1.3, 257}   
    };
    

    std::cout << "Name candy: " << vectorCandy[0].nameCandy 
        << ", weight: " << vectorCandy[0].weightCandy 
        << ", kkal: " << vectorCandy[0].kkal << std::endl
        << "Name candy: " << vectorCandy[1].nameCandy 
        << ", weight: " << vectorCandy[1].weightCandy 
        << ", kkal: " << vectorCandy[1].kkal;   
    
}

