#include <string>
#include <"../include/racialtrait.h">

using namespace std;

class RacialTrait {
	private:
		string name;
		string description;
		string source;
	public:
		RacialTrait(string name, string description, string source) {
			this.name = name;
			this.description = description;
			this.source = source;
		}

		string getName(void) {
			return this.name;
		}

		string getDescription(void) {
			return this.description;
		}

		string getSource(void) {
			return this.source;
		}
};

class AlternateRacialTrait: public RacialTrait {
	private:
		int *idReplaceList;
		int numReplacements;
	public:
		AlternateRacialTrait(string name, string description, string source, int *idReplaceList, int numReplacements)
		: RacialTrait(name, description, source)	{
			this.idReplaceList = idReplaceList;
			this.numReplacements = numReplacements;
		}

		int[] getReplaces(void) {
			return this.idReplaceList;
		}
};

class DefaultRacialTrait: public RacialTrait {
	private:
		int id;
	public:
		DefaultRacialTrait(string name, string description, string source, int id)
		:RacialTrait(name, description, source) {
			this.id = id;
		}

		int getid(void) {
			return this.id;
		}

};
