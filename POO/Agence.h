#pragma once

#ifndef AGENCE_H
#define AGENCE_H

#include <vector>
#include <memory> // Pour std::unique_ptr
#include "BienImmobilier.h"
#include "Personne.h"

class Agence {
private:
    std::vector<std::unique_ptr<BienImmobilier>> biensImmobilier;
    std::vector<std::unique_ptr<Personne>> personnes;

public:
    // M�thodes pour g�rer les biens immobiliers
    void ajouterBienImmobilier(std::unique_ptr<BienImmobilier> bien);
    void supprimerBienImmobilier(int id);


    // M�thodes pour g�rer les personnes
    void ajouterPersonne(std::unique_ptr<Personne> personne);
    void supprimerPersonne(const std::string& nom);
};

#endif // AGENCE_H
