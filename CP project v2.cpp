#include <iostream>
#include <conio.h>

using namespace std;

struct car {
	 string name;
	 string company;
	 string body_type;
	 string engine_capacity;
	 string top_speed;
	 string fuel_avg;
	 int seats;
	 string transmission;
	};

int main()
{
//1800 cc
	car car01 = {"Civic X", "Honda", "Sedan", "1800 CC", "210 km/h", "12 km/1", 5, "Automatic"};
	car car02 = {"Corolla Altis Grande", "Toyota", "Sedan", "1800 CC", "200 km/h", "13 km/l", 5, "Automatic"};

// 1500 cc
	car car03 = {"Vezel", "Honda", "Crossover", "1500 CC", "190 km/h", "15 km/l", 5, "Automatic"};
	car car04 = {"BRV", "Honda", "Crossover", "1500 CC", "160 km/h", "13 km/l", 7, "Manual"};
	car car05 = {"HS", "MG", "Crossover", "1500 CC", "200 km/h", "11 km/l", 5, "Automatic"};
	car car06 = {"ZS", "MG", "Crossover", "1500 CC", "150 km/h", "14 km/l", 5, "Automatic"};
	car car07 = {"Glory 580 Pro", "DFSK", "Crossover", "1500 CC", "220 km/h", "12 km/l", 5, "Automatic"};
	car car08 = {"X-70", "Proton", "Crossover", "1500 CC", "200 km/h", "12 km/l", 5, "Automatic"};

//1300 cc
	car car09 = {"Yaris", "Toyota", "Sedan", "1300 CC", "205 km/h", "16 km/l", 5, "Manual"};
	car car10 = {"City", "Honda", "Sedan", "1300 CC", "195 km/h", "17 km/l", 5, "Manual"};
	car car11 = {"Saga", "Proton", "Sedan", "1300 CC", "170 km/h", "15 km/l", 5, "Manual"};
	car car12 = {"Swift", "Suzuki", "Hatchback", "1300 CC", "200 km/h", "11 km/l", 5, "Manual"};

//1000 cc
	car car13 = {"Cultus", "Suzuki", "Hatchback", "1000 CC", "160 km/h", "18 km/l", 4, "Manual"};
	car car14 = {"Vitz", "Toyota", "Hatchback", "1000 CC", "180 km/h", "16 km/l", 4, "Automatic"};
	car car15 = {"Picanto", "KIA", "Hatchback", "1000 CC", "190 km/h", "12 km/l", 4, "Manual"};
	car car16 = {"Wagon R", "Suzuki", "Hatchback", "1000 CC", "150 km/h", "16 km/l", 4, "Manual"};

//660 cc
	car car17 = {"Alto", "Suzuki", "Hatchback", "660 CC", "140 km/h", "19 km/l", 4, "Manual"};
	car car18 = {"Mira", "Daihatsu", "Hatchback", "660 CC", "130 km/h", "20 km/l", 4, "Automatic"};
	car car19 = {"Dayz", "Nissan", "Hatchback", "660 CC", "130 km/h", "22 km/l", 4, "Automatic"};

int selector1,selector2;

cout<< "\t :*: SELECT ANY 2 CARS :*:" << endl;
cout<< "\n" << "1 = Civic"<< "\n" << "2 = Corolla Altis Grande" << "\n" << "3 = Vezel" << "\n" << "4 = BRV" << "\n" << "5 = HS" << "\n" << "6 = ZS" << "\n" << "7 = Glory 580 pro" << "\n" << "8 = X-70" << "\n" << "9 = Yaris" << "\n" << "10 = City" << "\n" << "11 = Saga" << "\n" << "12 = Swift" << "\n" << "13 = Cultus" << "\n" << "14 = Vitz" << "\n" << "15 = Piacnto" << "\n" << "16 = Wagon-R" << "\n" << "17 = Alto"<< "\n" << "18 = Mira" << "\n" << "19 = Dayz" << endl ;
cout<< "\n";
cout<< "Select First Car: ";
cin >> selector1;
cout<< "Select Second Car: ";
cin >> selector2;
cout<< "\n";
cout<< "\t :::1st Car:::" << endl;
cout<< "\n";
	switch (selector1)
	{ case 1:
		cout << "Name : " << car01.name << "\n" <<"Company : "<< car01.company << "\n" << "Body Type : " << car01.body_type << "\n" << "Engine Capacity : " << car01.engine_capacity << "\n" << "Top Speed : " << car01.top_speed << "\n" << "Fuel Average : " << car01.fuel_avg << "\n" << "No of seats : " << car01.seats << "\n" << "Transmission type : " << car01.transmission << endl;
		break;
	case 2:
		cout << "Name : " << car02.name << "\n" <<"Company : "<< car02.company << "\n" << "Body Type : " << car02.body_type << "\n" << "Engine Capacity : " << car02.engine_capacity << "\n" << "Top Speed : " << car02.top_speed << "\n" << "Fuel Average : " << car02.fuel_avg << "\n" << "No of seats : " << car02.seats << "\n" << "Transmission type : " << car02.transmission << endl;
		break;
	case 3:
		cout << "Name : " << car03.name << "\n" <<"Company : "<< car03.company << "\n" << "Body Type : " << car03.body_type << "\n" << "Engine Capacity : " << car03.engine_capacity << "\n" << "Top Speed : " << car03.top_speed << "\n" << "Fuel Average : " << car03.fuel_avg << "\n" << "No of seats : " << car03.seats << "\n" << "Transmission type : " << car03.transmission << endl;
		break;
	case 4:
		cout << "Name : " << car04.name << "\n" <<"Company : "<< car04.company << "\n" << "Body Type : " << car04.body_type << "\n" << "Engine Capacity : " << car04.engine_capacity << "\n" << "Top Speed : " << car04.top_speed << "\n" << "Fuel Average : " << car04.fuel_avg << "\n" << "No of seats : " << car04.seats << "\n" << "Transmission type : " << car04.transmission << endl;
		break;
	case 5:
		cout << "Name : " << car05.name << "\n" <<"Company : "<< car05.company << "\n" << "Body Type : " << car05.body_type << "\n" << "Engine Capacity : " << car05.engine_capacity << "\n" << "Top Speed : " << car05.top_speed << "\n" << "Fuel Average : " << car05.fuel_avg << "\n" << "No of seats : " << car05.seats << "\n" << "Transmission type : " << car05.transmission << endl;
		break;
	case 6:
		cout << "Name : " << car06.name << "\n" <<"Company : "<< car06.company << "\n" << "Body Type : " << car06.body_type << "\n" << "Engine Capacity : " << car06.engine_capacity << "\n" << "Top Speed : " << car06.top_speed << "\n" << "Fuel Average : " << car06.fuel_avg << "\n" << "No of seats : " << car06.seats << "\n" << "Transmission type : " << car06.transmission << endl;
		break;
	case 7:
		cout << "Name : " << car07.name << "\n" <<"Company : "<< car07.company << "\n" << "Body Type : " << car07.body_type << "\n" << "Engine Capacity : " << car07.engine_capacity << "\n" << "Top Speed : " << car07.top_speed << "\n" << "Fuel Average : " << car07.fuel_avg << "\n" << "No of seats : " << car07.seats << "\n" << "Transmission type : " << car07.transmission << endl;
		break;
	case 8:
		cout << "Name : " << car08.name << "\n" <<"Company : "<< car08.company << "\n" << "Body Type : " << car08.body_type << "\n" << "Engine Capacity : " << car08.engine_capacity << "\n" << "Top Speed : " << car08.top_speed << "\n" << "Fuel Average : " << car08.fuel_avg << "\n" << "No of seats : " << car08.seats << "\n" << "Transmission type : " << car08.transmission << endl;
		break;
	case 9:
		cout << "Name : " << car09.name << "\n" <<"Company : "<< car09.company << "\n" << "Body Type : " << car09.body_type << "\n" << "Engine Capacity : " << car09.engine_capacity << "\n" << "Top Speed : " << car09.top_speed << "\n" << "Fuel Average : " << car09.fuel_avg << "\n" << "No of seats : " << car09.seats << "\n" << "Transmission type : " << car09.transmission << endl;
		break;
	case 10:
		cout << "Name : " << car10.name << "\n" <<"Company : "<< car10.company << "\n" << "Body Type : " << car10.body_type << "\n" << "Engine Capacity : " << car10.engine_capacity << "\n" << "Top Speed : " << car10.top_speed << "\n" << "Fuel Average : " << car10.fuel_avg << "\n" << "No of seats : " << car10.seats << "\n" << "Transmission type : " << car10.transmission << endl;
		break;
	case 11:
		cout << "Name : " << car11.name << "\n" <<"Company : "<< car11.company << "\n" << "Body Type : " << car11.body_type << "\n" << "Engine Capacity : " << car11.engine_capacity << "\n" << "Top Speed : " << car11.top_speed << "\n" << "Fuel Average : " << car11.fuel_avg << "\n" << "No of seats : " << car11.seats << "\n" << "Transmission type : " << car11.transmission << endl;
		break;
	case 12:
		cout << "Name : " << car12.name << "\n" <<"Company : "<< car12.company << "\n" << "Body Type : " << car12.body_type << "\n" << "Engine Capacity : " << car12.engine_capacity << "\n" << "Top Speed : " << car12.top_speed << "\n" << "Fuel Average : " << car12.fuel_avg << "\n" << "No of seats : " << car12.seats << "\n" << "Transmission type : " << car12.transmission << endl;
		break;
	case 13:
		cout << "Name : " << car13.name << "\n" <<"Company : "<< car13.company << "\n" << "Body Type : " << car13.body_type << "\n" << "Engine Capacity : " << car13.engine_capacity << "\n" << "Top Speed : " << car13.top_speed << "\n" << "Fuel Average : " << car13.fuel_avg << "\n" << "No of seats : " << car13.seats << "\n" << "Transmission type : " << car13.transmission << endl;
		break;
	case 14:
		cout << "Name : " << car14.name << "\n" <<"Company : "<< car14.company << "\n" << "Body Type : " << car14.body_type << "\n" << "Engine Capacity : " << car14.engine_capacity << "\n" << "Top Speed : " << car14.top_speed << "\n" << "Fuel Average : " << car14.fuel_avg << "\n" << "No of seats : " << car14.seats << "\n" << "Transmission type : " << car14.transmission << endl;
		break;
	case 15:
		cout << "Name : " << car15.name << "\n" <<"Company : "<< car15.company << "\n" << "Body Type : " << car15.body_type << "\n" << "Engine Capacity : " << car15.engine_capacity << "\n" << "Top Speed : " << car15.top_speed << "\n" << "Fuel Average : " << car15.fuel_avg << "\n" << "No of seats : " << car15.seats << "\n" << "Transmission type : " << car15.transmission << endl;
		break;
	case 16:
		cout << "Name : " << car16.name << "\n" <<"Company : "<< car16.company << "\n" << "Body Type : " << car16.body_type << "\n" << "Engine Capacity : " << car16.engine_capacity << "\n" << "Top Speed : " << car16.top_speed << "\n" << "Fuel Average : " << car16.fuel_avg << "\n" << "No of seats : " << car16.seats << "\n" << "Transmission type : " << car16.transmission << endl;
		break;
	case 17:
		cout << "Name : " << car17.name << "\n" <<"Company : "<< car17.company << "\n" << "Body Type : " << car17.body_type << "\n" << "Engine Capacity : " << car17.engine_capacity << "\n" << "Top Speed : " << car17.top_speed << "\n" << "Fuel Average : " << car17.fuel_avg << "\n" << "No of seats : " << car17.seats << "\n" << "Transmission type : " << car17.transmission << endl;
		break;
	case 18:
		cout << "Name : " << car18.name << "\n" <<"Company : "<< car18.company << "\n" << "Body Type : " << car18.body_type << "\n" << "Engine Capacity : " << car18.engine_capacity << "\n" << "Top Speed : " << car18.top_speed << "\n" << "Fuel Average : " << car18.fuel_avg << "\n" << "No of seats : " << car18.seats << "\n" << "Transmission type : " << car18.transmission << endl;
		break;
	case 19:
		cout << "Name : " << car19.name << "\n" <<"Company : "<< car19.company << "\n" << "Body Type : " << car19.body_type << "\n" << "Engine Capacity : " << car19.engine_capacity << "\n" << "Top Speed : " << car19.top_speed << "\n" << "Fuel Average : " << car19.fuel_avg << "\n" << "No of seats : " << car19.seats << "\n" << "Transmission type : " << car19.transmission << endl;
		break;
	}

	cout<< "\n";
	cout<< "\t :::2nd Car:::"<< endl;
	cout<< "\n";

	switch (selector2)
	{ case 1:
		cout << "Name : " << car01.name << "\n" <<"Company : "<< car01.company << "\n" << "Body Type : " << car01.body_type << "\n" << "Engine Capacity : " << car01.engine_capacity << "\n" << "Top Speed : " << car01.top_speed << "\n" << "Fuel Average : " << car01.fuel_avg << "\n" << "No of seats : " << car01.seats << "\n" << "Transmission type : " << car01.transmission << endl;
		break;
	case 2:
		cout << "Name : " << car02.name << "\n" <<"Company : "<< car02.company << "\n" << "Body Type : " << car02.body_type << "\n" << "Engine Capacity : " << car02.engine_capacity << "\n" << "Top Speed : " << car02.top_speed << "\n" << "Fuel Average : " << car02.fuel_avg << "\n" << "No of seats : " << car02.seats << "\n" << "Transmission type : " << car02.transmission << endl;
		break;
	case 3:
		cout << "Name : " << car03.name << "\n" <<"Company : "<< car03.company << "\n" << "Body Type : " << car03.body_type << "\n" << "Engine Capacity : " << car03.engine_capacity << "\n" << "Top Speed : " << car03.top_speed << "\n" << "Fuel Average : " << car03.fuel_avg << "\n" << "No of seats : " << car03.seats << "\n" << "Transmission type : " << car03.transmission << endl;
		break;
	case 4:
		cout << "Name : " << car04.name << "\n" <<"Company : "<< car04.company << "\n" << "Body Type : " << car04.body_type << "\n" << "Engine Capacity : " << car04.engine_capacity << "\n" << "Top Speed : " << car04.top_speed << "\n" << "Fuel Average : " << car04.fuel_avg << "\n" << "No of seats : " << car04.seats << "\n" << "Transmission type : " << car04.transmission << endl;
		break;
	case 5:
		cout << "Name : " << car05.name << "\n" <<"Company : "<< car05.company << "\n" << "Body Type : " << car05.body_type << "\n" << "Engine Capacity : " << car05.engine_capacity << "\n" << "Top Speed : " << car05.top_speed << "\n" << "Fuel Average : " << car05.fuel_avg << "\n" << "No of seats : " << car05.seats << "\n" << "Transmission type : " << car05.transmission << endl;
		break;
	case 6:
		cout << "Name : " << car06.name << "\n" <<"Company : "<< car06.company << "\n" << "Body Type : " << car06.body_type << "\n" << "Engine Capacity : " << car06.engine_capacity << "\n" << "Top Speed : " << car06.top_speed << "\n" << "Fuel Average : " << car06.fuel_avg << "\n" << "No of seats : " << car06.seats << "\n" << "Transmission type : " << car06.transmission << endl;
		break;
	case 7:
		cout << "Name : " << car07.name << "\n" <<"Company : "<< car07.company << "\n" << "Body Type : " << car07.body_type << "\n" << "Engine Capacity : " << car07.engine_capacity << "\n" << "Top Speed : " << car07.top_speed << "\n" << "Fuel Average : " << car07.fuel_avg << "\n" << "No of seats : " << car07.seats << "\n" << "Transmission type : " << car07.transmission << endl;
		break;
	case 8:
		cout << "Name : " << car08.name << "\n" <<"Company : "<< car08.company << "\n" << "Body Type : " << car08.body_type << "\n" << "Engine Capacity : " << car08.engine_capacity << "\n" << "Top Speed : " << car08.top_speed << "\n" << "Fuel Average : " << car08.fuel_avg << "\n" << "No of seats : " << car08.seats << "\n" << "Transmission type : " << car08.transmission << endl;
		break;
	case 9:
		cout << "Name : " << car09.name << "\n" <<"Company : "<< car09.company << "\n" << "Body Type : " << car09.body_type << "\n" << "Engine Capacity : " << car09.engine_capacity << "\n" << "Top Speed : " << car09.top_speed << "\n" << "Fuel Average : " << car09.fuel_avg << "\n" << "No of seats : " << car09.seats << "\n" << "Transmission type : " << car09.transmission << endl;
		break;
	case 10:
		cout << "Name : " << car10.name << "\n" <<"Company : "<< car10.company << "\n" << "Body Type : " << car10.body_type << "\n" << "Engine Capacity : " << car10.engine_capacity << "\n" << "Top Speed : " << car10.top_speed << "\n" << "Fuel Average : " << car10.fuel_avg << "\n" << "No of seats : " << car10.seats << "\n" << "Transmission type : " << car10.transmission << endl;
		break;
	case 11:
		cout << "Name : " << car11.name << "\n" <<"Company : "<< car11.company << "\n" << "Body Type : " << car11.body_type << "\n" << "Engine Capacity : " << car11.engine_capacity << "\n" << "Top Speed : " << car11.top_speed << "\n" << "Fuel Average : " << car11.fuel_avg << "\n" << "No of seats : " << car11.seats << "\n" << "Transmission type : " << car11.transmission << endl;
		break;
	case 12:
		cout << "Name : " << car12.name << "\n" <<"Company : "<< car12.company << "\n" << "Body Type : " << car12.body_type << "\n" << "Engine Capacity : " << car12.engine_capacity << "\n" << "Top Speed : " << car12.top_speed << "\n" << "Fuel Average : " << car12.fuel_avg << "\n" << "No of seats : " << car12.seats << "\n" << "Transmission type : " << car12.transmission << endl;
		break;
	case 13:
		cout << "Name : " << car13.name << "\n" <<"Company : "<< car13.company << "\n" << "Body Type : " << car13.body_type << "\n" << "Engine Capacity : " << car13.engine_capacity << "\n" << "Top Speed : " << car13.top_speed << "\n" << "Fuel Average : " << car13.fuel_avg << "\n" << "No of seats : " << car13.seats << "\n" << "Transmission type : " << car13.transmission << endl;
		break;
	case 14:
		cout << "Name : " << car14.name << "\n" <<"Company : "<< car14.company << "\n" << "Body Type : " << car14.body_type << "\n" << "Engine Capacity : " << car14.engine_capacity << "\n" << "Top Speed : " << car14.top_speed << "\n" << "Fuel Average : " << car14.fuel_avg << "\n" << "No of seats : " << car14.seats << "\n" << "Transmission type : " << car14.transmission << endl;
		break;
	case 15:
		cout << "Name : " << car15.name << "\n" <<"Company : "<< car15.company << "\n" << "Body Type : " << car15.body_type << "\n" << "Engine Capacity : " << car15.engine_capacity << "\n" << "Top Speed : " << car15.top_speed << "\n" << "Fuel Average : " << car15.fuel_avg << "\n" << "No of seats : " << car15.seats << "\n" << "Transmission type : " << car15.transmission << endl;
		break;
	case 16:
		cout << "Name : " << car16.name << "\n" <<"Company : "<< car16.company << "\n" << "Body Type : " << car16.body_type << "\n" << "Engine Capacity : " << car16.engine_capacity << "\n" << "Top Speed : " << car16.top_speed << "\n" << "Fuel Average : " << car16.fuel_avg << "\n" << "No of seats : " << car16.seats << "\n" << "Transmission type : " << car16.transmission << endl;
		break;
	case 17:
		cout << "Name : " << car17.name << "\n" <<"Company : "<< car17.company << "\n" << "Body Type : " << car17.body_type << "\n" << "Engine Capacity : " << car17.engine_capacity << "\n" << "Top Speed : " << car17.top_speed << "\n" << "Fuel Average : " << car17.fuel_avg << "\n" << "No of seats : " << car17.seats << "\n" << "Transmission type : " << car17.transmission << endl;
		break;
	case 18:
		cout << "Name : " << car18.name << "\n" <<"Company : "<< car18.company << "\n" << "Body Type : " << car18.body_type << "\n" << "Engine Capacity : " << car18.engine_capacity << "\n" << "Top Speed : " << car18.top_speed << "\n" << "Fuel Average : " << car18.fuel_avg << "\n" << "No of seats : " << car18.seats << "\n" << "Transmission type : " << car18.transmission << endl;
		break;
	case 19:
		cout << "Name : " << car19.name << "\n" <<"Company : "<< car19.company << "\n" << "Body Type : " << car19.body_type << "\n" << "Engine Capacity : " << car19.engine_capacity << "\n" << "Top Speed : " << car19.top_speed << "\n" << "Fuel Average : " << car19.fuel_avg << "\n" << "No of seats : " << car19.seats << "\n" << "Transmission type : " << car19.transmission << endl;
		break;
	}
	getch();
	return 0;
}
