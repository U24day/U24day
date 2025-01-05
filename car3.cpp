#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

#define RED     "\033[31m"
#define RESET   "\033[0m"

const double TAX_RATE = 0.18; 
const double rate = 7;

void Car_Categories() {
    cout << "---------------------------------\n";
    cout << "       Available Car Types       \n";
    cout << "---------------------------------\n";
    cout << "        1. Fuel Cars\n";
    cout << "   2. Electric Vehicles (EVs)\n";
    cout << "---------------------------------\n";
}

void Fuel_Cars() {
    cout << "---------------------------------\n";
    cout << "        Available Fuel Cars      \n";
    cout << "---------------------------------\n";
    cout << "         1. TATA Tigor\n";
    cout << "         2. TATA Nexon\n";
    cout << "         3. TATA Harrier\n";
    cout << "         4. TATA Safari\n";
    cout << "---------------------------------\n";
}

void EV_Cars() {
    cout << "---------------------------------\n";
    cout << "       Available Electric Cars   \n";
    cout << "---------------------------------\n";
    cout << "        1.TATA Curvv EV\n";
    cout << "        2.TATA Nexon EV\n";
    cout << "        3.TATA Punch EV\n";
    cout << "        4.TATA Tiago EV\n";
    cout << "---------------------------------\n";
}

void Color() {
    cout << "---------------------------------\n";
    cout << "        Available Colors         \n";
    cout << "---------------------------------\n";
    cout << "        1.Gray                   \n";
    cout << "        2.Black                  \n";
    cout << "        3.White                  \n";
    cout << "        4.Dark Blue              \n";
    cout << "---------------------------------\n";
}
void fuel_type(){
    cout << "---------------------------------\n";
    cout << "          Fuel Types             \n";
    cout << "---------------------------------\n";
    cout << "           1.Petrol              \n";
    cout << "           2.Diesel              \n";
    cout << "           3.Ethnol              \n";
    cout << "---------------------------------\n";

}

void Welcome() {
    cout << "------------------------------------------------------\n";
    cout << "|                Welcome to Tata Motors              |\n";
    cout << "|              Your Trusted Car Showroom             |\n";
    cout << "------------------------------------------------------\n";

}   

void Menu() {
    cout << " \n\n Please select an option :--  \n";
    cout << "---------------------------------\n";
    cout << "| 1.    View Car Models         |\n";
    cout << "---------------------------------\n"<<endl;

    cout << "---------------------------------\n";
    cout << "| 2.  Inquire About Pricing     | \n";
    cout << "---------------------------------\n"<<endl;
    
    cout << "---------------------------------\n";
    cout << "| 3.   Book a Test Drive        |\n";
    cout << "---------------------------------\n"<<endl;

    cout << "---------------------------------\n";
    cout << "| 4.        Buy a Car           |\n";
    cout << "---------------------------------\n"<<endl;

    cout << "---------------------------------\n";
    cout << "| 5.          Exit              |\n";
    cout << "---------------------------------\n"<<endl;

    cout << "Enter your choice: ";
}

void LoanEMI(double principal) {
    double period;
    cout <<endl<< "Enter loan period  (in years): ";
    cin >> period;
    double Rate = rate / (12 * 100); 
    int months = period * 12; 
    double emi = (principal * Rate * pow(1 + Rate, months)) / (pow(1 + Rate, months) - 1);
    cout << "-------------------------------------------------------\n";
    cout << "\n                 Loan Details:\n";
    cout << "-------------------------------------------------------\n";
    cout << "Principal Amount : $" << principal << endl;
    cout << "Interest Rate    : " << (Rate * 12 * 100) << "%" << endl;
    cout << "Loan Tenure      : " << period << " years (" << months << " months)" << endl;
    cout << "Monthly EMI      : $" << emi << endl;
    cout << "-------------------------------------------------------\n\n";
}

double InsuranceOptions() {
    cout << "\nInsurance Plans:\n";
    cout << "---------------------------------\n";
    cout << "1. Basic Insurance   - $500\n";
    cout << "2. Premium Insurance - $1000\n";
    cout << "3. No Insurance      - $0\n";
    cout << "---------------------------------\n";
    cout << "Select an insurance plan (1-3): ";
    
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: return 500.0;
        case 2: return 1000.0;
        case 3: return 0.0;
        default:
            cout << "Invalid choice. No insurance selected.\n";
            return 0.0;
    }
}

