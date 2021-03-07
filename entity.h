#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
    public:
        // Getters:
        char getSprite() { return m_sprite; }
        std::string getName() { return m_name; }

        // Setters:
        void setSprite(char p_sprite) { m_sprite = p_sprite; }
        void setName(std::string p_name) { m_name = p_name; }

    private:
        char m_sprite;
        std::string m_name;
};

#endif