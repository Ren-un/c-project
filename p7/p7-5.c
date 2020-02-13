# include <stdio.h>
unsigned set_n(unsigned x, int pos, int n) {

    int i;
    for (i = 0; i < n - pos; i++) {
        unsigned mask = (1u << (pos + i));
        x = (mask | x);
    }
    return x;
}

unsigned reset_n(unsigned x, int pos, int n) {
    unsigned mask = 1u;
    int i;
    for (i = 0; i < n-pos; i++) {
        if (x & (1u<<pos+i))
            x= (x ^ (1u << pos+i));    
    }
    return x;

}
unsigned inverse_n(unsigned x, int pos, int n) {
    int i;
    unsigned mask = 1u;
    for (i = 0; i < n - pos; i++) {
        x = (x ^ (mask << pos + i));
    }
    return x;
}