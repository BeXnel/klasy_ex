#include "Skafander.h"
#include <string>
using namespace std;

    //konstruktor
    Skafander::Skafander() :
        m_colour{ "white" },
        m_material{ "plastic" },
        m_size{ "S" },
        m_weight{ 8 },//kilograms
        m_length{ 60 },//centimeters
        m_width{ 50 },//centimeters
        m_purpouse{ "chemical" }
    {

    }

    //destruktor
    Skafander::~Skafander()
    {
        m_colour = { 0 };
        m_material = { 0 };
        m_size = { 0 };
        m_weight = { 0 };//kilograms
        m_length = { 0 };//centimeters
        m_width = { 0 };//centimeters 
        m_purpouse = { 0 };
    }

    //Metoda ustawia kolor skafandra
    void Skafander::setColour(string colour)
    {
        m_colour = colour;
    }

    //Metoda ustawia rozmiar skafandra
    void Skafander::setSize(char size)
    {
        m_size = size;
    }

    //Metoda ustawia materiał, z jakiego jest wykonany skafander
    void Skafander::setMaterial(string material)
    {
        m_material = material;
    }

    //Metoda ustawia przeznaczenie skafandra
    void Skafander::setPurpouse(string purpouse)
    {
        m_purpouse = purpouse;
    }

    //Metoda ustawia szerokosc skafandra
    void Skafander::setWidth(float width)
    {
        m_width = width;
    }

    //Metoda ustawia dlugosc skafandra
    void Skafander::setLength(float length)
    {
        m_length = length;
    }

    //Metoda ustawia wage skafandra
    void Skafander::setWeight(float weight)
    {
        m_weight = weight;
    }
