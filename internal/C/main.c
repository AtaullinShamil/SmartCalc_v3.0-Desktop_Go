#include "calculate/calculate.h"

int main() {
	double temporary = calculate("1 + 1 + 1 + sin ( 14 mod 7 )");
    printf("%f\n",temporary);
    return 0;
}
