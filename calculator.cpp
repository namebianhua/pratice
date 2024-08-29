#include <iostream>

#include "calculator.h"

Calculator::Calculator()
{
    _val1 = 0;
    _val2 = 0;
    _result = 0;
}

void Calculator::add()
{
    _result = _val1 + _val2;
}

void Calculator::sub()
{
    _result = _val1 - _val2;
}

void Calculator::muti()
{
    _result = _val1 * _val2;
}

void Calculator::divi()
{
    if( _val2 == 0)
    {
        std::cout <<"div2 can not to be 0,please input again" << std::endl;
        return;
    }
    _result = _val1 / _val2;
}

void Calculator::explain(const std::string& line)
{
    bool flag = 0;
    char ope;
    for (char c : line)
    {
        if ( !(c > '0' && c < '9'))
        {
            if (c == ' ') 
            {
                continue;
            }
            else
            {
                ope = c;
            }
            flag = 1;
        } 
        else 
        {
            if(!flag)
            {
                _val1 = _val1 * 10 + (c - '0');
            }
            else
            {
                _val2 = _val2 * 10 + (c - '0');
            }
        }
    }
    switch (ope)
    {
        case '+': add(); break;
        case '-': sub(); break;
        case 'x': muti(); break;
        case '%': divi(); break;
        default: break;
    }
}

void Calculator::show () const
{
    std::cout << _result << std::endl;
}