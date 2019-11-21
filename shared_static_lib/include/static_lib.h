#ifndef X_INCLUDE_STATIC_LIB_H
#define X_INCLUDE_STATIC_LIB_H

#include <string>
#include <iostream>
#include <unistd.h>

using std::string;
using std::cout;
using std::endl;

extern string g_name;

extern int set_name(string name);

extern string get_name();

#endif
