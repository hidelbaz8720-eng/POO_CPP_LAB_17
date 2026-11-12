
#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    Logger();

public:
    // Empêcher la copie
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    // Obtenir l'instance unique
    static Logger& getInstance();

    // Enregistrer un message
    void log(const std::string& message);
};

#endif
