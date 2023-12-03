#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Patient
{
    string name;
    int age;
    string gender;
    string condition;
    int id;         // New variable for patient ID
    string contact; // New variable for patient contact information
    double price;   // New variable for patient expenditure
};

struct Doctor
{
    string name;
    string specialization;
    string phoneNumber;
    string email;
};

struct Appointment
{
    Patient *patient;
    Doctor *doctor;
    string date;
    string time;
};

struct Hospital
{
    string name;
    string location;
    Appointment *appointments[100]; // Assuming a maximum of 100 appointments
    int appointmentCount;
    Doctor *doctors[100]; // Assuming a maximum of 100 doctors
    int doctorCount;

    int available_beds;
    int rating;
    string contact;
    string doctor_name;
    double price;
};

void ValidateEmail(string &email)
{
    if (!(email.find('@') != string::npos && email.find('.') != string::npos))
    {
        cout << "Please enter a valid email address: ";
        getline(cin, email);
        ValidateEmail(email);
    }
}
void displayMenu()
{
    cout << "Hospital Management System" << endl;
    cout << "--------------------------" << endl;
    cout << "1. Schedule an Appointment" << endl;
    cout << "2. View Appointments" << endl;
    cout << "3. View Doctors" << endl;
    cout << "4. Add Doctor" << endl;
    cout << "5. Print Hospital Data" << endl;
    cout << "6. Print Patient Data" << endl;
    cout << "7. Print Hospitals by City" << endl;
    cout << "8. Sort Hospitals by Rating" << endl;
    cout << "9. Sort Hospitals by Available Beds" << endl;
    cout << "10. Sort Hospitals by Price per Bed" << endl;
    cout << "11. Exit" << endl;
    cout << "--------------------------" << endl;
}


void scheduleAppointment(Hospital &hospital)
{
    if (hospital.appointmentCount >= 100)
    {
        cout << "Maximum appointments reached. Cannot schedule more appointments." << endl;
        return;
    }

    Appointment *appointment = new Appointment;
    Patient *patient = new Patient;
    Doctor *doctor = new Doctor;

    cout << "Enter patient details:" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, patient->name);
    cout << "Age: ";
    cin >> patient->age;
    cout << "Gender: ";
    cin.ignore();
    getline(cin, patient->gender);
    cout << "Medical Condition: ";
    getline(cin, patient->condition);

    cout << endl
         << "Enter doctor details:" << endl;
    cout << "Name: ";
    getline(cin, doctor->name);
    cout << "Specialization: ";
    getline(cin, doctor->specialization);
    cout << "Phone Number: ";
    getline(cin, doctor->phoneNumber);
    cout << "Email: ";
    getline(cin, doctor->email);

    appointment->patient = patient;
    appointment->doctor = doctor;

    cout << endl
         << "Enter appointment details:" << endl;
    cout << "Date: ";
    cin.ignore();
    getline(cin, appointment->date);
    cout << "Time: ";
    getline(cin, appointment->time);

    hospital.appointments[hospital.appointmentCount++] = appointment;

    cout << endl
         << "Appointment scheduled successfully!" << endl;
}

void viewAppointments(const Hospital &hospital)
{
    cout << "Appointments:" << endl;

    if (hospital.appointmentCount == 0)
    {
        cout << "No appointments scheduled." << endl;
    }
    else
    {
        for (int i = 0; i < hospital.appointmentCount; i++)
        {
            const Appointment *appointment = hospital.appointments[i];
            cout << "Patient: " << appointment->patient->name << endl;
            cout << "Doctor: " << appointment->doctor->name << endl;
            cout << "Date: " << appointment->date << endl;
            cout << "Time: " << appointment->time << endl;
            cout << "--------------------------" << endl;
        }
    }
}

