#include "Fuente.h"

Fuente::Fuente()
{
	TTF_Init();
}

Fuente::~Fuente()
{
}

void Fuente::load(std::string nombreArch, int tama�o) {
	pFont = TTF_OpenFont(nombreArch.c_str(), tama�o);
}

void Fuente::close() {
	TTF_CloseFont(pFont);
	TTF_Quit();
}

SDL_Surface* Fuente::textSolid(std::string texto, SDL_Color color) {
	return TTF_RenderText_Solid(pFont, texto.c_str(), color);
}