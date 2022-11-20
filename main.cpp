#include <iostream>
#include <string>
#include <cmath>

// type condition
typedef struct Conditions {
    double profondeur, vitesse, temps;
}Conditions;

// diver struct
typedef struct Diver {
    std::string prenom;
    double masse;
    double volume;
    double acceleration;
    Conditions conditions;
} Diver;

// display (temps, profondeur, vitesse, acceleration)
void display(const Diver& diver) {
    std::cout << diver.conditions.temps << ", "<< diver.conditions.profondeur << ", " << diver.conditions.vitesse << ", "<< diver.acceleration << std::endl;
}

// The diver diving
void dive(const Diver& diver) {
    display(diver);
}

void evolve(Diver diver, Conditions conditions) {
    double g(9.81);
    double u(1-1000*(conditions.temps/diver.masse));
    double alpha(exp(conditions.temps - diver.conditions.temps));
    diver.conditions = {conditions.profondeur, (alpha*(conditions.vitesse - g*u) + g*u), conditions.temps};
}

int main() {
    Diver jacques({ "Jacques", 90.0, 0.075, 0.0, {-1.2, 0.8, 0}  });
    dive(jacques);
    return 0;
}

