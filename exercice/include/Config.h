
#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config {
public:
    Config();

    std::string getValue(const std::string& key,
                         const std::string& filename) const;
};

#endif
