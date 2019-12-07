#include<iostream>
using namespace std;

template<class cls>
class Resolution {


private:
    cls height;
    cls width;

public:
    Resolution(cls W, cls H) {
        height = H;
        width = W;
    }

    void DisplayRes() {
        cout << "The resolution of this media is: " << width << " x " << height << endl;
    }

};