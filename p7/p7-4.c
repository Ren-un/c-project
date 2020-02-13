# include <stdio.h>
unsigned set(unsigned x, int pos)
{
    unsigned mask = (1u << pos);
    x = (mask | x);
    return x;
}
unsigned reset(unsigned x, int pos) {
    unsigned mask = 1u;
    if (x & (1u<<pos))
        return (x ^ (1u << pos));
    else
        return x;
}
unsigned inverse(unsigned x, int pos) {
    unsigned mask = 1u << pos;
    x = (x ^ mask);
    return x;
}