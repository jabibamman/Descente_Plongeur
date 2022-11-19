#include <iostream>
#include <string>

// type condition
typedef struct Conditions {
    double profondeur, vitesse, temps;
}Conditions;


// diver struct
typedef struct Diver {
    Diver(std::string prenom, double masse, double volume, double acceleration, Conditions conditions);

    std::string prenom;
    double masse;
    double volume;
    double acceleration;
    Conditions conditions;


} Diver;

// diver constructor
Diver::Diver(std::string prenom, double masse, double volume, double acceleration, Conditions conditions) {
    this->prenom = prenom;
    this->masse = masse;
    this->volume = volume;
    this->acceleration = acceleration;
    this->conditions = conditions;
}


// display (temps, profondeur, vitesse, acceleration)
void display(Diver diver) {
    std::cout << diver.conditions.temps << ", "<< diver.conditions.profondeur << ", " << diver.conditions.vitesse << ", "<< diver.acceleration << std::endl;
}

// The diver diving
void dive(Diver diver) {
    display(diver);
}

int main() {
    Diver jacques({ "Jacques", 90.0, 0.075, 0.0, {-1.2, 0.8, 0}  });
    dive(jacques);
    return 0;
}
