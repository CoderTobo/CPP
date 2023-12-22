// to check a number or a string is palindrome//

#include <iostream>
#include <string>

bool isPalindrome(const std::string &str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;

}
int main(){
    std::string input ;
    std::cout<<"Enter a string:";
    std::cin>>input;

    if (isPalindrome(input)){
        std::cout<<"\" "<<input<< "\" is a palindrome.\n";
    }else{
        std::cout<<"\""<<input<<"\" is a not palindrome.\n";
    }
    return 0;
}