void viewDoctors(const Hospital &hospital)
{
    cout << "Doctors:" << endl;

    if (hospital.doctorCount == 0)
    {
        cout << "No doctors available." << endl;
    }
    else
    {
        for (int i = 0; i < hospital.doctorCount; i++)
        {
            const Doctor *doctor = hospital.doctors[i];
            cout << "Name: " << doctor->name << endl;
            cout << "Specialization: " << doctor->specialization << endl;
            cout << "Phone Number: " << doctor->phoneNumber << endl;
            cout << "Email: " << doctor->email << endl;
            cout << "--------------------------" << endl;
        }
    }
}

void addDoctor(Hospital &hospital)
{
    if (hospital.doctorCount >= 100)
    {
        cout << "Maximum doctors reached. Cannot add more doctors." << endl;
        return;
    }

    Doctor *doctor = new Doctor;
    cout << "Enter doctor details:" << endl;
    cout << "Name: ";
    cin.ignore();
    getline(cin, doctor->name);
    cout << "Specialization: ";
    getline(cin, doctor->specialization);
    cout << "Phone Number: ";
    getline(cin, doctor->phoneNumber);
    cout << "Email: ";
    getline(cin, doctor->email);
    ValidateEmail(doctor->email);

    hospital.doctors[hospital.doctorCount++] = doctor;

    cout << endl
         << "Doctor added successfully!" << endl;
}

void deleteAppointments(Hospital &hospital)
{
    for (int i = 0; i < hospital.appointmentCount; i++)
    {
        delete hospital.appointments[i]->patient;
        delete hospital.appointments[i]->doctor;
        delete hospital.appointments[i];
    }
    for (int i = 0; i < hospital.doctorCount; i++)
    {
        delete hospital.doctors[i];
    }
}

void PrintHospitalData(vector<Hospital> &hospitals)
{
    cout << "PRINT hospitals DATA:" << endl;
    cout << "HospitalName     "
         << "Location."
         << "Beds_Available     "
         << "Rating."
         << "Hospital_Contact     "
         << "Doctor_Name     "
         << "Price_Per_Bed     \n";
    for (int i = 0; i < 4; i++)
    {
        cout << hospitals[i].name << "                 "
             << "        "
             << hospitals[i].location << "           "
             << hospitals[i].available_beds << "                    "
             << hospitals[i].rating << "            "
             << hospitals[i].contact << "             "
             << hospitals[i].doctors[i]->name << "                  "
             << "        "
             << hospitals[i].price << "            " << endl;
    }
    cout << endl
         << endl;
}

void PrintPatientData(vector<Patient> &patients, vector<Hospital> &hospitals)
{
    cout << "PRINT patients DATA:" << endl;
    cout << "Patient_Name     "
         << "Patient_Id     "
         << "Patient_Contact     "
         << "Alloted_Hospital     "
         << "Patient_Expenditure     \n";
    for (int i = 0; i < 4; i++)
    {
        cout << patients[i].name << "                "
             << "          "
             << patients[i].id << "              "
             << "          "
             << patients[i].contact << "                   "
             << hospitals[i].name << "                   "
             << patients[i].price << "            "
             << endl;
    }
    cout << endl
         << endl;
}

bool rating(const Hospital &A, const Hospital &B)
{
    return A.rating > B.rating;
}

void SortHospitalByRating(vector<Hospital> &hospitals)
{
    sort(hospitals.begin(), hospitals.end(), rating);
    cout << "SORT BY Rating:" << endl
         << endl;
    PrintHospitalData(hospitals);
}

bool beds(const Hospital &A, const Hospital &B)
{
    return A.available_beds > B.available_beds;
}

void SortByBedsAvailable(vector<Hospital> &hospitals)
{
    sort(hospitals.begin(), hospitals.end(), beds);
    cout << "SORT BY Available Beds:" << endl
         << endl;
    PrintHospitalData(hospitals);
}

bool beds_price(const Hospital &A, const Hospital &B)
{
    return A.price < B.price;
}

void SortByBedsPrice(vector<Hospital> &hospitals)
{
    sort(hospitals.begin(), hospitals.end(), beds_price);
    cout << "SORT BY Available Beds Price:" << endl
         << endl;
    PrintHospitalData(hospitals);
}

