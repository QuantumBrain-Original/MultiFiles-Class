#include "sCounter.h"

void Counter::add()
{
    digit_counter++;
}

void Counter::subtract()
{
    digit_counter--;
}

int Counter::get_value()
{
    return digit_counter;
}

Counter::Counter() : digit_counter(1) {};

Counter::Counter(int a) : digit_counter(a) {};
