#include <iostream>
#include <string>

using namespace std;

class RacialTrait {
	private:
		string name;
		string description;
		string source;
	public:
		string getName() {
			return name;
		}

		string getDescription() {
			return description;
		}

		string getSource() {
			return source;
		}
}