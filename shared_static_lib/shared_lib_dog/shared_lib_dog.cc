#include "shared_lib_dog.h"


extern int dog_name() {
    string dog = "dog";
    cout << "dog g_name address: " << &g_name << endl;
    cout << "dog before: " << get_name() << endl;
    set_name(dog);
    cout << "dog set name: " << dog << endl;
    string name = get_name();
    cout << "dog get name: " << name << endl;
    return 0;
}
