#include <string>
#include <vector>

void digit_product() {
    int n = 2345;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    (void)product;
}

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

extern "C" int gentle_beacon();
extern "C" void noble_marble();
extern "C" void cobalt_bridge();

int main() {
    digit_product();
    half_value();
    double_value();
    sum_evens();
    noble_marble();
    cobalt_bridge();
    return gentle_beacon();
}
