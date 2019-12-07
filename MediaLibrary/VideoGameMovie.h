#ifndef VIDEOGAMEMOVIE_H_
#define VIDEOGAMEMOVIE_H_
#include "VideoGame.h"
#include "Movie.h"


class VideoGame_Movie : public Movie, public VideoGame {

public:
	VideoGame_Movie(std::string, std::string, std::string, int, float, bool);
	virtual ~VideoGame_Movie();
	virtual void play();
	void stats();
};

#endif /* VIDEOGAMEMOVIE_H_ */
