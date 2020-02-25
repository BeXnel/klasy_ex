#ifndef H_skafander
#define H_skafander
#include <string>

namespace world
{
	class Skafander
	{
	public:

		///
		///konstruktor domy�lny 
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
			///d�ugo��
			///materia�
			///waga

	};
}//world

#endif H_skafander