#include <iostream>
#include <ifstream>
#include <string>
#include <vector>
using namespace std;

class Race {
	private:
		const static int NUMABILITY = 6;
		const static ifstream raceFile = ifstream();
		string name;
		string type;
		vector<string*> subtype;
		vector<string*> languages;
		int abilityMod[NUMABILITY];
		int size;
		vector<RacialTrait*> traits;

	public:
		string getName() {
			return name;
		}

		string getType() {
			return type;
		}

		vector<string*> getSubtype() {
			return subtype;
		}

		int* getAbilityMod() {
			return abilityMod;
		}

		int size() {
			return size;
		}


		Race(string filename) {
			string temp;
			istringstream splitter;
			raceFile.open(filename);

			//Get the race name
			raceFile.getline(name, 32, '\n');

			//Get the type
			raceFile.getline(type, 32, '\n');

			//Get the line of subtypes
			splitter = istringstream(raceFile.getline(temp, 32));

			//Split the line and add them to the subtype vector
			while(getline(splitter, temp, ',')) {
				//Make a copy and append to the list
				if(!temp.isEmpty())
					subtype.push_back(string(temp));
			}
			raceFile.getline()
			for(int i = 0; i < NUMABILITY; i++) {
				raceFile >> abilitMod[i];
			}
			raceFile >> size;

		}

}
