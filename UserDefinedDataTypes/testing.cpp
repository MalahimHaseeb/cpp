#include <iostream>
using namespace std ;

union Data {
    int i;
    float f;
    char str[20];
};


int main() {
    union Data data;
    
    data.i = 10;
    printf("data.i: %d\n", data.i);
    
    data.f = 220.5;
    printf("data.f: %.1f\n", data.f);
    
    printf("data.str: %s\n", data.str);
    
    return 0;
}
