// hello DS team.
//trip
#include "Railway.h"
#include <map>
#include <algorithm>
#include <vector>
//static vector<Trip> trip_vec;
static vector<Reservation> Res_vec;
static vector<Train> Train_vector;





static map<string, int>mo = { {"Jan",1} , {"Feb",2},{"Mar",3},{"Apr",4},{"May",5},{"Jun", 6}, {"Jul",7}, {"Aug", 8},
{"Sep",9}, {"Oct",10}, {"Nov", 11}, {"Dec", 12} };


void  Global::welcome() {
	cout << "\n------------------------------------------------------------\n";
	cout << "--> Welcome to ElQalag Railway Management System (QRMS). <--\n";
	cout << "------------------------------------------------------------\n";
}
void  Global::bye() {
	cout << "\n------------------------------------------------------------------\n";
	cout << "--> Thanks for using ElQalag Railway Management System (QRMS). <--\n";
	cout << "------------------------------------------------------------------\n";
}
// function to convert string date to int
long long Global::convert_date(string date) {

	long long int_date = (stol(date.substr(0, 2)) * 24 * 60) + (stol(date.substr(3, 2)) * 30 * 24 * 60) + (stol(date.substr(6, 4)) * 365 * 24 * 60);
	return int_date;

}
// function to convert string time to int
long long Global::convert_time(string time) {
	long long int_time = stol(time.substr(0, 2)) * 60 + stol(time.substr(3, 2));
	return int_time;
}
// function to get current time in (minuts)
long long Global::current_time() {
	long long time_mins = 0;
	char s[50];
	std::time_t  t = std::time(NULL);
	errno_t e = ctime_s(s, 50, &t);
	//if (e) std::cout << "fooey!\n";
	//else   std::cout << s; //Tue Apr 18 03:31:30 2023
	string stime = "";
	for (int i = 0; i < 50; i++) stime += s[i];
	//Tue May  2 02:44:14 2023
	string date = "";

	if (stime[8] == ' ') {
		date += "0" + stime.substr(9, 1);
	}
	else {
		date += stime.substr(8, 2);
	}
	date += "/";

	if (mo[stime.substr(4, 3)] > 9) date += to_string(mo[stime.substr(4, 3)]);
	else date += "0" + to_string(mo[stime.substr(4, 3)]);

	date += "/" + stime.substr(20, 4);
	string time = stime.substr(11, 5);
	time_mins = convert_date(date) + convert_time(time);
	return time_mins;
}
bool Global::Trip_Reservation_equal(Reservation t1, Trip t2) {
	if (t1.BoardingPoint == t2.boarding_point &&
		t1.DestinationPoint == t2.destination_point &&
		t1.Date_of_Travel == t2.date_of_travel &&
		t1.departure_time == t2.departure_time)
		return true;
	else return false;
}

vector<Trip> Trip::trip_vec = { Trip(1,10,20,"Cairo", "Alexandria", "01:20","02:00" ,"29/05/2023"),
	Trip(3,13,15,"Cairo", "Alexandria", "04:23","05:12", "2/06/2023"),
	Trip(1,16,30,"Cairo", "Qena", "02:20","03:00" ,"01/06/2023"),
	Trip(1,20,25,"Cairo", "Alexandria", "01:29","02:40" ,"09/06/2023"),
	Trip(1,13,29,"Cairo", "Sohage", "09:20","10:00" ,"12/06/2023"),
	Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
	Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
	Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
	Trip(1,16,30,"Cairo", "Alexandria", "02:20","03:00" ,"01/06/2023"),
	Trip(1,20,25,"Cairo", "Assiut", "01:29","02:40" ,"09/06/2023"),
	Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
	Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
	Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
	Trip(1,40,8,"Cairo", "Minya", "10:20","10:35" ,"12/06/2023"),
	Trip(1,16,30,"Cairo", "Alexandria", "02:20","03:00" ,"01/06/2023"),
	Trip(1,20,25,"Cairo", "Alexandria", "01:29","02:40" ,"09/06/2023"),
	Trip(1,13,29,"Cairo", "Giza", "09:20","10:00" ,"12/06/2023"),
	Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
	Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
	Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
	Trip(2,20,43,"Cairo", "Luxor", "22:10","23:35", "25/05/2023") };

