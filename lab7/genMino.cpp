#include <cstdlib>
#include "genMino.h"
#include <iostream>
#include <new>
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_T 3
#define MINO_O 4
using namespace std;
//Mino *ptr;

void NewHandler()
{
  cerr<<"memory is insufficient\n";
  abort();
}

Mino *genMino()
{
	set_new_handler(NewHandler);
	int mino_type;
	Mino *ptr;

	mino_type = random()% NUM_MINO;

	switch(mino_type){
	  case MINO_S:
	    ptr = new MinoS;
	    break;
	  case MINO_I:
	    ptr = new MinoI;
	    break;
	  case MINO_L:
	    ptr = new MinoL;
	    break;
	  case MINO_T:
	    ptr = new MinoT;
	    break;
	  case MINO_O:
	    ptr = new MinoO;
	    break;
	}
	return ptr;
}
