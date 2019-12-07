#include "VideoGame.h"
using namespace std;

VideoGame::VideoGame(string Name, string Genre, int year, bool ThreeDimensional) : Media(Name, Genre, year) {
	developer = "unknown"; //if developer no developer string is passed to constructer //developer is set as unknown
	playtime = 0;
	this->ThreeDimensional = ThreeDimensional; //the objects 3d bool is set as the passed //bool


}

VideoGame::VideoGame(string Name, string Genre, string dev, int year, bool ThreeDimensional) : Media(Name, Genre, year) {
	developer = dev; //sets all elements of the object.
	playtime = 0;
	this->ThreeDimensional = ThreeDimensional;//the objects 3d bool is set as the passed //bool
}


VideoGame::VideoGame(const VideoGame& sourceGame) :Media((sourceGame.Name + " save 2"), sourceGame.Genre, sourceGame.ReleaseYear) {
	developer = sourceGame.developer;			//this copy constructor creates a //mirror of the game but for a second save so the name is changed and the playtime is reset
	ThreeDimensional = sourceGame.ThreeDimensional;	//the rest is copied exactly
	playtime = 0;
}

VideoGame::~VideoGame() {

}


void VideoGame::play() {
	if (ThreeDimensional) cout << "Rendering game in 3D" << endl;
	else cout << "Rendering game in 2D" << endl;
	playtime++;			//in a fully developed program this would track playtime based //on time opened and closed
}


void VideoGame::pause() {
	cout << "opening game menu" << endl; //in a full program this would open the ingame //menu
}

void VideoGame::stats() {
	Media::stats();
	cout << "Developer: " << developer << endl;
	if (ThreeDimensional) cout << "Game is 3d" << endl;
	else cout << "Game is 2d" << endl;
	cout << "Playtime = " << playtime << "\n\n" << endl;
}

string VideoGame::returnname() {
	return Name;
}


void VideoGame::operator --() { //deletes save data resets playtime to 0
	playtime = 0;
}