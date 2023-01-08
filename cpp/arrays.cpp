// Access the Elements of an Array

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  return 0;
}


// Change an Array Element

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cars[0] = "Opel";
  cout << cars[0];
  return 0;
}


// Loop Through an Array

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << "\n";
  }
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}


// The foreach Loop

#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}


// Omit Elements on Declaration

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}


// Get the Size of an Array


#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  cout << sizeof(myNumbers);
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  int getArrayLength = sizeof(myNumbers) / sizeof(int);
  cout << getArrayLength;
  return 0;
}


// Loop Through an Array with sizeof()

#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}


// Access the Elements of a Multi-Dimensional Array

#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];
  return 0;
}


// Change Elements in a Multi-Dimensional Array


#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  letters[0][0] = "Z";
  
  cout << letters[0][0];
  return 0;
}


// Loop Through a Multi-Dimensional Array


#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters[i][j] << "\n";
    }
  }
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  string letters[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }
  return 0;
}

// One more example of Multi-Dimensional Arrays

#include <iostream>
using namespace std;

int main() {
  // We put "1" to indicate there is a ship.
  bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };

  // Keep track of how many hits the player has and how many turns they have played in these variables
  int hits = 0;
  int numberOfTurns = 0;

  // Allow the player to keep going until they have hit all four ships
  while (hits < 4) {
    int row, column;

    cout << "Selecting coordinates\n";

    // Ask the player for a row
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;

    // Ask the player for a column
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;

    // Check if a ship exists in those coordinates
    if (ships[row][column]) {
      // If the player hit a ship, remove it by setting the value to zero.
      ships[row][column] = 0;

      // Increase the hit counter
      hits++;

      // Tell the player that they have hit a ship and how many ships are left
      cout << "Hit! " << (4-hits) << " left.\n\n";
    } else {
      // Tell the player that they missed
      cout << "Miss\n\n";
    }

    // Count how many turns the player has taken
    numberOfTurns++;
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns";
  
  return 0;
}


