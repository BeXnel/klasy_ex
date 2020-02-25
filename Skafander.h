#ifndef H_skafander
#define H_skafander
#include <string>
using namespace std;

	class Skafander
	{
	public:

		///
		///konstruktor domyślny 
		///
		Skafander();

		///
		///Konstruktor parametryczny
		///
		///@param weight- nadana waga
		///
		Skafander(float weight, char size, string colour, float legth, float width, string purpose, string material);

		///
		///Metoda ustawia przeznaczenie skafandra
		///
		///@param purpose- przeznaczenie
		void setPurpouse(string purpouse);

		///
		///Metoda ustawia material skafandra
		///
		///@param material- material
		void setMaterial(string material);

		///
		///Metoda ustawia szerokosc skafandra
		///
		///@param width- szerokosc
		void setWidth(float width);

		///
		///metoda ustawia dlugosc skafandra
		///
		///@param length- dlugosc 
		void setLength(float length);

		///
		///Metoda ustawia kolor skafandra
		///
		///@param colour- kolor
		void setColour(string colour);

		///
		///Metoda ustawia rozmiar skafandra
		///
		///@param size- rozmiar
		void setSize(char size);

		///
		///Metoda ustawia wage skafandra
		///
		///@param weight- waga
		void setWeight(float weight);

		///
		///destruktor 
		///
		~Skafander();

	private:

		float m_weight;
		string  m_size;
		string  m_colour;
		float m_length;
		float m_width;
		string m_purpouse;
		string m_material;


	};


#endif H_skafander
