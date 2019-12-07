#include "Movie.h"
using namespace std;

int Movie::MovieCount = 0;

Movie::Movie(string Name, string Genre, int Year, float Runtime) : Media(Name, Genre, Year) {
	this->Runtime = Runtime;
	MovieCount++;

	//cout << "The Movie " << Name << " has been added to your library" << endl;
}

Movie::Movie(string Name, string Genre, int Year) : Media(Name, Genre, Year) {
	// TODO Auto-generated constructor stub
	this->Runtime = 0;
	MovieCount++;
	//cout << "The Movie " << Name << " has been added to your library" << endl;
}

Movie::~Movie() {
	MovieCount--;
	//cout << "The Movie " << Name << " has been removed from your library" << endl;
}

void Movie::play() {
	cout << "Playing the movie " << Name << endl;
}

void Movie::stats() {
	Media::stats();
	cout << "Runtime: " << Runtime << "\n" << endl;
}

int Movie::returnintruntime() {
	return static_cast<int>(Runtime);
}

int Movie::returnMoviecount() {
	return MovieCount;
}

int Movie::returnYear() {
	return Media::returnYear();
}


bool Movie::operator > (const Movie& muvi) {
	return (Runtime > muvi.Runtime);
}


bool Movie::operator == (const Movie& a) { //tests if movies are the same based on name and            							//runtime
	if ((Name == a.Name) && (Runtime == a.Runtime))return true;
	return false;
}

Movie Movie::operator + (Movie a) {	//adds two movies into a bundle with new name and runtime
	string newname = Name + " " + a.Name + " Bundle";
	float newruntime = Runtime + a.Runtime;
	return Movie(newname, Genre, ReleaseYear, newruntime); //note: uses Genre and //release year of first movie
}

