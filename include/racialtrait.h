#include <string>

class RacialTrait {
	private:
		string name;
		string description;
		string source;
	public:
		RacialTrait(string name, string description, string source);

		string getName(void);

		string getDescription(void);

		string getSource(void);
};

class AlternateRacialTrait: public RacialTrait {
	private:
		int *idReplaceList;
		int numReplacements;
	public:
		AlternateRacialTrait(string name, string description, string source, int *idReplaceList, int numReplacements)
		: RacialTrait(name, description, source);

		int[] getReplaces(void);
};

class DefaultRacialTrait: public RacialTrait {
	private:
		int id;
	public:
		DefaultRacialTrait(string name, string description, string source, int id)
		:RacialTrait(name, description, source);

		int getid(void);
};
