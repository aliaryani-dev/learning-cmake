#include "my_lib.h"
#include "config.hpp"
#include <print>
using namespace std;
int main() {
    print_hello();
    println("Project name: {}",project_name);
    println("Version : {}", project_version);

    return 0;
}