double WarrantyPlans() {
    cout << "\nExtended Warranty Plans:\n";
    cout << "---------------------------------\n";
    cout << "1. 1-Year Warranty  - $300\n";
    cout << "2. 3-Year Warranty  - $700\n";
    cout << "3. No Warranty      - $0\n";
    cout << "---------------------------------\n";
    cout << "Select a warranty plan (1-3): ";
    
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: return 300.0;
        case 2: return 700.0;
        case 3: return 0.0;
        default:
            cout << "Invalid choice. No warranty selected.\n";
            return 0.0;
    }
}

void Car_view() {
    int Choice;
    Car_Categories();
    cout << "Select category to view car models (1 for Fuel Cars, 2 for EVs): ";
    cin >> Choice;

    if (Choice == 1) {
        Fuel_Cars();
    } else if (Choice == 2) {
        EV_Cars();
    } else {
        cout <<RED<< "\nInvalid category choice. Returning to the main menu.\n"<<RESET;
    }
}

void Pricing(int Choice) {
    
    cout << "------------------------------------------------------\n";
    cout << "                  Car Pricing Details                 \n";
    cout << "------------------------------------------------------\n";
    if(Choice == 1){
        fuel_type();
        cout<<" Choose a fuel type (1 for petrol, 2 for Diesel and 3 for Ethnol ) :";
        int Fuel;
        cin >>Fuel;
        cout<<endl;
        if(Fuel < 1 || Fuel > 3){
        cout << RED << "\nInvalid Fuel choice. Return to Choose." << RESET << endl;
        return;
        }
    }

    if (Choice == 1) {  
        cout << "---------------------:Fuel Cars:----------------------\n\n";
        cout << "| 1. TATA Tigor         Starting from        $55,000 |\n";
        cout << "------------------------------------------------------\n";
        cout << "| 2. TATA Nexon         Starting from        $45,000 |\n";
        cout << "------------------------------------------------------\n";
        cout << "| 3. TATA Harrier       Starting from        $75,000 |\n";
        cout << "------------------------------------------------------\n";
        cout << "| 4. TATA Safari        Starting from        $85,000 |\n";
        cout << "------------------------------------------------------\n";

        cout << "\nYou like to calculate a loan EMI for any of these cars? (1 for Yes, 2 for No): ";
        int loanChoice;
        cin >> loanChoice;

        if (loanChoice == 1) {
             double carPrice;int carChoice;

             cout << "\nEnter the number of the car you are interested in for loan EMI calculation (1-4): ";

             cin >> carChoice;
             if (carChoice < 1 || carChoice > 4) {
                 cout << RED << "\nInvalid car selection. Returning to the main menu." << RESET << endl;
                return;
             }       
            switch (carChoice) {
                case 1: carPrice= 55000;
                break;
                case 2: carPrice= 45000;
                break;
                case 3: carPrice= 75000;
                break;
                case 4: carPrice= 85000;
                break;

             default:
                 cout <<RED<< "Invalid choice. No warranty selected.\n"<<RESET;
            return;
            }

             LoanEMI(carPrice);
        } 
        else if(Choice == 1){
            fuel_type();
            cout<<" Choose a fuel type (1 for petrol, 2 for Diesel and 3 for Ethnol ) :";
            int Fuel;
            cin >>Fuel;

            if (Fuel < 1 || Fuel > 3) {
            cout << RED << "\nInvalid Fuel choice. Returning to the main menu." << RESET << endl;
            return;
            }
            double fuelAdjustment = (Fuel == 1) ? 0 : (Fuel == 2) ? 3000 : 2000;

            cout << "\nFuel Adjustment Cost: $" << fuelAdjustment << " added to the base price.\n";
            cout << "Final prices adjusted for fuel type:\n\n";
            cout << "| 1. TATA Tigor         $ " << 55000 + fuelAdjustment << " |\n";
            cout << "| 2. TATA Nexon         $ " << 45000 + fuelAdjustment << " |\n";
            cout << "| 3. TATA Harrier       $ " << 75000 + fuelAdjustment << " |\n";
            cout << "| 4. TATA Safari        $ " << 85000 + fuelAdjustment << " |\n";

        }
        else {
            cout<<RED << "No EMI calculation selected. Returning to the main menu.\n"<<RESET;
         }


    } 
    else if (Choice == 2) { 
        cout << "--------------:Electric Vehicles (EVs):---------------\n\n";
        cout << "| 1. TATA Curvv EV      Starting from        $60,000 |\n";
        cout << "------------------------------------------------------\n";
        cout << "| 2. TATA Nexon EV      Starting from        $50,000 |\n";
        cout << "------------------------------------------------------\n";
        cout << "| 3. TATA Punch EV      Starting from        $65,000 |\n";
        cout << "------------------------------------------------------\n";
        cout << "| 4. TATA Tiago EV      Starting from        $35,000 |\n";
        cout << "------------------------------------------------------\n";

        cout << "\nYou like to calculate a loan EMI for any of these cars? (1 for Yes, 2 for No): ";
        int loanChoice;
        cin >> loanChoice;

        if (loanChoice == 1) {
             double carPrice;int carChoice;
             cout << "Enter the number of the car you are interested in for loan EMI calculation (1-4): ";
             cin >> carChoice;
             if (carChoice < 1 || carChoice > 4) {
                 cout << RED << "\nInvalid car selection. Returning to the main menu." << RESET << endl;
                return;
             }       
            switch (carChoice) {
                case 1: carPrice= 65000;
                break;
                case 2: carPrice= 50000;
                break;
                case 3: carPrice= 65000;
                break;
                case 4: carPrice= 35000;
                break;

             default:
                 cout << "Invalid choice. No warranty selected.\n";
            return;
            }

             LoanEMI(carPrice);
        } 
        else {
            cout << "No EMI calculation selected. Returning to the main menu.\n";
         }
    } 
    else {
        cout<<RED << "Invalid category selection.\n"<<RESET;
    }
    
}

