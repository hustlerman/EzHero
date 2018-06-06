#include <iostream>
#include <string>
#include <vector>
#include <"../include/racialtrait.h">

#define NUMABILITY 6

class Race {
	private:
		const static ifstream raceFile;
		string name;
		string type;
		int size;
		int abilityMod[NUMABILITY];
		vector<string*> subtype;
		vector<string*> languages;
		vector<RacialTrait*> traits;		
	public:
		string getName();
		string getType();
		vector<string*> getSubtype();
		int* getAbilityMod();
		int size();
		bool isSubtype(string s);
		Race(string filename);
}

