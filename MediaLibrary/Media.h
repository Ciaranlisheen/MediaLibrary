#pragma once
#ifndef MEDIA_H_
#define MEDIA_H_
#include <iostream>
#include <string>

class Media {

protected:
	std::string Name; 	//These are declared as protected as so child objects can use them
	std::string Genre; 	//These can be accessed and changed through methods of this object //and the methods of the children of this class

public:
	Media(std::string, std::string, int);//These methods are public as to allow them to be                						//ran by anyone
	virtual ~Media();//i.e. the constructer destructer and Run method can be ran from anywhere.
	virtual void play() = 0;//abstract function, all child classes must define a play function
	virtual void pause();
	virtual void stats();
	virtual int returnYear();
	int ReleaseYear;
};

#endif /* MEDIA_H_ */
