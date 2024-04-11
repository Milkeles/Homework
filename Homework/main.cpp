#include <iostream>
#include <vector>
#include <memory>
#include "Participant.h"
#include "UniStudent.h"
#include "HsStudent.h"
using namespace std;

int main() {
	vector <unique_ptr<CParticipant>> participants;
	CUniStudent stud1("Ivan Ivanov", "3407250547", 25, "University of Ruse", "Software Engineering", "236201");
	CHsStudent stud2("Petur Petrov", "9908047209", 200, "MG \"Baba Tonka\"", 8);

	participants.push_back(std::make_unique<CParticipant>(stud1));
	participants.push_back(std::make_unique<CParticipant>(stud2));

	participants[0]->display();
	participants[1]->display();

	return 0;
}