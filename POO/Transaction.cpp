#include "Transaction.h"
#include <iostream>

Transaction::Transaction(int _idTransaction, double _montant, std::string _dateTransaction)
    : idTransaction(_idTransaction), montant(_montant), dateTransaction(_dateTransaction), estEffectuee(false) {}

void Transaction::effectuerTransaction() {
    try {
        // V�rifie si la transaction est d�j� effectu�e
        if (estEffectuee) {
            throw std::runtime_error("Impossible d'effectuer la transaction : elle est deja effectuee.");
        }

        // Code pour effectuer la transaction (exemple : mise � jour de l'attribut estEffectuee � true)
        estEffectuee = true;

        std::cout << "Transaction effectuee avec succes." << std::endl;
    }
    catch (const std::runtime_error& e) {
        // G�rer l'exception ici
        std::cerr << "Erreur lors de l'effectuation de la transaction : " << e.what() << std::endl;
    }
}
