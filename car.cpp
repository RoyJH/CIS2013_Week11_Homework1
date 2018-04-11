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
		 cout << "_______AVAILABLE ACTIONS_______" << endl;
		 cout << "change		: Change vehicle." << endl;
		cout << "drive		: Drive the vehicle." << endl;
		cout << "start		: Start the vehicle's engine." << endl;
		cout << "off 		: Turn off the engine." << endl;
		cout << "stop		: Stop the vehicle (speed must be <= 10)." << endl;
		cout << "turn left 	: Turn the vehicle left." << endl;
		cout << "turn right	: Turn the vehicle right." << endl;
		cout <<  "accel		: Speed up/Accelerate." << endl;
		cout << "decel		: Slow Down/Decelerate." << endl;
		cout <<  "print		: Prints the vehicle's attributes." << endl;
		cout << "exit 		: Ends the program." << endl;
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

void inputs(){
		NewCar car;
	if (action == "drive" ){
		if (running==false){
			cout << "Car must be running in order to drive.\n";
		}
		else{
		driving=true;
		car.speed=15;
		//car.*speed;
		cout<< "you begin driving and accelerate to 15mph.\n";
		}
	}
	else if (action == "start"){
		if (running==true){cout<< "Vehicle is already running.\n";}
		else{
		running=true;
		cout << "you start the vehicle.\n";}
	}
	else if (action == "off"){
		if (car.speed != 0){cout<<"Vehicle must be stationary to turn off engine.\n";}
		else{
		running=false;
		driving=false;
		cout<< "the engine is currently off.\n";}
	}
		else if (action == "stop"){
			if(car.speed<10){"You're moving too fast to stop. Reduce speed to 10mph or less.\n";}
			else{
		car.speed=0;
		driving =false;
			cout << "you come to a complete stop.\n";}
	}
	else if (action == "change"){
		if (driving == true){cout<< "You can't change vehicles while driving.\n";}
			cout << "Enter the vehicle's Manufacturer: ";
			cin >> car.make;
			cout << "Enter the Model of the vehicle: ";
			cin >> car.model;
			cout << "Enter the year of the vehicle: ";
			cin >> car.year;;
	}
	else if (action =="print"){
		car.print();
		cout<<endl;
	}
	else if (action =="accel"){
		if (driving==false){cout<< "You must be driving to speed up.\n";}
		else{
		car.speed+5;
		cout<< "you accelerate, current speed is " << car.speed<<endl;}
	}
	else if (action =="decel"){
		if (driving==false){cout<< "You must be driving to slow down.\n";}
		else{
		car.speed=(car.speed-5);
		cout<< "you decelerate, current speed is " << car.speed<<endl;}
	}	
	else if (action =="turn left"){
		if (driving==false){cout<< "You must be driving in order to turn.\n";}
		else{		
		cout << "you take a left turn.\n";}
	}
	else if (action == "turn right"){
		if (driving==false){cout<< "You must be driving in order to turn.\n";}
		else{
		cout << "you take a right turn.\n";}
	}
	
	else if (action == "exit"){
		open=0;
	}
	 else if (action == "list"){
		 cout << "_______AVAILABLE ACTIONS_______" << endl;
		 cout << "change		: Change vehicle." << endl;
		cout << "drive		: Drive the vehicle." << endl;
		cout << "start		: Start the vehicle's engine." << endl;
		cout << "off 		: Turn off the engine." << endl;
		cout << "stop		: Stop the vehicle (speed must be <= 10)." << endl;
		cout << "turn left 	: Turn the vehicle left." << endl;
		cout << "turn right	: Turn the vehicle right." << endl;
		cout <<  "accel		: Speed up/Accelerate." << endl;
		cout << "decel		: Slow Down/Decelerate." << endl;
		cout <<  "print		: Prints the vehicle's attributes." << endl;
		cout << "exit 		: Ends the program." << endl;
		
	 }
	else {
		cout << "Invalid action, try again.  Type list to display options.\n";
		cin >> action;
	}
}