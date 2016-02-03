//http://liris.cnrs.fr/~crocaber/3Bim/

// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "ImagePPM.h"


using namespace std;


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================

int main(int argc,char* argv[]){
	
	ImagePPM* img1 = new ImagePPM("m.ppm");
  
  ImagePPM* img2 = new ImagePPM(*img1);
  img2->desaturate();
  img2->save("desaturate.ppm");
  
  ImagePPM* img3 = new ImagePPM(*img1);
  double matrix[9] = {1, 2, 1, 2, 4, 2, 1, 2, 1};
  img3->gaussian_blur(matrix);
  img3->save("blur.ppm");

  delete img1;
  delete img2;
  delete img3;
	
	return 0;
}