//void Trip::add_trip()
//{
//	Trip t;
//
//	int train_number = 0, available_seats = 0;
//	float fare = 0;
//	string boarding_point, destination_point,
//		departure_time, arrive_time, date_of_travel;
//	cout << "---------------------------------------------";
//	cout << endl << "   Enter the train number   : ";
//	cin >> t.train_number;
//	cout << endl << "   Enter the boarding point : ";
//	cin >> t.boarding_point;
//	cout << endl << "   Enter the destination point : ";
//	cin >> t.destination_point;
//	cout << endl << "   Enter the available seats : ";
//	cin >> t.available_seats;
//	cout << endl << "   Enter the date of travel : ";
//	cin >> t.date_of_travel;
//	cout << endl << "   Enter the time of departure : ";
//	cin >> t.departure_time;
//	cout << endl << "   Enter the time of arrive : ";
//	cin >> t.arrive_time;
//	cout << endl << "   Enter the fare : ";
//	cin >> t.fare;
//
//	bool found = false;
//	for (auto it : trip_vec) {
//		if (it.boarding_point == t.boarding_point &&
//			it.destination_point == t.destination_point &&
//			it.date_of_travel == t.date_of_travel &&
//			it.departure_time == t.departure_time) {
//
//			cout << "### Sorry! This trip has been added before. ###" << endl;
//			found = true;
//			break;
//		}
//	}
//	if (!found) {
//		trip_vec.push_back(t);
//		cout << endl << "added successfully!" << endl;
//	}
//
//	cout << endl << "---------------------------------------------";
//	cout << endl << "To add another trip, press 1." << endl << "To Exit, press 0." << endl;
//	int op;
//	cin >> op;
//	if (op == 1) add_trip();
//	else {
//		Reservation::Menu();
//	}
//}
void Trip::update_trip()
{
	if (Trip::trip_vec.empty()) {
		cout << "No date to update";
	}
	else
	{
		int id;
		cout << "Enter train number that you want to update : ";
		cin >> id;
		int count = -1;
		for (int i = 0; i < Trip::trip_vec.size(); i++)
		{
			if (id == Trip::trip_vec.at(i).train_number)
			{
				cout << "-------------------------------------------";
				cout << endl << " The train number   : " << Trip::trip_vec.at(i).train_number;
				cout << endl << " The boarding point : " << Trip::trip_vec.at(i).boarding_point;
				cout << endl << " The destination point : " << Trip::trip_vec.at(i).destination_point;
				cout << endl << " The available seats : " << Trip::trip_vec.at(i).available_seats;
				cout << endl << " date of travel : " << Trip::trip_vec.at(i).date_of_travel;
				cout << endl << " The fare : " << Trip::trip_vec.at(i).fare;
				cout << "\n-------------------------------------------\n";
				count = i;

			}

		}
		if (count == -1)
		{
			cout << "Enter valid train number or date of travel" << endl;
			update_trip();
		}
		else
		{
			cout << "Enter new data " << endl;
			cout << "---------------------------------------------";
			cout << endl << "   Enter train number   : ";
			cin >> Trip::trip_vec.at(count).train_number;
			cout << endl << "   Enter boarding point : ";
			cin >> Trip::trip_vec.at(count).boarding_point;
			cout << endl << "   Enter destination point : ";
			cin >> Trip::trip_vec.at(count).destination_point;
			cout << endl << "   Enter date of travel : ";
			cin >> Trip::trip_vec.at(count).date_of_travel;
			cout << endl << "   Enter The fare : ";
			cin >> Trip::trip_vec.at(count).fare;
		}

	}
}
void Trip::delete_trip()
{
	if (Trip::trip_vec.empty()) {
		cout << "No date to delete";
	}
	else
	{
		int id;
		try {
			cout << "Enter train number  : ";
			cin >> id;
		}
		catch (exception e) {
			cout << "Enter valid id";
			return;
		}

		int count = -1;
		vector<Trip>::iterator it;
		for (int i = 0; i < Trip::trip_vec.size(); i++)
		{
			if (id == Trip::trip_vec.at(i).train_number)
			{
				count = i;
				break;
			}
		}
		it = Trip::trip_vec.begin() + count;
		Trip::trip_vec.erase(it);
		cout << "--------------------------------------------------\n";
		cout << "Deleted successfully. \n";
	}
}
void Trip::show_trip()
{
	if (Trip::trip_vec.empty()) {
		cout << "No date to show";
	}
	else {

		int count = -1;
		int id;
		cout << "Enter train number  : ";
		cin >> id;
		for (int i = 0; i < Trip::trip_vec.size(); i++)
		{

			if (id == Trip::trip_vec.at(i).train_number)
			{
				count = i;
				break;
			}
		}
		if (count == -1)
		{
			cout << "Enter valid train number " << endl;
			update_trip();
		}
		else {
			cout << "---------------------------------------------";
			cout << endl << " train number   : " << Trip::trip_vec.at(count).train_number;
			cout << endl << " boarding point : " << Trip::trip_vec.at(count).boarding_point;
			cout << endl << " destination point : " << Trip::trip_vec.at(count).destination_point;
			cout << endl << " available seats : " << Trip::trip_vec.at(count).available_seats;
			cout << endl << " date of travel : " << Trip::trip_vec.at(count).date_of_travel;
			cout << endl << " The fare : " << Trip::trip_vec.at(count).fare;
			cout << "\n---------------------------------------------\n";
			return;
		}
	}
}
void Trip::display_trip_data(Trip trip) {
	cout << "> Train number: " << trip.train_number << endl;
	cout << "> Boarding point: " << trip.boarding_point << endl;
	cout << "> Destination point: " << trip.destination_point << endl;
	cout << "> Date: " << trip.departure_time << " " << trip.date_of_travel << endl;
	cout << "> Available seats: " << trip.available_seats << endl;
}

