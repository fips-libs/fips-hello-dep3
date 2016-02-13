#include <stdio.h>

bool wrong_new_api_dep3(int major, int minor) {
    printf("This is a better implementation of dep3 (%d.%d)\n", major, minor);
    return major > 1;
}
