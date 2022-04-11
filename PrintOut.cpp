//wprintf format specification

#include <iostream>
#include <string>

int main()
{
    int i = 8192;
    float  f = 1.0;
    double d = 2.0;
    unsigned int u = 1;
    std::wstring str = L"string";
    wchar_t w = 'c';
    wchar_t w_arr[128] = L"char array";
    int* p = &i;
    
    wprintf(L"%i\n", i); //integer with a sign - int
    wprintf(L"%f\n", f); //floating point number - float
    wprintf(L"%f\n", d); //floating point number - double
    wprintf(L"%u\n", u); //unsigned integer - unsigned
    wprintf(L"%s\n", str.c_str()); //character array 
    wprintf(L"%c\n", w); //character symbol 
    wprintf(L"%s\n", w_arr); //character array 
    wprintf(L"%p\n", p); //pointer
    wprintf(L"%x\n", i); //hexadecimal number
    wprintf(L"%o\n", i); //octal number
}

