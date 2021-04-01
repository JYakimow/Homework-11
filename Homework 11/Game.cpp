#include "Game.hpp"
#include <stdlib.h>
#include <iostream>

Game::Game()
{
	*this->theTowers = NULL;
}

void Game::display()
{
	this->theTowers[0]->display();
	this->theTowers[1]->display();
	this->theTowers[2]->display();
}

void Game::init()
{
	Disk* d1 = new Disk(1);
	Disk* d2 = new Disk(2);
	Disk* d3 = new Disk(3);
	Tower* t1 = new Tower();
	Tower* t2 = new Tower();
	Tower* t3 = new Tower();
	this->theTowers[0] = t1;
	this->theTowers[1] = t2;
	this->theTowers[2] = t3;
	t1->push(d3);
	t1->push(d2);
	t1->push(d1);
}