void PrintHospitalByCity(const string &city, const vector<Hospital> &hospitals)
{
    cout << "PRINT hospitals by Name: " << city << endl;
    cout << "HospitalName     "
         << "Location."
         << "Beds_Available     "
         << "Rating."
         << "Hospital_Contact     "
         << "Doctor_Name     "
         << "Price_Per_Bed     \n";
    for (int i = 0; i < 4; i++)
    {
        if (hospitals[i].location != city)
            continue;
        cout << hospitals[i].name << "                  "
             << "       "
             << hospitals[i].location << "           "
             << hospitals[i].available_beds << "                    "
             << hospitals[i].rating << "            "
             << hospitals[i].contact << "             "
             << hospitals[i].doctors[i]->name << "                "
             << "          "
             << hospitals[i].price << "            "
             << endl;
    }
    cout << endl
         << endl;
}

int main()
{
    vector<Hospital> hospitals(4);
    hospitals[0].name = "PIMS";
    hospitals[0].location = "ISLAMABAD, PAKISTAN";
    hospitals[0].appointmentCount = 0;
    hospitals[0].doctorCount = 0;

    hospitals[1].name = "XYZ Hospital";
    hospitals[1].location = "Lahore, PAKISTAN";
    hospitals[1].appointmentCount = 0;
    hospitals[1].doctorCount = 0;

    hospitals[2].name = "ABC Hospital";
    hospitals[2].location = "Karachi, PAKISTAN";
    hospitals[2].appointmentCount = 0;
    hospitals[2].doctorCount = 0;

    hospitals[3].name = "DEF Hospital";
    hospitals[3].location = "Rawalpindi, PAKISTAN";
    hospitals[3].appointmentCount = 0;
    hospitals[3].doctorCount = 0;

    // Dummy doctor data
    hospitals[0].doctors[hospitals[0].doctorCount++] = new Doctor{"Dr. John", "General Physician", "1234567890", "john@example.com"};
    hospitals[0].doctors[hospitals[0].doctorCount++] = new Doctor{"Dr. Emily", "Cardiologist", "0987654321", "emily@example.com"};

    // Dummy patient data
    hospitals[0].appointments[hospitals[0].appointmentCount++] = new Appointment{new Patient{"John Doe", 35, "Male", "Fever", 1, "9876543210", 2000.0}, hospitals[0].doctors[0], "2023-06-07", "10:00 AM"};
    hospitals[0].appointments[hospitals[0].appointmentCount++] = new Appointment{new Patient{"Sarah Smith", 45, "Female", "Back pain", 2, "1234567890", 3000.0}, hospitals[0].doctors[1], "2023-06-08", "11:00 AM"};

    vector<Patient> patients(4);
    patients[0] = {"John Doe", 35, "Male", "Fever", 1, "9876543210", 2000.0};
    patients[1] = {"Sarah Smith", 45, "Female", "Back pain", 2, "1234567890", 3000.0};
    patients[2] = {"David Johnson", 50, "Male", "Headache", 3, "1098765432", 1500.0};
    patients[3] = {"Lisa Brown", 28, "Female", "Cough", 4, "2345678901", 2500.0};

    int choice;

    do
    {
        displayMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            scheduleAppointment(hospitals[0]);
            break;
        case 2:
            viewAppointments(hospitals[0]);
            break;
        case 3:
            viewDoctors(hospitals[0]);
            break;
        case 4:
            addDoctor(hospitals[0]);
            break;
        case 5:
            deleteAppointments(hospitals[0]);
            cout << "Exiting the program. Thank you!" << endl;
            break;
        case 6:
            PrintHospitalData(hospitals);
            break;
        case 7:
            PrintPatientData(patients, hospitals);
            break;
        case 8:
            PrintHospitalByCity("ISLAMABAD, PAKISTAN", hospitals);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        cout << "--------------------------" << endl;

    } while (choice != 5);

    return 0;
}
