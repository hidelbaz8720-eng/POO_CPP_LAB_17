
#include "Config.h"
#include <fstream>
#include <string>

using namespace std;

Config::Config() {
}

string Config::getValue(const string& key,
                        const string& filename) const {

    ifstream fichier(filename);
    string ligne;

    while (getline(fichier, ligne)) {
        size_t position = ligne.find('=');

        if (position != string::npos) {
            string cle = ligne.substr(0, position);
            string valeur = ligne.substr(position + 1);

            if (cle == key) {
                return valeur;
            }
        }
    }

    return "";
}