// function to get all available trips that has a specific boarding and destination points.
//vector<Trip> Trip::getAvailableTrips(int tickets, string boarding_point, string destination) {
//	vector<Trip>sorted_trips;
//	for (int i = 0; i < Trip::trip_vec.size(); i++) {
//		if (Trip::trip_vec[i].destination_point == destination && Trip::trip_vec[i].boarding_point == boarding_point
//			&& Trip::trip_vec[i].available_seats >= tickets) {
//			long long departure_time = Global::convert_date(Trip::trip_vec[i].date_of_travel) + Global::convert_time(Trip::trip_vec[i].departure_time);
//			if (Global::current_time() < departure_time) sorted_trips.push_back(Trip::trip_vec[i]);
//		}
//	}
//	sort(sorted_trips.begin(), sorted_trips.end(), [](const Trip& t1, const Trip& t2)
//		{ return t1.departure_time < t2.departure_time; });
//	return sorted_trips;
//}
//vector<Trip> Trip::getAllTrips() {
//	vector<Trip>all_trips;
//	for (int i = 0; i < Trip::trip_vec.size(); i++) {
//		all_trips.push_back(Trip::trip_vec[i]);
//	}
//	return all_trips;
//}
vector<Trip> Trip::getAllTrips() {
	return Trip::trip_vec;
}
vector<Trip> Trip::getAvailableTrips(int tickets, string boarding_point, string destination) {
	vector<Trip>sorted_trips;
	
	for (int i = 0; i < Trip::trip_vec.size(); i++) {
		if (Trip::trip_vec[i].destination_point == destination && Trip::trip_vec[i].boarding_point == boarding_point
			&& Trip::trip_vec[i].available_seats >= tickets) {

			long long trip_time = Global::convert_date(Trip::trip_vec[i].date_of_travel) + Global::convert_time(Trip::trip_vec[i].departure_time);
			if (Global::current_time() < trip_time) sorted_trips.push_back(Trip::trip_vec[i]);
			
		}
	}
	
	sort(sorted_trips.begin(), sorted_trips.end(), [](const Trip& t1, const Trip& t2)
		{ return (Global::convert_date(t1.date_of_travel) + Global::convert_time(t1.departure_time)) <
		(Global::convert_date(t2.date_of_travel) + Global::convert_time(t2.departure_time)); 
		}
	);
	
	return sorted_trips;
}
// function to get the next suitable trip.
Trip Trip::getNextTrip(int tickets, string boarding_point, string destination) {
	vector<Trip>trips;
	trips = Trip::getAvailableTrips(tickets, boarding_point, destination);
	if (trips.size() > 0) return trips[0];
}
Trip::Trip(int train_number, float fare, int seats, string boarding, string dest, string dep_time, string arriv_time, string trip_date) {
	this->train_number = train_number;
	this->fare = fare;
	this->available_seats = seats;
	this->boarding_point = boarding;
	this->destination_point = dest;
	this->departure_time = dep_time;
	this->arrive_time = arriv_time;
	this->date_of_travel = trip_date;
}

