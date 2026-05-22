#include <iostream>
#include "StringLibrary.h"

int main()
{
    char str1[] = "Hello World";
    std::cout << "Original:  " << str1 << std::endl;
    str_reverse(str1);
    std::cout << "Reversed:  " << str1 << std::endl;
    std::cout << std::endl;


    char str2[] = "  Hello beautiful World  ";
    int count = str_word_count(str2);
    std::cout << "String: \"" << str2 << "\"" << std::endl;
    std::cout << "Word count: " << count << std::endl;
    std::cout << std::endl;


    char str3[] = "   Hello World   ";
    std::cout << "Before trim: \"" << str3 << "\"" << std::endl;
    str_trim(str3);
    std::cout << "After trim:  \"" << str3 << "\"" << std::endl;
    std::cout << std::endl;


    char str4[] = "hello world";
    std::cout << "Before upper: " << str4 << std::endl;
    str_to_upper(str4);
    std::cout << "After upper:  " << str4 << std::endl;

    system("pause");
    return 0;
}