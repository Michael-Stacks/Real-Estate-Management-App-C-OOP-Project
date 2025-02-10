#pragma once

#ifndef TERRAIN_H
#define TERRAIN_H

#include "BienImmobilier.h"

class Terrain : public BienImmobilier {
private:
    std::string typeTerrain;

public:
    Terrain(int _id, std::string _adresse, double _surface, std::string _statut, std::string _typeTerrain);
    void afficherDetails() override;
    void afficherDetailsSpecifiques() override; // D�claration de la m�thode red�finie
};

#endif // TERRAIN_H
