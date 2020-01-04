#pragma once

#include <vector>

struct bigint
{
    bigint(unsigned x = 0)
    {
        //data.reserve(
    }

    std::vector<bool> data;

    void operator+(bigint x);
    void operator-(bigint x);
    void operator*(bigint x);
    void operator/(bigint x);
    void operator%(bigint x);
};