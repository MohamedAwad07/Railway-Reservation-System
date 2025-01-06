#pragma once
#include<iostream>
#include<string>
#include <stack>
#include<vector>
using namespace std;

class Trip {
public:

	static vector<Trip> trip_vec;
	int train_number = 0, available_seats = 0;
	float fare = 0;
	string boarding_point, destination_point,
		departure_time, arrive_time, date_of_travel;

public:
	Trip(int train_number, float fare, int available_seats, string boarding, string dest, string dep_time, string arriv_time, string trip_d);
	/*static void add_trip();*/
	void update_trip();
	void delete_trip();
	void show_trip();
	static void display_trip_data(Trip trip);
	static vector<Trip> getAllTrips();
	static vector<Trip> getAvailableTrips(int tickets, string boarding_point, string destination);
	static Trip getNextTrip(int tickets, string boarding_point, string destination);

};

class Reservation {
public:
	static vector<Reservation> reservations;
	int ReservedTickets = 0;
	float TotalFare = 0.0;
	int train_no;
	string name;
	string BoardingPoint;
	string DestinationPoint;
	string Date_of_Travel;
	string departure_time;
	string arrive_time;

public:
	Reservation();
	Reservation(string boarding, string destination, string date, string time, string arrive, int train_no, int tickets, int totalfare);
	static void AddReservation(Reservation r);
	static void EditReservation();
	static void DisplayReservation();
	static void printReservation(Reservation r);
	static void DisplaySpecific(int);
	static void Menu();
};

class Global {
public:
	//static stack<string>pages;
	
	static long long convert_date(string date);
	static long long convert_time(string time);
	static long long current_time();
	static void welcome();
	static void bye();
	static bool Trip_Reservation_equal(Reservation t1, Trip t2);
};

class Train {
public:
	static vector<Train> train_vec;
	int number, numofseats;
	string name;

	Train(int number, string name, int capacity);
	void menu(Train t);
	void Add_train(Train t);
	void Delete_train(Train t);
	void Display_Data(Train t);
	void delete_train_trips(int pos);
};