vector<Reservation> Reservation::reservations = {
	Reservation("cairo" ,"alex" , "06/05/2024","01:00" , "02:00",1,5,50),Reservation("cairo" ,"luxor" , "07/05/2024","02:00", "02:00",2,5,100),
  Reservation("cairo" ,"minya" , "08/05/2024","03:00", "02:00",3,8,80),Reservation("cairo" ,"alex" , "09/05/2024","04:00", "02:00",4,10,100),
  Reservation("cairo" ,"suiii" , "10/05/2024","05:00", "02:00",5,7,70), Reservation("cairo" ,"suiii" , "10/05/2024","05:00", "02:00",5,7,70)
};
Reservation::Reservation() {}
Reservation::Reservation(string boarding, string destination, string date, string time, string arrive, int train_no, int tickets, int totalfare) {
	this->BoardingPoint = boarding;
	this->DestinationPoint = destination;
	this->Date_of_Travel = date;
	this->departure_time = time;
	this->arrive_time = arrive;
	this->train_no = train_no;
	this->ReservedTickets = tickets;
	this->TotalFare = totalfare;
}
void Reservation::AddReservation(Reservation r)
{
	cout << " <----------- Add Reservations -----------> \n\n";
	cout << "Add Reservation Details : \n\n";
	cout << "> Enter your name : ";
	cin.ignore();
	getline(cin, r.name);
	cout << "> Enter your Boarding Point : ";
	getline(cin, r.BoardingPoint);
	cout << "> Enter your Destination Point : ";
	getline(cin, r.DestinationPoint);
	cout << "> Enter Date of Travel : ";
	cin >> r.Date_of_Travel;
	cout << "> Enter time of departure of trip : ";
	cin >> r.departure_time;
	cout << "> Enter time of arrive of trip : ";
	cin >> r.arrive_time;
	cout << "> Enter Number of Tickets : ";
	cin >> r.ReservedTickets;
	cout << endl;
	r.TotalFare = 0.0;

	vector<Trip>avl = Trip::getAvailableTrips(r.ReservedTickets, r.BoardingPoint, r.DestinationPoint);
	if (avl.size() > 0) {
		bool found = false;
		for (int i = 0; i < avl.size(); i++) {
			if (avl[i].date_of_travel == r.Date_of_Travel && avl[i].departure_time == r.departure_time) {

				r.TotalFare = r.ReservedTickets * avl[i].fare;
				Res_vec.push_back(r);
				avl[i].available_seats -= r.ReservedTickets;//dec number of seats available on this trip
				cout << "<------------- Reservation Done successfully! ------------->\n\n\a";
				Reservation::Menu();

				found = true;
				break;
			}
		}
		if (!found)
			cout << "No trips from " << r.BoardingPoint << " to " << r.DestinationPoint << " found!" << endl;
	}
	else cout << "No trips from " << r.BoardingPoint << " to " << r.DestinationPoint << " found!" << endl;

	//if (Trip::trip_vec.empty())
	//{
	//	cout << "Sorry , There is no available trips at that moment... Try again later \n\n\a";
	//}
	//else
	//{
	//	//bool found = false;
	//	//for (int i = 0; i < Trip::trip_vec.size(); i++)//loop to check if we can find trip with same dest and boarding point and trip time
	//	//{
	//	//	if (r.BoardingPoint == Trip::trip_vec.at(i).boarding_point &&
	//	//		r.DestinationPoint == Trip::trip_vec.at(i).destination_point &&
	//	//		r.departure_time == Trip::trip_vec[i].departure_time &&
	//	//		r.Date_of_Travel == Trip::trip_vec.at(i).date_of_travel)// check dest and boarding points and trip time of the passenger
	//	//	{
	//	//		found = true;
	//	//		if (r.ReservedTickets > Trip::trip_vec.at(i).available_seats)//check no of tickets
	//	//		{
	//	//			cout << "Sorry, there are not enough seats available on this trip. \n\a";
	//	//			cout << "The next available trip from : " << r.BoardingPoint << " To " << r.DestinationPoint << " is :\n";
	//	//			// call mabrouk function here.
	//	//		}
	//	//		else
	//	//		{
	//	//			r.TotalFare = r.ReservedTickets * Trip::trip_vec.at(i).fare;
	//	//			Res_vec.push_back(r);
	//	//			Trip::trip_vec.at(i).available_seats -= r.ReservedTickets;//dec number of seats available on this trip
	//	//			cout << "<------------- Reservation Done successfully! ------------->\n\n\a";
	//	//			Reservation::Menu();
	//	//		}
	//	//		break;
	//	//	}
	//	//}
	//	//if (!found)
	//	//{
	//	//	cout << "There is no trip from : " << r.BoardingPoint << " To : " << r.DestinationPoint << " at : " << r.departure_time << "\n";
	//	//}
	//}
}
void Reservation::EditReservation()// Õá Úáí ÇáäÈí ææÇÍÏÉ æÇÍÏÉ æåÊÝåã Çä ÔÇÁ Çááå
{
	cout << " <----------- Edit Reservation -----------> \n\n";
	if (Res_vec.empty())
	{
		cout << "No Data to Update \n\a";
	again:
		char c;
		cout << "Do you want to Book a ticket ? (y / n) \n";
		cin >> c;
		if (c == 'y')
		{
			Reservation f;
			AddReservation(f);
		}
		else if (c == 'n')
		{
			Reservation::Menu();
		}
		else
		{
			cout << "Invalid input , Please try again \n\a";
			goto again;
		}
		return;
	}
	else
	{
		string Name;
		cout << "Enter your name : ";
		cin.ignore();
		getline(cin, Name);
		int flag = -1;//catch the index of a specific reservation
		for (int i = 0; i < Res_vec.size(); i++)//loop catch the index of a specific reservation
		{
			if (Name == Res_vec.at(i).name)
			{
				cout << "Your Reservation information : \n\n";
				cout << "Name : " << Res_vec.at(i).name << "\n";
				cout << "Boarding Point : " << Res_vec.at(i).BoardingPoint << "\n";
				cout << "Destination Point : " << Res_vec.at(i).DestinationPoint << "\n";
				cout << "Date of Travel : " << Res_vec.at(i).Date_of_Travel << "\n";
				cout << "Number of Ticket Reserved : " << Res_vec.at(i).ReservedTickets << "\n\n";
				flag = i;
			}
		}
		if (flag == -1)
		{
			char c;
			cout << "There is no Reservation for this name. \n\a";
		re:
			cout << "Do you want to Book a ticket ? (y / n) \n";
			cin >> c;
			if (c == 'y')
			{
				Reservation f;
				AddReservation(f);
			}
			else if (c == 'n')
			{
				Reservation::Menu();
			}
			else
			{
				cout << "Invalid input , Please try again \n\a";
				goto re;
			}


		}
		else
		{
			int index = -1;// to catch the index of the choosen trip
			for (int i = 0; i < Trip::Trip::trip_vec.size(); i++)//loop to catch the index of the choosen trip
			{
				/*
				* to get the index , we need to check of 4 things
				* - boarding point
				* - destination point
				* - Date of travel
				* - time of the trip
				*
				* there is no 2 trips with the same info for each 4 things , so we can catch the choosen trip
				*
				* the next if condition to that ...
				*/
				if (Res_vec.at(flag).BoardingPoint == Trip::Trip::trip_vec.at(i).boarding_point && Res_vec.at(flag).DestinationPoint == Trip::Trip::trip_vec.at(i).destination_point
					&& Res_vec.at(flag).Date_of_Travel == Trip::trip_vec.at(i).date_of_travel && Res_vec.at(flag).departure_time == Trip::trip_vec[i].departure_time)
				{
					index = i;
				}
			}
		x:
			int choose;
			cout << "choose what you want to Edit : \n";
			cout << "1. Date of Travel \n" << "2. Number of Ticket reserved \n" << "3. Both \n";
			cin >> choose;
			if (choose == 1)
			{
				cout << "Enter new Date of Travel : ";
				cin >> Res_vec.at(flag).Date_of_Travel;
				cout << "<----------------- Edit Done successfully! -----------------> \n\a";
				DisplaySpecific(flag);//show data after updating 
			}
			else if (choose == 2)
			{
			a:
				int num = 0;
				cout << "Enter new number of tickets : ";
				cin >> num;//no of new tickets
				if (num > 0)
				{
					int seats = Trip::trip_vec[index].available_seats;
					if (num > seats + Res_vec.at(flag).ReservedTickets)
					{
						cout << "NO enough seats available \n\a";
					}
					else
					{
						if (num > Res_vec.at(flag).ReservedTickets)
						{
							Trip::trip_vec[index].available_seats -= num - Res_vec.at(flag).ReservedTickets;//update available seats
						}
						else
						{
							Trip::trip_vec[index].available_seats += Res_vec.at(flag).ReservedTickets - num;//update available seats
						}
						Res_vec.at(flag).TotalFare = Trip::trip_vec.at(index).fare * num;// clac new fare 
						Res_vec.at(flag).ReservedTickets = num;
						cout << "<----------------- Edit Done successfully! -----------------> \n\a";
						DisplaySpecific(flag);//show data after updating
						Reservation::Menu();
					}
				}
				else
				{
					cout << "Invalid input ! , Try again \n\a";
					goto a;
				}
			}
			else if (choose == 3)
			{
				cout << "Enter new Date of Travel :\n";
				cin >> Res_vec.at(flag).Date_of_Travel;
			z:
				int num = 0;
				cout << "Enter new number of tickets : ";
				cin >> num;
				if (num > 0)
				{
					int seats = Trip::trip_vec[index].available_seats;
					if (num > seats + Res_vec.at(flag).ReservedTickets)
					{
						cout << "NO enough seats available \n\a";
					}
					else
					{
						if (num > Res_vec.at(flag).ReservedTickets)
						{
							Trip::trip_vec[index].available_seats -= num - Res_vec.at(flag).ReservedTickets;
						}
						else
						{
							Trip::trip_vec[index].available_seats += Res_vec.at(flag).ReservedTickets - num;
						}
						Res_vec.at(flag).TotalFare = Trip::trip_vec.at(index).fare * num;// clac new fare 
						Res_vec.at(flag).ReservedTickets = num;
						cout << "<----------------- Edit Done successfully! -----------------> \n\a";
						DisplaySpecific(flag);//show data after updating
						Reservation::Menu();
					}
				}
				else
				{
					cout << "Invalid input ! , Try again \n\a";
					goto z;
				}

			}
			else
			{
				cout << "Invalid choice , Please try again. \n";
				goto x;
			}
		}
	}
}
void Reservation::DisplayReservation()
{
	cout << " <----------- Display Reservations -----------> \n\n";
	string name;
	cout << "Enter your name : ";
	cin.ignore();
	getline(cin, name);
	if (Res_vec.empty())
	{
		cout << " You Should add reservation first \n\n";
	}
	else
	{
		bool found = false;
		int index = -1;
		for (int i = 0; i < Res_vec.size(); i++) {
			if (name == Res_vec[i].name) {
				found = true;
				printReservation(Res_vec[i]);
				for (int j = 0; j < Trip::trip_vec.size(); j++)//loop to catch the index of the choosen trip
				{
					if (Global::Trip_Reservation_equal(Res_vec[i], Trip::trip_vec[j])) {
						index = j;
						break;
					}
				}
				if (index != -1) {
					cout << "Remaining Available seats on this trip : " << Trip::trip_vec[index].available_seats << " seats\n";
					Reservation::Menu();
				}
				break;
			}
		}
		if (!found) {
			cout << "There is no Reservation to this name yet. \n\a";
		again:
			char c;
			cout << "Do you want to Book a ticket ? (y / n) \n";
			cin >> c;
			if (c == 'y')
			{
				Reservation f;
				AddReservation(f);
			}
			else if (c == 'n')
			{
				Reservation::Menu();
			}
			else
			{
				cout << "Invalid input , Please try again \n\a";
				goto again;
			}
		}
	}
}
void Reservation::printReservation(Reservation r) {
	cout << "\nReservation Info : \n\n";
	cout << "Name : " << r.name << "\n";
	cout << "Boarding Point : " << r.BoardingPoint << "\n";
	cout << "Destination Point : " << r.DestinationPoint << "\n";
	cout << "Date of Travel : " << r.Date_of_Travel << "\n";
	cout << "Time of Trip : " << r.departure_time << "\n";
	cout << "Number of Ticket Reserved : " << r.ReservedTickets << " Tickets\n";
	cout << "Total fare of reserved tickets : " << r.TotalFare << " L.E\n";
}
void Reservation::DisplaySpecific(int flag)// to display info for a specific passenger 
{
	cout << "Your New Reservation information : \n\n";
	cout << "Name : " << Res_vec.at(flag).name << "\n";
	cout << "Boarding Point : " << Res_vec.at(flag).BoardingPoint << "\n";
	cout << "Destination Point : " << Res_vec.at(flag).DestinationPoint << "\n";
	cout << "Date of Travel : " << Res_vec.at(flag).Date_of_Travel << "\n";
	cout << "Time of Trip : " << Res_vec.at(flag).departure_time << "\n";
	cout << "Number of Ticket Reserved : " << Res_vec.at(flag).ReservedTickets << "\n";
	cout << "Total fare of reserved tickets : " << Res_vec.at(flag).TotalFare << " L.E\n";
	//cout << "Remaining Available seats on this trip : " << Trip::trip_vec[flag].available_seats << " seats\n";
}
void Reservation::Menu()
{
	cout << "------------ Choose Number For Operation ------------\n";

x:
	int choice;
	bool exitFlag = false;
	cout << "1. Add Reservation \n";
	cout << "2. Edit Reservation \n";
	cout << "3. Display Reservation \n";
	cout << "4. Exit Program \n";
	cout << "Enter your choice : ";
	cin >> choice;
	if (cin.fail())
	{

		cout << "Invalid choice , please try again \n\a";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');/*sets the maximum number of characters to ignore.
															Since this is the upper limit on the size of a stream,
															you are effectively telling cin that there is no limit to the number of characters to ignore.*/
		goto x;
	}
	else
	{
		Reservation r;
		if (choice == 1)
		{
			AddReservation(r);
		}
		else if (choice == 2)
			EditReservation();
		else if (choice == 3)
			DisplayReservation();
		else if (choice == 4)
		{
			Global::bye();
			return;
		}
		else
		{
			cout << "Invalid choice , please try again \n\a";
			goto x;
		}
	}
}

