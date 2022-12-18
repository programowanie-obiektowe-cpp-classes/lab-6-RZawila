#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm>
#include <numeric>

void birth = [](Human* h){h->birthday();};

char monster= [](Human* h){
    if(h->isMonster())
    {
        return 'n';
    }
    else
    {
        return 'y';
    }
}

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
       std::vector< char > Goo(people.size(),'n');
       //int  i = people.size()-1;//bo liczymy od zera.
       // inkrementacja age
       std::for_each(people.begin(),people.end(),birth);
       //sprawdzenie is monster
       std::transform (people.begin(), people.end(), Goo.begin(),monster);
       std::reverse(Goo.begin(), Goo.end());
    return Goo;
}
