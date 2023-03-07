#include <iostream>

using namespace std;

class Planet {
private:
	int mass;
	int moons;
	int rings;
	char type;
	bool haslife;
public:
	Planet();
	Planet(int m, int mn, int r, char t, bool h);

	void capMoon();
	void shredMoon();
	void growLife();
	void astroid();
	void print();

};

int main() {
	Planet ert;
	Planet mers(82, 2, 0, 'r', false);
	Planet declanamo(1984, 13, 3, 'g', true);

	declanamo.growLife();
	ert.growLife();
	mers.growLife();

	declanamo.astroid();
	ert.growLife();
	mers.shredMoon();
	ert.astroid();

	ert.print();
	mers.print();
	declanamo.print();
}

Planet::Planet() {
	mass = 100;
	moons = 1;
	rings = 0;
	type = 'r';
	haslife = true;
}

Planet::Planet(int m, int mn, int r, char t, bool h) {
	mass = m;
	moons = mn;
	rings = r;
	type = t;
	haslife = h;
}

void Planet::capMoon() { moons += 1; }

void Planet::shredMoon() {
	rings += 1;
}

void Planet::growLife() { haslife = true; };
void Planet::astroid() { haslife = false; }


void Planet::print() {
	cout << mass << endl << moons << endl << rings << endl << type << endl << haslife << endl << endl << endl;
}
