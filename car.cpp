#include <iostream>
#include <cstring>
using namespace std;
	
	void inputs();
	bool driving;
	bool running;
	bool open =1;
	string action;

class NewCar {
	public:
		string make;
		string model;
		int year;
		int speed;
		void print(){
			cout<< year << " "<< make<<" "<<model<< endl;
		}
};

int main (){
	NewCar car;
	
	cout << "Enter the vehicle's Manufacturer: ";
	cin >> car.make;

	cout << "Enter the Model of the vehicle: ";
	cin >> car.model;

	cout << "Enter the year of the vehicle: ";
	cin >> car.year;

	cout << "Your selected vehicle is a: " ;
	car.print();
	cout << endl;
	
	while(open){
	cout << "Enter an action to perform: " << endl;
	cin>> action;
	inputs();
	//cin
	}
	return 0;
}

void inputs(int&){
		NewCar car;
	if (action == "drive" ){
		driving=true;
		car.speed=15;
		int car.speed;
		cout<< "you begin driving and accelerate to 15mph.\n";
	}
	else if (action == "start"){
		running=true;
		cout << "you start the vehicle.\n";
	}
	else if (action == "off"){
		running=false;
		cout<< "the engine is currently off.\n";
	}
		else if (action == "stop"){
		car.speed=0;
		cout << "you come to a complete stop.\n";
	}
	else if (action == "change"){
			cout << "Which attribute(s) would you like to change?\n";
			
	}
	else if (action =="print"){
		car.print();
		cout<<endl;
	}
	else if (action =="accel"){
		car.speed+5;
		cout<< "you accelerate, current speed is " << car.speed<<endl;
	}
	else if (action =="decel"){
		car.speed=(car.speed-5);
		cout<< "you decelerate, current speed is " << car.speed<<endl;
	}	else if (action =="turn left"){
		cout << "you take a left turn.\n";
	}
	else if (action == "turn right"){
		cout << "you take a right turn.\n";
	}
	
	else if (action == "exit"){
		exit(1);
	}
	// else if (action = ""){
		
	// }
	// else if (action = ""){
	// }
	else {
		cout << "Invalid action, try again.  Type list to display options\n";
		cin >> action;
	}
}