bool isValidName(const string& name) {
        for (int i = 0; i < name.length(); i++) {
            if (!isalpha(name[i]) && name[i] != ' ') {
                return false;
            }
        }
    return true;
}

bool isValidPhoneNumber(const string& phone) {
    if (phone.length() != 10) {
        return false;
    }
    for (int i = 0; i < phone.length(); i++) {
        if (!isdigit(phone[i])) {
            return false;
        }
    }
    return true;
}

bool isValidAadhar(const string& aadhar) {

    if (aadhar.length() != 12) {
        return false;
    }
    for (int i = 0; i < aadhar.length(); i++) {
        if (!isdigit(aadhar[i])){
             return false;
        }
    }
    return true;
}

void Test_Drive() {
    string name, carModel;
    int yes;
    cout << "Enter the choice of licence (yes = 1 or no = 2): ";
    cin >> yes;
    if (yes == 1) {
        Car_view();

        cout << "Which car model would you like to test drive? ";
        cin >> carModel;  
        cout << "\nThank you for booking a test drive for the " << carModel << ".\n";
        cout << "Our team will contact you shortly.\n\n";
    } else {
        cout << "You are not eligible for a test drive without a license.\n";
    }
}

string Registration_Number(string states) {
    srand(time(0));
    int randomNum = rand() % 10000;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int year = 1900 + ltm->tm_year;
    string registrationNumber = states+ "-" + to_string(year) + "-" + to_string(randomNum);
    return registrationNumber;
}

string Receipt_Number() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string date = to_string(1900 + ltm->tm_year) + to_string(1 + ltm->tm_mon) +  to_string(ltm->tm_mday);
    srand(time(0));
    int randomNum = rand() % 10000;  
    string receiptNumber = "RCPT_" + date + "_" + to_string(randomNum);
    return receiptNumber;
    return "REC" + to_string(rand() % 1000000);
}

string VIN(string model, int year) {
    srand(time(0));
    string vinChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string vin = model + "-" + to_string(year);
    for (int i = 0; i < 4; i++) {
        vin += vinChars[rand() % vinChars.length()];
    }
    return vin;

}

