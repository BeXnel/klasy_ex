#ifndef H_skafander
#define H_skafander
#include <string>

namespace world
{
	class Skafander
	{
	public:

		///
		///konstruktor domyœlny 
		///
		Skafander();

		///
		///Konstruktor parametryczny
		///
		///@param weight- nadana waga
		///
		Skafander(float weight);

		///
		///destruktor 
		///
		~Skafander();

	private:

		float m_weight;
		char  m_size;
		char  m_kolor;
		float m_length;
		float m_width;
		char  m_purpose;


		//kolor
			///d³ugoœæ
			///materia³
			///waga

	};
}//world

#endif H_skafander