#include <iostream>
using namespace std;

class Trial {
public:
Trial(){ cout << "Constructing an object " << endl;}
~Trial(){ cout << "Destructing an object " << endl;}
};

int main() {

try {

Trial trial1;

throw 5;

} catch(int i) {

cout << "Caught " << i << endl;
}
}
