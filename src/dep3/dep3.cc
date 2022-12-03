#include <stdio.h>

bool correct_old_api_dep3(int major) {
    printf("This is an old implementation %d\n", major);
    return major > 1;
}
