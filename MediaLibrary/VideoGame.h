#ifndef VIDEOGAME_H_
#define VIDEOGAME_H_
#include "Media.h"
#include <iostream>

class VideoGame : Media {

private:
	std::string developer; 	//this is private and can be accessed and changed by a VideoGame object but can not be accessed
							//from anyone else including child classes
	friend void correctdeveloper(VideoGame&, std::string); //this allows developer to be //corrected by this function that is not in class VideoGame

protected:
	int playtime;
	bool ThreeDimensional;

public:
	VideoGame(std::string, std::string, std::string, int, bool);
	VideoGame(std::string, std::string, int, bool);
	VideoGame(const VideoGame& sourceGame);

	virtual ~VideoGame();
	virtual void play();
	virtual void pause();
	virtual void stats();
	virtual std::string returnname();
	virtual void operator -- ();
};

#endif /* VIDEOGAME_H_ */

