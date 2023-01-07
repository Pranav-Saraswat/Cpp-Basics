#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}


// String Concatenation

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName;
  return 0;
}


// Append

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}


// Numbers and Strings

// Adding Numbers and Strings

// integer

#include <iostream>
using namespace std;
 
int main () {
  int x = 10;
  int y = 20;
  int z = x + y;
  cout << z;
  return 0;
}


// now main adding

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string x = "10";
  string y = "20";
  string z = x + y;
  cout << z;
  return 0;
}


// String Length


#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length();
  return 0;
}


// String Size

#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.size();
  return 0;
}


// Access Strings


#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << myString[0];
  return 0;
}


// Now add 2nd character

#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << myString[1];
  return 0;
}


// Change String Characters


#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString;
  return 0;
}


// Strings - Special Characters


#include <iostream>
using namespace std;

int main() {
  string txt = "Hello c++ lovers";
  cout << txt;
  return 0;
}


// add \'


#include <iostream>
using namespace std;

int main() {
  string txt = "It\'s alright.";
  cout << txt;
  return 0;
}


// dobule backslah \\


#include <iostream>
using namespace std;

int main() {
  string txt = "The character \\ is called backslash.";
  cout << txt;
  return 0;
}


// new line \n

#include <iostream>
using namespace std;

int main() {
  string txt = "Hello\nWorld!";
  cout << txt;
  return 0;
}


// tab \t

#include <iostream>
using namespace std;

int main() {
  string txt = "Hello\tWorld!";
  cout << txt;
  return 0;
}


// User Input Strings


#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}


// Omitting Namespace

#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}
