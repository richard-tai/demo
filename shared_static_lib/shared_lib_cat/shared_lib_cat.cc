#include "shared_lib_cat.h"


extern int cat_name() {
    string cat = "cat";
    cout << "cat g_name address: " << &g_name << endl;
    cout << "cat before: " << get_name() << endl;
    sleep(3);
    set_name(cat);
    cout << "cat set name: " << cat << endl;
    sleep(3);
    string name = get_name();
    cout << "cat get name: " << name << endl;
    return 0;
}
