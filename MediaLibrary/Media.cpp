#include "Media.h"
using namespace std;


Media::Media(string Name, string Genre, int Year) {
	this->Name = Name;
	this->Genre = Genre;
	ReleaseYear = Year;
	cout << Name << " has been added to your library" << endl;
}

Media::~Media() {
	cout << Name << " has been removed from your library" << endl;
}

void Media::pause() {
	cout << "Holding media" << endl; //in a full program this would halt the media in its 
	//current state
}

int Media::returnYear() {
	return ReleaseYear;
}

void Media::stats() {

	cout << "Name: " << Name << endl;
	cout << "Genre: " << Genre << endl;
	cout << "Released: " << ReleaseYear << endl;
}
