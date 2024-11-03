#include <iostream>
#include <string>
using namespace std ;

class DateHeure {
private:
    int jour;
    int mois;
    int annee;
    int heure;
    int minute;

public:
    // M�thode pour extraire la date et l'heure � partir d'une cha�ne
    void extraire(const std::string& dateHeure) {
        jour = std::stoi(dateHeure.substr(0, 2));      // Les 2 premiers caract�res
        mois = std::stoi(dateHeure.substr(2, 2));      // Les 2 suivants
        annee = std::stoi(dateHeure.substr(4, 4));     // Les 4 suivants
        heure = std::stoi(dateHeure.substr(8, 2));     // Les 2 suivants
        minute = std::stoi(dateHeure.substr(10, 2));   // Les 2 derniers
    }

    // M�thode pour afficher la date et l'heure
    void afficher() const {
        std::cout << "Date : " << jour << "/" << mois << "/" << annee << std::endl;
        std::cout << "Heure : " << heure << "h" << minute << std::endl;
    }
};

int main() {
    DateHeure dh;
    std::string dateHeureString = "010920091123"; // 1er septembre 2009 � 11h23

    dh.extraire(dateHeureString);
    dh.afficher();

    return 0;
}
