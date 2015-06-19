#include <cstdlib>
#include "genMino.h"
#include <iostream>
#include <new>
#include <ctime>
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_T 3
#define MINO_O 4
using namespace std;

Mino *ptr[50];
int j=0;

void NewHandlerIn_gen()
{
  cerr<<"memory is insufficient.\n";
  delete[] ptr[j++];
  delete[] ptr[j++];
}

int main()
{
	set_new_handler(NewHandlerIn_gen);
	
	srandom(time(NULL));
	int mino_type;
	
	Mino *ptr[50];

	for(int i=0;i<50;i++)
	{
	  mino_type = random()% NUM_MINO;
	  switch(mino_type)
	  {
	  case 0: 
	  	ptr[i] = new MinoS[5000000]; 
	  	ptr[i]->paint();
	  	break;
	  case 1: 
	  	ptr[i] = new MinoI[5000000]; 
		ptr[i]->paint();
		break;
	  case 2: 
	  	ptr[i] = new MinoL[5000000]; 
		ptr[i]->paint();
		break;
	  case 3: 
	  	ptr[i] = new MinoT[5000000]; 
		ptr[i]->paint();
		break;
	  case 4: 
	  	ptr[i] = new MinoO[5000000]; 
		ptr[i]->paint();
		break;
	  }
	}
return 0;
}
