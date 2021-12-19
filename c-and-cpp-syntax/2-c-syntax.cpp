#include <iostream>
#include <string>
#include <cstring>

int main() {
    const char cStr[] = "string"; // Array that can be read as a string
    // Equivalent to {'s', 't', 'r', 'i', 'n', 'g', 0}
    const char *str_ptr = cStr; // array-to-pointer decay, C-style string
    // array is basically a pointer to the first element in the array
    // so it converts to pointer easily
    std::cout << std::size(cStr) << '\n';
//    std::cout << std::size(str_ptr) << '\n';
//    pointer doesn't know what it's pointing at, maybe it's just one char

    std::string cpp_str1 = cStr;
    std::string cpp_str2 = str_ptr;// std::string has a constructor from C-style strings
    std::cout << cpp_str1 << ' ' << cpp_str2 << '\n';

    const char *cStr2 = cpp_str1.c_str();
    std::cout << cStr2 << '\n';

    /// Size
    int size1 = std::strlen(cStr); // linear complexity
    int size2 = std::strlen(cStr2);

    /// Concatenation
    char res[size1 + size2 + 1];
    char *res_ptr = res;
    int res_len = 0;
    for (int i = 0; cStr[i]; ++i) {
        res_ptr[res_len++] = cStr[i];
    }
    for (int i = 0; cStr2[i]; ++i) {
        res_ptr[res_len++] = cStr2[i];
    }
    res_ptr[res_len] = '\0';

    std::cout << res_ptr << '\n';
}
