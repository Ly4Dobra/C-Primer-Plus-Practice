#include <iostream>
#include <string>
void exercise_1();

int main()
{
    exercise_1();
}


void exercise_1()
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
