#pragma once

class Counter
{
    int digit_counter = 1;

public:
    void add();

    void subtract();

    int get_value();

    Counter();
    Counter(int a);
};
