#include <iostream>
#include <ifstream>
using namespace std;

class Race {
	private:
		const static int NUMABILITY = 6;
		const static ifstream raceFile = ifstream();
		String name;
		int abilityMod[NUMABILITY];
		String type;
		String subtype;
		int size;
		RacialTrait traits[];

	public:
		*int getAbilityMod() {
			return abilityMod;
		}

		Race(String filename) {
			raceFile.open(filename);
			raceFile.getline(name);
			for(int i = 0; i < NUMABILITY; i++) {
				inputfile >> abilitMod[i];
			}
			inputfile >> size;

		}

}