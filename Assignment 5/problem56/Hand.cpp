#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Card.h"
#include "Hand.h"

using namespace std;

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()  
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}
 
void Hand::Clear()
{
    //iterate through vector, freeing all memory on the heap
    vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        delete *iter;
        *iter = 0;
    }
    //clear vector of pointers
    m_Cards.clear();
}

int Hand::GetTotal() const
{
	int total = 0;

    for (vector<Card*>::const_iterator i = m_Cards.begin(); i < m_Cards.end(); ++i)
    {
        if((*i)->GetValue() ==  1 && total <= 10){
            total += 11;
        } else{
            total += (*i)->GetValue();
        }
    }

    return total;
}