#include "Manager.h"
Manager::Manager(int bpOrder) {

}

Manager::~Manager() {

}

void Manager::run(const char* command_txt) {

}

bool Manager::LOAD() {

}

bool Manager::VLOAD() {
	avl->GetVector(Print_vector);
}

bool Manager::ADD() {

}

bool Manager::SEARCH_BP(string name) {

}

bool Manager::SEARCH_BP(string start, string end) {

}

bool Manager::SEARCH_AVL(string name) {

}

bool Compare(FlightData* flight1, FlightData* flight2) {

}

bool Manager::VPRINT(string type_) {

}

void Manager::printErrorCode(int n) {
	ofstream fout;
	fout.open("log.txt", ofstream::app);
	fout << "========== ERROR ==========" <<endl;
	fout << n << endl;
	fout << "===========================" << endl << endl;
	fout.close();
}

