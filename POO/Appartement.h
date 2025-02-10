#pragma once

#ifndef APPARTEMENT_H
#define APPARTEMENT_H

#include "BienImmobilier.h"

class Appartement : public BienImmobilier {
private:
    int nombrePieces;

public:
    Appartement(int _id, std::string _adresse, double _surface, std::string _statut, int _nombrePieces);
    void afficherDetails() override;
    void afficherDetailsSpecifiques() override; // D�claration de la m�thode red�finie
    double getSurface() const;
};



#endif // APPARTEMENT_H
