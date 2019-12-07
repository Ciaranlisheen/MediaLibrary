#include "VideoGameMovie.h"
using namespace std;

VideoGame_Movie::VideoGame_Movie(string name, string genre, string dev, int year, float runtime, bool ThreeD) :
	Movie(name, genre, year, runtime), VideoGame(name, genre, dev, year, ThreeD) {


}

VideoGame_Movie::~VideoGame_Movie() {
	// TODO Auto-generated destructor stub
}

void VideoGame_Movie::play() {
	if (ThreeDimensional) cout << "Playing 3D movie for " << Runtime << " hours" << endl;
	else cout << "Playing 2D movie for " << Runtime << " hours" << endl;

}

void VideoGame_Movie::stats() {
	cout << "This is a VGMovie" << endl;
}