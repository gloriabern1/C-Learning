// CppScratch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Vehicle {
	int wheels;

	Vehicle() {
		cout << "Vehicle created!" << endl;
	}

	Vehicle(int num) {

	}

	Vehicle(Vehicle &vehicle) {

	}

	 ~Vehicle() {
		cout << "Vehicle destroyed!!" << endl;
	}

	virtual void PrintVehicle() {
		cout << "This is a vehicle" << endl;
	}
};

struct Car : Vehicle {
	Car() {
		cout << "Car created!" << endl;
	}

	~Car() {
		cout << "Car destroyed!!" << endl;
	}

	void PrintVehicle() override {
		cout << "This is a car" << endl;
	}
};

struct Truck : Vehicle {
	Truck() {
		cout << "Car created!" << endl;
	}

	~Truck() {
		cout << "Car destroyed!!" << endl;
	}

	void PrintVehicle() override {
		cout << "This is a truck" << endl;
	}
};

struct SmartVehicle {
	Vehicle* vehicle= nullptr;

	~SmartVehicle() {
		cout << "Smart vehicle destroyed!" << endl;
		delete vehicle;
	}
};

SmartVehicle CreateVehicleFromFactory(int wheels) {
	SmartVehicle smartVehicle;

	switch (wheels)
	{
	case 2:
	{
		Car* car = new Car();
		smartVehicle.vehicle = car;
	}
	break;
	case 8:
	{
		Truck* truck = new Truck();
		smartVehicle.vehicle = truck;
	}
	break;
	default:
	{
		Vehicle* vehicle = new Vehicle();
		smartVehicle.vehicle = vehicle;
	}
	break;
	}

	return smartVehicle;
}

int main()
{
	//SmartVehicle smartVehicle;
	auto smartVehicle = CreateVehicleFromFactory(2);
	smartVehicle.vehicle->PrintVehicle();

	//delete smartVehicle;
}
