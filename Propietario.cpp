//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

Propietario::Propietario(std::string nombre){
    this-> nombre = nombre;
}

void Propietario::setID(string ID){
    docIdentidad = ID;
}

void Propietario::setAge(int age){
    edad = age;
}

string Propietario::mostrarInfo(){
    string info;
    info += "Nombre: " + nombre + "\n";
    info += "Documento de identidad: " + docIdentidad + "\n";
    info += "Edad: " + std::to_string(edad) + "\n";
    return info;
}