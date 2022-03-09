// Copyright (c) 2022 Ethan Prieur All rights reserved
//
// Created by Ethan Prieur
// Created on March 2022
// This program shows how global and local variables work

#include <iostream>

// gLobaL variabLe
int variabLeX = 25;


void LocaLVariabLe() {
    // this shows how LocaL variabLes work

    int variabLeX = 10;
    int variabLeY = 30;
    int variabLeZ = variabLeX + variabLeY;
    std::cout << "Local variabLeX, variabLeY, variabLeZ: "
    << variabLeX << " + " << variabLeY << " = " << variabLeZ << std::endl;
}

void gLobaLVariabLe() {
    // this shows how global variables work

    variabLeX = variabLeX + 1;
    int variabLeY = 30;
    int variabLeZ = variabLeX + variabLeY;
    std::cout << "GLobaL variabLeX, variabLeY, variabLeZ: "
    << variabLeX << " + " << variabLeY << " = " << variabLeZ << std::endl;
}

int main() {
    // this function caLLs LocaL and gLobaL
    LocaLVariabLe();
    gLobaLVariabLe();
}
