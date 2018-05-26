#include <iostream>
#include <string>

using namespace std;

void testRace() {
	Race elf = new Race('data/elf.txt');
}

int main() {
	testRace();
	return 0;
}
