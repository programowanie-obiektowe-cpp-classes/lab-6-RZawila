#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm>
#include <numeric>

std::vector< char > foo(std::list< Human >& people)
{

       std::vector< char > Goo(people.size(),'n');

       std::for_each(people.begin(),people.end(),[](Human* h){h->birthday();});

       std::transform (people.begin(), people.end(), Goo.begin(),[](Human* h){if(h->isMonster()){return 'n';}else{return 'y';}});

       std::reverse(Goo.begin(), Goo.end());

       return Goo;
}
