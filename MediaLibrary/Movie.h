#ifndef MOVIE_H_
#define MOVIE_H_
#include "Media.h"
#include <iostream>

class Movie : public Media {

protected:
	float Runtime;
	static int MovieCount;


public:
	Movie(std::string, std::string, int, float);
	Movie(std::string, std::string, int);
	virtual ~Movie();
	virtual void play();
	virtual bool operator == (const Movie&);
	virtual Movie operator + (Movie);
	virtual void stats();
	virtual int returnintruntime();
	virtual int returnMoviecount();
	virtual int returnYear();
	bool operator > (const Movie& str);
};

#endif /* MOVIE_H_ */
