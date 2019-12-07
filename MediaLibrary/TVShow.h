#ifndef TVSHOW_H_
#define TVSHOW_H_
#include <iostream>

struct TVShow {

	std::string Name;
	int episode;
	int season;

	TVShow(std::string, int, int);
};

#endif /* TVSHOW_H_ */