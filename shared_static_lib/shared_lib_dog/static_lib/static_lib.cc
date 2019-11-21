#include <string>
#include <mutex>
#include <iostream>

using namespace std;

string g_name = "dot";

mutex g_name_mutex;

void set_name(string name) {
    lock_guard<mutex> lk(g_name_mutex);
    cout << "[dog] test_var address:" << &g_name_mutex << endl;
    g_name = name;
}

string get_name() {
    lock_guard<mutex> lk(g_name_mutex);
    return g_name;
}
