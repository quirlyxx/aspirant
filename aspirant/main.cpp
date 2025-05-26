#include "Aspirant.h"

int main() {
    Student s("Vanya Goging", 19, "chemistry");
    cout << "=== Studewt ===" << endl;
    s.output();

    cout << "\n=== Aspirant ===" << endl;
    Aspirant a("Olya Pchelka", 20, "Physics", "Magnitnoe pole", "prof.Newton");
    a.displayInfo();

}
