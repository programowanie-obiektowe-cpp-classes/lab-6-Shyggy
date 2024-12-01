#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::for_each(people.begin(), people.end(), [](Human& a) { a.birthday(); });
    std::transform(people.rbegin(), people.rend(), retval.begin(), [](Human& a) -> char {
        if (a.isMonster() == false) {
            return 'y';
        }
        else
            return 'n';
        });
    return retval;
}
