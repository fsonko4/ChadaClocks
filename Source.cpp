/*
*CSProject1.cpp
* Date: 11/15/2024
* Author: Fatou Sonko
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// all my variables that i will use in this program are declared here.
	int hr;
	int hr24;
	int minu;
	int sec;
	char colon1, colon2;
	std::string TFD;
	int choice;

	// the user will be asked to enter a time and to include am and pm so the program can deal with time change more effectivly. 

	cout << "Enter the time here (format: XX:XX:XX AM/PM)" << endl;
	cin >> hr >> colon1 >> minu >> colon2 >> sec >> TFD;

	// the code block below deals with finding the 24 hour clock time based on the time the user inputted.

	if ((TFD == "AM" || TFD == "am") && hr < 12) {

		hr24 = hr;

		cout << "************************************************ " << " ******************************************************* \n" << endl;
		cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
		cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
		cout << "**************************************************  " << " ******************************************************" << endl;
	}


	if ((TFD == "AM" || TFD == "am") && hr == 12) {

		hr24 = 0;

		cout << "************************************************ " << " ******************************************************* \n" << endl;
		cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
		cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
		cout << "**************************************************  " << " ******************************************************" << endl;
	
	}


	if ((TFD == "PM" || TFD == "pm") && hr < 12) {

		hr24 = hr + 12;
		cout << "************************************************ " << " ******************************************************* \n" << endl;
		cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
		cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
		cout << "**************************************************  " << " ******************************************************" << endl;

	}


	if ((TFD == "PM" || TFD == "pm") && hr == 12) {

		hr24 = 12;

		cout << "************************************************ " << " ******************************************************* \n" << endl;
		cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
		cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
		cout << "**************************************************  " << " ******************************************************" << endl;

	}

	// menu is printed out to the user and program will take the users input to start the loop if needed.

	cout << "*********Menu**********\n";
	cout << "* 1 - Add One Hour   *\n";
	cout << "* 2 - Add One Minute  *\n";
	cout << "* 3 - Add One Second  *\n";
	cout << "* 4 - Exit Program    *\n";
	cout << "***********************\n" << endl;
	cin >> choice;

	while (choice != 4) {

		// this will print out the menu to the user once loop starts over again.

		cout << "*********Menu**********\n";
		cout << "* 1 - Add One Hour   *\n";
		cout << "* 2 - Add One Minute  *\n";
		cout << "* 3 - Add One Second  *\n";
		cout << "* 4 - Exit Program    *\n";
		cout << "***********************\n" << endl;

	

		if (choice == 1) {

			// as long as the hour in time is less than 12 than the hour will go up by one normally.

			if (hr < 12) {

				hr = hr + 1;
				hr24 = hr24 + 1;

				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;

			}
			// the code block below deals make sure that the time is in the correct format depending on if its am or pm.
			else if ((TFD == "AM" || TFD == "am") && hr == 12) {

				hr = 1;
				hr24 = 1;


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;
			}

			else if ((TFD == "PM" || TFD == "pm") && hr == 12) {

				hr = 1;
				hr24 = 13;


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;




				cin >> choice;
				
				
			}

			
			
		}

      // the code for if the user selects choice two starts here.
		if (choice == 2) {

			// as long as minutes is less than 59 then program will add one minute to the time.

			if (minu < 59) {

				minu = minu + 1;


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;
			}
			// all the code below makes sure that the time is correct based on if its am or pm.
			else if (minu == 59 && hr == 12) {

					if (TFD == "AM" || TFD == "am") {
					hr = 1;
					hr24 = 1;
					minu = 0;

					cout << "************************************************ " << " ******************************************************* \n" << endl;
					cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
					cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
					cout << "**************************************************  " << " ******************************************************" << endl;



					cin >> choice;
					}

					else if (TFD == "PM" || TFD == "pm") {
					hr = 1;
					hr24 = 13;
					minu = 0;


					cout << "************************************************ " << " ******************************************************* \n" << endl;
					cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
					cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
					cout << "**************************************************  " << " ******************************************************" << endl;




					cin >> choice;

					}




			}


			else if (minu == 59 && hr == 11 && (TFD == "AM" || TFD == "am")) {

				hr = 12;
				hr24 = 12;
				minu = 0;
				TFD = "PM";


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;




				cin >> choice;
			}

			else if (minu == 59 && hr == 11 && (TFD == "AM" || TFD == "am")) {

				hr = 12;
				hr24 = 12;
				minu = 0;
				TFD = "PM";


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;
			}

			else if (minu == 59 && hr == 11 && (TFD == "Pm" || TFD == "pm")) {

				hr = 12;
				hr24 = 12;
				minu = 0;
				TFD = "Am";



				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;



			}

			// will change the hour if the time is not at 11 hours by adding one hour. Will check to see if hr24 is at 23 to change to apporpiate hour.
			else if (minu == 59 && hr < 11) {
				hr = hr + 1;

				if (hr24 == 23) {
					hr = 0;
				}

				else if (hr24 != 23) {
					hr24 = hr24 + 1;

				}
				minu = 0;



				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;
			}





		}

		if (choice == 3) {

			// as long as seconds is less than 59 then only seconds will be impacted when choice three is selected by the user.

			if (sec < 59) {

				sec = sec + 1;


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;
			}

			// this will add another minute to the time and set seconds to zero if seconds is at 59.

			else if (sec = 59 && minu < 59) {

				sec = 0;
				minu = minu + 1;


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;





				cin >> choice;


			}
			// this statement block will change the hour when minute and seconds have reached 59 and user wants to add another second.
			else if (sec == 59 && minu == 59 && hr < 11) {

				minu = 0;
				sec = 0;
				hr = hr + 1;
				hr24 = hr24 + 1;

				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;




				cin >> choice;
			}

			// the rest of the statments in the choice three section look to see if it is appopiate to change am to pm and vise versa.

			else if (sec == 59 && minu == 59 && hr == 12) {

				if (TFD == "AM" || TFD == "am") {
					hr = 1;
					hr24 = 1;
					minu = 0;
					sec = 0;


					cout << "************************************************ " << " ******************************************************* \n" << endl;
					cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
					cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
					cout << "**************************************************  " << " ******************************************************" << endl;



					cin >> choice;
				}

				else if (TFD == "PM" || TFD == "pm") {
					hr = 1;
					hr24 = 13;
					minu = 0;
					sec = 0;


					cout << "************************************************ " << " ******************************************************* \n" << endl;
					cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
					cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
					cout << "**************************************************  " << " ******************************************************" << endl;



					cin >> choice;

				}


			}

			// this statement will change the time only if the time is going to change from 11:59:59 pm to 12:00:00 am.
			else if (sec == 59 && minu == 59 && hr == 11 && (TFD == "AM" || TFD == "am")) {

				hr = 12;
				hr24 = 12;
				minu = 0;
				sec = 0;
				TFD = "PM";


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;




				cin >> choice;
			}

			// this statement will change the time only if the time is going to change from 11:59:59 am to 12:00:00 pm for both time types.

			else if (sec == 59 && minu == 59 && hr == 11 && (TFD == "AM" || TFD == "am")) {

				hr = 12;
				hr24 = 12;
				minu = 0;
				sec = 0;
				TFD = "PM";


				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;



				cin >> choice;
			}

			// this statement will change the time only if the time is going to change from 11:59:59 pm to 12:00:00 am and 00:00:00 am.

			else if (sec == 59 && minu == 59 && hr == 11 && (TFD == "Pm" || TFD == "pm")) {

				hr = 12;
				hr24 = 0;
				minu = 0;
				sec = 0;
				TFD = "Am";

				cout << "************************************************ " << " ******************************************************* \n" << endl;
				cout << "*           12- Hour Clock                      *   " << "   *                  24- Hour Clock                    * \n" << endl;
				cout << "*                " << hr << ":" << minu << ":" << sec << TFD << "                          *  " << "                " << hr24 << ":" << minu << ":" << sec << "          *" << endl;
				cout << "**************************************************  " << " ******************************************************" << endl;

				;




				cin >> choice;



			}

		}

		





	}

	cout << "Program Ended!" << endl;

		
	return 0;
	
}