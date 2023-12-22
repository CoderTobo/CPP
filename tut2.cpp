// WAP to comapre two string//

#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;

    std::cout << "Enter a first string:";
    std::getline(std::cin, str1);

    std::cout << "Enter a second string:";
    std::getline(std::cin, str2);

    // using compare function
    if (str1.compare(str2) == 0)
    {
        std::cout << "String are equal using compare function.\n";
    }
    else
    {
        std::cout << "String are not equal using compare function.\n";
    }

    // Using comparision operators

    if (str1 == str2)
    {
        std::cout << "String are equal using == operator.\n";
    }
    else
    {
        std::cout << "String are not equal using == operator.\n";
    }

    return 0;
}
