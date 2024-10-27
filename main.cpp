#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;

//FONDO - FONDO - FONDO - FONDO - FONDO - FONDO - FONDO - FONDO - FONDO - FONDO - FONDO - ////////////////////////////////////////////////////
int main(){
   RenderWindow ventana(VideoMode(800, 600),"Fondo");
	
	Texture tx_fondo;
	tx_fondo.loadFromFile("fondo.jpg");
	Sprite sp_fondo;
	sp_fondo.setTexture(tx_fondo);
	
	while(ventana.isOpen()){
		ventana.clear(Color::White);
		ventana.draw(sp_fondo);
		ventana.display();
		
	}
	
	return 0;
}