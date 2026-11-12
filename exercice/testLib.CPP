
#include <iostream>
#include "Logger.h"
#include "Config.h"

using namespace std;

int main() {

    // Utilisation de Logger
    Logger::getInstance().log("Demarrage du programme");

    // Utilisation de Config
    Config config;

    string nom = config.getValue("nom", "config.txt");
    string langage = config.getValue("langage", "config.txt");
    string version = config.getValue("version", "config.txt");

    cout << "\n===== Configuration =====" << endl;

    cout << "Nom : " << nom << endl;
    cout << "Langage : " << langage << endl;
    cout << "Version : " << version << endl;

    Logger::getInstance().log("Fin du programme");

    return 0;
}
