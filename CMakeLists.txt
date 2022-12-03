cmake_minimum_required(VERSION 3.21)
project(fips-hello-dep3)

# include the fips main cmake file
get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

include_directories(src)

fips_setup()
add_subdirectory(src/dep3)
add_subdirectory(src/test)
