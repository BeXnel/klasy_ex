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
		///@param size- nadany rozmiar
		///
		///@param colour- nadany kolor
		///
		///@param lenght- nadana długość
		///
		///@param width- nadana szerokość
		///
		///@param purpose- nadanie przeznaczenia 
		///
		///@param material- nadanie materiału
		Skafander(float weight, char size, string colour, float legth, float width, string purpose, string material);

		///
		///destruktor 
		///
		~Skafander();

	private:

		float m_weight;
		char  m_size;
		string  m_colour;
		float m_length;
		float m_width;
		string  m_purpose;
		string m_material;


	};


#endif H_skafander
