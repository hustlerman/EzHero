#include <iostream>
#include <string>
#include <cppunit>
#include "../src/race.cpp"

using namespace std;

class RaceTest : public CppUnit::TestFixture {
	private:
		Race *elf, Race *orc, Race *human;
	protected:
		void setUp() {
			elf = new Race('data/races/Elf.txt');
			dwarf = new Race('data/races/Dwarf.txt');
			halfling = new Race('data/races/Halfling.txt');
			gnome = new Race('data/races/Gnome.txt');
			human = new Race('data/races/Human.txt');
			halfelf = new Race('data/races/Half-Elf.txt');
			halforc = new Race('data/races/Half-Orc.txt');
		}

		void tearDown() {
			delete elf;
			delete dwarf;
			delete halfling;
			delete gnome;
			delete human;
			delete halfelf;
			delete halforc;
		}

		void testAbilityScores() {
			int elfAS[] = {0, 2, -2, 2, 0, 0};
			int resultElfAS[] = elf.getAbilityScores();
			int dwarfAS[] = {0, 0, 2, 0, 2, -2};
			int resultDwarfAS[] = dwarf.getAbilityScores();
			int halflingAS[] = {-2, 2, 0, 0, 0, 2};
			int resultHalflingAS[] = halfling.getAbilityScores();
			int gnomeAS[] = {-2, 0, 2, 0, 0, 2};
			int resultGnomeAS = gnome.getAbilityScores();
			int humanAS[] = {2, 0, 0, 0, 0, 0}; //Assuming 2 strength set by console for human subtype.
			int resultHumanAS[] = human.getAbilityScores();
			int halfelfAS[] = {2, 0, 0, 0, 0, 0};
			int resultHalfelfAS = halfelf.getAbilityScores();
			int halforcAS[] = {2, 0, 0, 0, 0, 0};
			int resultHalforcAS = halforc.getAbilityScores();
			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(elfAS[i] == resultElfAS[i]);
			}

			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(dwarfAS[i] == resultDwarfAS[i]);
			}

			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(halflingAS[i] == resultHalflingAS[i]);
			}

			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(gnomeAS[i] == resultGnomeAS[i]);`
			}

			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(humanAS[i] == resultHumanAS[i]);
			}

			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(halfelfAS[i] == resultHalfelfAS[i]);
			}

			for(int i = 0; i < 6; i++) {
				CPPUNIT_ASSERT(halforcAS[i] == resultHalforcAS[i]);
			}
		}

		void testTraits() {

		}
}
