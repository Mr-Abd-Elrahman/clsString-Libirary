#include <iostream>

std::string TrimLeft(std::string s1)
{
    // Take the string from left to right
    for (short i = 0; i < s1.length(); i++)
    {

        if (s1[i] != ' ')
        {
            return s1.substr(i, s1.length() - i);
        }
    }
    return "";
}

std::string TrimRight(std::string s1)
{
    for (short i = s1.length() - 1; i >= 0; i--)
    {

        if (s1[i] != ' ')
        {
            return s1.substr(0, i + 1);
        }
    }
    return "";
}
std::string Trim(std::string s1)
{
    return TrimLeft(TrimRight(s1));
}

int main()
{
    std::string s = "   Ahmed    ";

    // std::cout << "My Name is : " << TrimLeft(s) << "Hi , Ahmed" << std::endl;
    // std::cout << "My Name is : " << TrimRight(s) << "Hi , Ahmed" << std::endl;
    std::cout << "My Name is : " << s << "Hi , Ahmed" << std::endl;
    std::cout << "My Name is :" << Trim(s) << ",Hi , Ahmed" << std::endl;

    std::cin.get();
}