#pragma once
using namespace std;
#include <iostream>
#include <cstring>
#include <fstream>
#include <map>
#include <math.h>
#include <vector>
#include <algorithm>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <functional>
#include <iomanip>

class FlightData {
private:
	string AirlineName; // Airline name
	string FlightNumber; // Flight number
	string Destination; // Destination 
	int Seats; // Number of Seats
	string Status; // State

public:
	FlightData() {
		AirlineName = "";
		FlightNumber = "";
		Destination = "";
		Seats = 99;
		Status = "";
	}
	~FlightData() {

	}
	//--NODE information in--
	void SetAirlineName(string name) { AirlineName = name; }
	void SetFlightNumber(string number) { FlightNumber = number; }
	void SetDestination(string location) { Destination = location; }
	void SetNumberofSeats(int remain_seats) { Seats = remain_seats; }
	void SetStatus(string state) { Status = state; }
	void SetSeatsDec() { Seats--; }

	string GetAirlineName() { return AirlineName; }
	string GetFlightNumber() { return FlightNumber; }
	string GetDestination() { return Destination; }
	int GetNumberofSeats() { return Seats; }
	string GetStatus() { return Status; }
};