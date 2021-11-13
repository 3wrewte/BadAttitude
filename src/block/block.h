#ifndef BLOCK_H
#define BLOCK_H 1
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
class Block {
public:
	Block();
	Block(const char* n, const char* imagename);
	void Setdirection(char d);
	void Setimage(char* imagename);
	void Setname(char* n);
	char Getdirection();
	SDL_Surface* Getimage();
	const char* Getname();
private:
	const char* name;
	char direction;//0-up,1-right,2-down,3-right
	SDL_Surface* image;
};
Block air("air", "res/air.png");
Block block("block", "res/block.png");
#endif

