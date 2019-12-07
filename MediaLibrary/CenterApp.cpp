#include "CenterApp.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void correctdeveloper(VideoGame &VG, std::string dev){ //this is used to correct the variable developer in VideoGame
	VG.developer = dev;									//VG.developer is //private but this is a friend function giving it access
}

void printName(VideoGame& VG){
	cout << VG.returnname() << endl;
}

void printArray(VideoGame* vgptr, int &length){
	int max=length; //this is just so I can change length around
	for(int length=0; length<max; length++){
		(vgptr+length)->stats(); //This will display FF, then FF2, then FF15
	}
	length++; //just to change length to test if constant changed
	length++;
}




int main() {

    {	//to test static class
    	Movie* SA = new Movie("Spirited Away", "Childrens", 2003, 1.3); //adds film
    	cout << SA->returnMoviecount() << endl;	//should output 1 film
    	Movie* SA2 = new Movie("Spirited Away2", "Childrens", 2003, 1.3); //adds another film
    	cout << SA->returnMoviecount() << endl;	//should show two films (will give the same for both SA or SA2
    	delete SA;	//deletes first film
    	cout << SA2->returnMoviecount() << endl; //should show one film

    }


	Movie SW ("Star Wars", "Sci-Fi", 1977, 1.30);
	Movie SWNewHope  ("Star Wars", "Sci-Fi", 1977, 1.30);
	Movie SWPhantomMenace ("Star Wars Phantom Menace", "Sci-Fi", 1999, 1.66);

	cout << "\nSW and SWNewHope are the same: " << (SW==SWNewHope) << "\n" << endl;			//tests if //these movies are the same
	cout << "\nSW and SWPhantomMenace are the same: " << (SW==SWPhantomMenace) << "\n" << endl;//tests if these //movies are the same

	Movie SWBundle = SW + SWPhantomMenace; //adds star wars and phantom menace into a bundle
	SWBundle.stats();						//prints the stats of this new film

	VideoGame FF = VideoGame("Final Fantasy", "Fantasy", "Square", 1987, false);
	FF.play();//increments playtime
	FF.play();
	FF.play();

	FF.stats();//prints stats
	--FF;		//rests save(playtime)
	FF.stats();//prints stats

	cout << "\n\n\n\n\n\n" << endl; //this is too split up my output without deleting the above as it was getting //very messy.


	VideoGame* Gptr;

	Gptr = new VideoGame[3]{		//creates a pointer to an array of Videogames
	FF,								//defines the elements within the array
	VideoGame("Final Fantasy 2", "Fantasy", "Square Enix", 1988, false),
	VideoGame("Final Fantasy 15", "Fantasy Sci-Fi", "Square Enix", 2017, true)
	};
	const int length = 3; //length is constant
	printArray(Gptr, *const_cast<int*>(&length)); //length is passed to print function by refrence where it is //changed
	cout << length << endl; //length is still three regardless of what the function did to the casted length

	delete [] Gptr;		//deletes the entire array (had i changed the value of Gptr by incrementing this would //not work)

	cout << "\n\n\n\n\n\n" << endl; //this is too split up my output without deleting the above as it was getting //very messy.


	cout << SW.returnintruntime() << "\n" << endl; //prints out the runtime of SW as an int

	Media *mdptr = new Movie("Jurassic Park", "Monster", 1993, 1.05); //media pointer to a movie

    Movie *mvptr = dynamic_cast<Movie*>(mdptr);	//casts media pointer to a movie pointer
    mvptr->stats();

    Movie* a = new Movie("La La Land", "Musical", 2017, 1.3);
    a->stats();
    long addr = reinterpret_cast<long>(a); //pointer to movie object is cast into a long
    cout << addr << endl;
    //addr->stats();   this no longer works
    Movie* cstback = reinterpret_cast<Movie*>(addr); //cast back into a movie pointer
    cstback->stats();	//prints stats correctly


    VideoGame *H = new VideoGame_Movie("Halo", "Shooter", "Bungie", 2001, 1.4, true);
    H->stats();

    TVShow fr = TVShow("Friends", 12, 7);
    cout << "\nThis is friends epsiode: " << fr.episode << endl;



   Resolution<int> HD = Resolution<int>(1920, 1080);
   HD.DisplayRes();

   Resolution<long> FourK = Resolution<long>(3840l, 2160l);
   FourK.DisplayRes();

   Resolution<float> ThreeD = Resolution<float>(959.5, 1080);
   ThreeD.DisplayRes();

   vector<Movie> vectmv;
   vectmv.push_back(SW);	//adds star wars to vector
   vectmv.push_back(SWPhantomMenace); // adds phantom menace to vector
   vectmv.push_back(Movie("LaLaLand","Musical",2017,1.7)); // adds lala land to vector

   for(int j=0; j<3; j++){
	   vectmv.at(j).stats();
   }

   //sort(vectmv.begin(), vectmv.end(), greater<Movie>());


}