void buyCar() {
    cout << "\n-------------: Buy a Car :-------------\n";
    int carChoice,Choice;
    Car_Categories();
    cout << "Select a category (1 for Fuel Cars, 2 for EVs): ";
    cin >> Choice;
    Pricing(Choice);  
    string carModels[4];
    double carPrices[4];
    double fuelAdjustment = 0;

    if (Choice == 1) {
        carModels[0] = "TATA Tigor";   carPrices[0] = 55000;
        carModels[1] = "TATA Nexon";   carPrices[1] = 45000;
        carModels[2] = "TATA Harrier"; carPrices[2] = 75000;
        carModels[3] = "TATA Safari";  carPrices[3] = 85000;
        fuel_type();
        cout << "Choose a fuel type (1 for Petrol, 2 for Diesel, 3 for Ethanol): ";
        int Fuel;
        cin >> Fuel;
        if (Fuel < 1 || Fuel > 3) {
            cout << RED << "\nInvalid Fuel choice. Returning to the main menu." << RESET << endl;
            return;
        }
        fuelAdjustment = (Fuel == 1) ? 0 : (Fuel == 2) ? 3000 : 2000;

    } 
    else if (Choice == 2) {
        carModels[0] = "TATA Curvv EV";carPrices[0] = 60000;
        carModels[1] = "TATA Nexon EV";carPrices[1] = 50000;
        carModels[2] = "TATA Punch EV";carPrices[2] = 65000;
        carModels[3] = "TATA Tiago EV";carPrices[3] = 35000;
    } else {
        cout << RED << "\nInvalid category choice. Returning to the main menu.\n" << RESET;
        return;
    }
    cout << "\nEnter the car model number (1-4) you wish to buy: ";
    cin >> carChoice;
    if (carChoice < 1 || carChoice > 4) {
        cout << RED << "\nInvalid car selection. Returning to the main menu.\n" << RESET << endl;
        return;
    }




    double insuranceCost = InsuranceOptions();
    double warrantyCost = WarrantyPlans();

    string carModel = carModels[carChoice - 1];
    double basePrice = carPrices[carChoice - 1]+ fuelAdjustment;
    double tax = basePrice * TAX_RATE;
    double totalCost = basePrice + tax;
    totalCost += insuranceCost + warrantyCost + tax;

    cout << "--------------------------------------------------------------------\n";
    cout << "|\n                  -:Total loan Summary:-                        |\n";
    cout << "--------------------------------------------------------------------\n";
    cout << "| Selected Car         :   " << carModel << endl;
    cout << "| Base Price           : $ " << basePrice << endl;
    cout << "| Tax (18%)            : $ " << tax << endl;
    cout << "| Insurance Cost       : $ " << insuranceCost << endl;
    cout << "| Warranty Cost        : $ " << warrantyCost << endl;
    cout << "| Total Cost           : $ " << totalCost << endl;
    cout << "--------------------------------------------------------------------\n";

    Color();
    string colors[] = {"Gray", "Black", "White", "Dark Blue"};
    cout << "Choose a color (1 for Gray, 2 for Black, 3 for White, 4 for Dark Blue): ";
    int color;
    cin >> color;
    string selectedColor = colors[color - 1];
    if (color < 1 || color > 4) {
        cout << RED << "\nInvalid color choice. Returning to the main menu." << RESET << endl;
        return;
    }
    fuel_type();
    string fuel[] = {"Petrol","Diesel","Ethnol"};
    cout<<" Choose a fuel type (1 for petrol, 2 for Diesel and 3 for Ethnol ) :";
    int Fuel;
    cin >>Fuel;
    string choose_fuel = fuel[Fuel-1];
    if(Fuel < 1 || Fuel > 3){
        cout << RED << "\nInvalid Fuel choice. Returning to the main menu." << RESET << endl;
        return;
    }

    string name, contactNumber, address, aadhar,states ;

    cout << "\nEnter your name: ";
    cin >> name;
    while (!isValidName(name)) {
        cout <<RED<< "Invalid name. Please enter a valid name (only letters and spaces): "<<RESET<<endl;
        cout << "\nEnter your name: ";
        cin >> name;
    }

    cout << "Enter your contact number: ";
    cin >> contactNumber;
    while (!isValidPhoneNumber(contactNumber)) {
        cout <<RED<< "Invalid phone number. Please enter a valid 10-digit phone number: "<<RESET<<endl;
        cout << "Enter your contact number: ";
        cin >> contactNumber;
    }

    cout << "Enter the Aadhar number: ";
    cin >> aadhar;
    while (!isValidAadhar(aadhar)) {
        cout <<RED<< "Invalid Aadhar number. Please enter a valid 12-digit Aadhar number "<<RESET<<endl;
        cout << "Enter the Aadhar number: ";
        cin >> aadhar;
    }

    cout << "Enter your address: ";
    cin>> address;
    cout << "Enter your state code (e.g., KA, DL, MH): ";
    cin >> states; 

    string receipt = Receipt_Number();
    string registrationNumber = Registration_Number(states);
    string vin = VIN(carModel, 2024);

    int loan_Choice;
    cout << "\nyou like to calculate loan EMI again after adding insurance and warranty? (1 for Yes, 2 for No): ";
    cin >> loan_Choice;
    if (loan_Choice == 1) {

        LoanEMI(totalCost);  
    }

    cout << "--------------------------------------------------------------------";
    cout << "\n                    -: Purchase Invoice :-                       \n";
    cout << "--------------------------------------------------------------------" << endl;
    cout << "| Customer Name :                " << name                         << endl;
    cout << "| Contact Number:                " << contactNumber                << endl;
    cout << "| Aadhar Number :                " << aadhar                       << endl;
    cout << "| Delivery Address:              " << address                      << endl;
    cout << "| Car Model:                     " << carModel                     << endl;
    cout << "| Color:                         " << selectedColor                << endl;
    cout << "| Registration Number:           " << registrationNumber           << endl;
    cout << "| VIN:                           " << vin                          << endl;
    cout << "| Base Price: $                  " << basePrice                    << endl;
    cout << "| Insurance Cost: $              " << insuranceCost                << endl;
    cout << "| Warranty Cost: $               " << warrantyCost                 << endl;
    cout << "| Tax (18%):  $                  " << tax                          << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "| Total Cost: $                  " << totalCost << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "          -: Thank you for choosing Tata Motors :-               " << endl << endl;
    cout << "Your car will be delivered soon..." << endl<<endl;

    ofstream outFile("Car_Purchase.txt");
    

    if (outFile.is_open()) {
        outFile << "-------------------------------------------------------------------\n";
        outFile << "|                     Welcome to Tata Motors                       |\n";
        outFile << "|                   Your Trusted Car Showroom                      |\n";
        outFile << "-------------------------------------------------------------------\n\n";
        outFile <<"Receipt Number        : "      << receipt                            <<endl;
        outFile <<"Customer Name         : "      << name                               <<endl;
        outFile <<"Phone Number          : "      << contactNumber                      <<endl;
        outFile <<"Aadhar Number         : "      << aadhar                             <<endl;
        outFile <<"Address               : "      << address                            <<endl;

        outFile << "-------------------------------------------------------------------";
        outFile << "\n                  -: Vehicle information :-                  \n";
        outFile << "-------------------------------------------------------------------" << endl;
        outFile <<"Company               : TATA Motors "                                  <<endl<<endl;
        outFile <<"Car Model             : "<<carModel                                    <<endl<<endl;
        outFile <<"Fuel type             : "<<choose_fuel                                 <<endl<<endl;
        outFile <<"Registration number   : "<<registrationNumber                          <<endl<<endl;
        outFile <<"VIN                   : "<<vin                                         <<endl<<endl;
        outFile <<"Color                 : "<<selectedColor                               <<endl<<endl;

        outFile << "-------------------------------------------------------------------";
        outFile << "\n                  -: Payment infomation :-                   \n";
        outFile << "-------------------------------------------------------------------" << endl;
        outFile << "| Base Price         : $ " << basePrice                      << endl;
        outFile<<  "| Insurance Cost     : $ " << insuranceCost                  << endl;
        outFile << "| Warranty Cost      : $ " << warrantyCost                   << endl;
        outFile << "| Tax (18%)          : $ " << tax                            << endl;
        outFile << "-------------------------------------------------------------------" << endl;
        outFile << "| Total Cost         : $ " << totalCost                      << endl;
        outFile << "-------------------------------------------------------------------" << endl;

        outFile << endl << endl;
        outFile << "          -: Thank you for choosing Tata Motors :-               " << endl << endl;
        outFile<< "Your car will be delivered soon..." << endl;
        outFile.close();
        
    } else {
        cout << RED << "Unable to save purchase details to file." << RESET << endl;
    }

    


}

int main() {
    Welcome();
    int choice;
    do {
        Menu();
        cin >> choice;
        switch (choice) {
            case 1: Car_view(); break;
            case 2: {
                int category;
                cout << "Enter category (1 for Fuel Cars, 2 for EVs): ";
                cin >> category;
                Pricing(category);
                break;
            }
            case 3: 
                Test_Drive(); 
                break;
            case 4: 
                buyCar(); 
                break;
            case 5: 
                cout << "\nThank you for visiting Tata Motors. Goodbye!\n"; break;
            default: 
                cout <<RED<< "\nInvalid choice. Please try again.\n"<<RESET;
        }
    } while (choice != 5);

    ifstream outFile;
    string line;
    outFile.open("Car_Purchase.txt");
    while(getline(outFile,line)){
        cout<< line <<endl;

    }
    outFile.close();
    return 0;
}
