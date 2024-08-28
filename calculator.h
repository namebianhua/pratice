#pragma once

#include <iostream>

class Calculator
{
    private:
        int _val1,_val2;
    public:
        Calculator();
        int add(const int val1, const int val2);
        int sub(const int val1, const int val2);
        int muti(const int val1, const int val2);
        int divi(const int val1, const int val2);
        void setValue(const int val1,const int val2){ _val1 = val1; _val2 = val2}
        void show () const;

};
