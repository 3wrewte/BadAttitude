#include"block.h"
Block::Block() {}
Block::Block(const char* n, const char* imagename) {
	name = n;
	direction = 0;
	image=IMG_LoadPNG_RW( (SDL_RWFromFile(imagename, "rb")));
}
void Block::Setdirection(char d) {
	direction = d;
}
void Block::Setimage(char* imagename) {
	image=IMG_LoadPNG_RW( (SDL_RWFromFile(imagename, "rb")));
}
void Block::Setname(char* n) {
	name = n;
}
char Block::Getdirection() {
	return direction;
}
SDL_Surface* Block::Getimage() {
	return image;
}
const char* Block::Getname() {
	return name;
}