Train::Train(int number, string name, int capacity) {
	this->name = name;
	this->number = number;
	this->numofseats = capacity;
}
vector<Train> Train::train_vec = { Train(1,"AWAD", 50), Train(3,"happytrainko",250), Train(2,"Erkp", 100)};

void Train::Add_train(Train t)
{
	bool x = true;
	cout << "Add train \nEnter Train Number : ";
	cin >> t.number;
	for (int i = 0; i < Train_vector.size(); i++)
	{
		if (t.number == Train_vector.at(i).number)
		{
			x = false;
			cout << "This Number already exists , Please Enter a New Number   " << endl;
			Add_train(t);
		}
	}
	if (x)
	{
		cout << "Enter Train Name : ";
		cin >> t.name;
		cout << "Enter seats number : ";
		cin >> t.numofseats;
		Train_vector.push_back(t);
		cout << "train added successfully...\n";
		menu(t);
	}
}
void Train::Delete_train(Train t)
{
	system("cls");


	if (Train_vector.empty()) {
		cout << "No date to delete";
	}
	else
	{
		int number;
		cout << "delete train\nEnter number  : ";
		cin >> number;

		int count = -1;
		vector<Train>::iterator it;
		for (int i = 0; i < Train_vector.size(); i++)
		{
			if (number == Train_vector[i].number)
			{
				count = i;
				break;
			}
		}
		if (count == -1)
		{
			cout << "invalid data please try again.";
			Delete_train(t);
		}
		else
		{
			//delete trip that on the deleted train 
			delete_train_trips(count);

			it = Train_vector.begin() + count;
			Train_vector.erase(it);
			cout << "deleted successfully ... \n";
		}
	}


	cout << "if you want to go back press 1 : ";
	int x;
	cin >> x;
	if (x == 1)
	{
		system("cls");
		menu(t);
	}
	else
		return;
}
void Train::delete_train_trips(int pos)
{
	if (Trip::trip_vec.empty())
	{
		cout << "no trips available...";
	}
	else
	{
		vector<Trip>::iterator it;
		it = Trip::trip_vec.begin() + pos;
		Trip::trip_vec.erase(it);
		cout << "Trips in this train are deleted successfully...";
	}

}
void Train::Display_Data(Train t)
{
	system("cls");

	if (Train_vector.empty())
	{
		cout << "no data found..." << endl;
	}
	else {

		for (size_t i = 0; i < Train_vector.size(); i++)
		{
			cout << i + 1 << " - Train Name is : " << Train_vector[i].name;
			cout << "    Train  Number is : " << Train_vector[i].number;
			cout << "    Train seats is : " << Train_vector[i].numofseats << endl;
		}
	}

	cout << "if you want to go back press 1 : ";
	int x;
	cin >> x;
	if (x == 1)
	{
		menu(t);
	}
	else
		return;
}
void Train::menu(Train t)
{
	cout << "------------ choose number for operation ------------\n";
	cout << "1 to add train\n2 to delete train\n3 to show trains\n4 to exit\n";
	cout << "_____________________________________________________\n";
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		system("cls");
		Add_train(t);
	case 2:
		Delete_train(t);
		menu(t);
	case 3:
		Display_Data(t);
	case 4:
		break;
	default:
		cout << "invalid!! Please try again...\n";
		menu(t);
	}
}