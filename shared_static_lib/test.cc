#include "shared_lib_cat.h"
#include "shared_lib_dog.h"
#include <thread>

using std::thread;

int main() {
    auto cat = thread(cat_name);
    auto dog = thread(dog_name);

    cat.join();
    dog.join();
    return 0;
}
