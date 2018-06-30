#include<iostream>
using namespace std;
#include "student1.h"
int main ()
{
  student X;
  
  X.addcourse("BSCS 403");
  X.addcourse("BSCS 405");
  X.addcourse("BSCS 407");
  X.addcourse("BSCS 409");
  X.addcourse("BSCS 411");
  X.addcourse("BSCS 413");
  X.addcourse("BSCS 414");
  X.addcourse("BSCS 415");
  X.addcourse("BSCS 416");
  X.addcourse("BSCS 417");
  
  
  student Y(X);
  
	Y.display();
  
};
