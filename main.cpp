#include <iostream>

//#define SPRING Spring
//#define SUMMER Summer
//#define AUTUMN Autumn
#define WINTER Winter
#define COUT(x) std::cout << #x
#define MAIN(x) int main() { COUT(x); }


#ifdef SPRING
    MAIN(SPRING)
#endif

#ifdef SUMMER
    MAIN(SUMMER)
#endif

#ifdef AUTUMN
    MAIN(AUTUMN)
#endif

#ifdef WINTER
    MAIN(WINTER)
#endif
