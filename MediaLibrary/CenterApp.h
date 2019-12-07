#ifndef CENTERAPP_H_
#define CENTERAPP_H_
#include "VideoGameMovie.h"
#include "TVShow.h"
#include "template.cpp"

class CenterApp {

protected:
	int VGcount = 0;

public:
	void addGame();
	void delGame();

};

#endif /* CENTERAPP_H_ */