#include "my_lib.h"
#include "config.hpp"
#include "nlohmann/json.hpp"
#include <print>
using namespace std;
int main() {
    print_hello();
    println("Project name: {}",project_name);
    println("Version : {}", project_version);
    println("JSON Lib Version: {}.{}.{}",NLOHMANN_JSON_VERSION_MAJOR,NLOHMANN_JSON_VERSION_MINOR,NLOHMANN_JSON_VERSION_PATCH);

    return 0;
}
