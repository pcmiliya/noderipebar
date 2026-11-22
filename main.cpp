#include <string>
#include <vector>

void count_bits() {
    unsigned int n = 0b10110101u;
    int bits = 0;
    while (n != 0) {
        bits += static_cast<int>(n & 1u);
        n >>= 1;
    }
    (void)bits;
}

void product_range() {
    int acc = 1;
    for (int i = 1; i <= 5; ++i) acc *= i;
    (void)acc;
}

void count_down() {
    int acc = 0;
    for (int i = 8; i > 0; --i) acc += i;
    (void)acc;
}

void swap_values() {
    int a = 5, b = 11;
    int tmp = a;
    a = b;
    b = tmp;
    (void)a;
    (void)b;
}

extern "C" int bright_prism();
extern "C" void clever_orbit();
extern "C" void sable_kite();
extern "C" void cobalt_boulder();

int main() {
    count_bits();
    product_range();
    count_down();
    swap_values();
    clever_orbit();
    sable_kite();
    cobalt_boulder();
    return bright_prism();
}
