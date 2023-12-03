#include <iostream>
#include <string>
using namespace std;

const int MAX_DOCTORS = 10;
const int MAX_PATIENTS = 10;
const int MAX_APPOINTMENTS = 10;

struct Patient
{
    string name;
    int age = 0;
    string address;
};

struct Doctor
{
    string name;
    string specialization;
};

struct Appointment
{
    string date;
    string time;
    Doctor doctor;
    Patient patient;
};

struct Hospital
{
    string name;
    Doctor doctors[MAX_DOCTORS];
    int numDoctors;
    Patient patients[MAX_PATIENTS];
    int numPatients;
    Appointment appointments[MAX_APPOINTMENTS];
    int numAppointments;
};

void addDoctor(Hospital &hospital, const Doctor &doc)
{
    if (hospital.numDoctors < MAX_DOCTORS)
    {
        hospital.doctors[hospital.numDoctors] = doc;
        hospital.numDoctors++;
    }
}

void addPatient(Hospital &hospital, const Patient &pat)
{
    if (hospital.numPatients < MAX_PATIENTS)
    {
        hospital.patients[hospital.numPatients] = pat;
        hospital.numPatients++;
    }
}

void scheduleAppointment(Hospital &hospital, const Appointment &app)
{
    if (hospital.numAppointments < MAX_APPOINTMENTS)
    {
        hospital.appointments[hospital.numAppointments] = app;
        hospital.numAppointments++;
    }
}

void displayAppointments(const Hospital &hospital)
{
    cout << "Appointments:\n";
    for (int i = 0; i < hospital.numAppointments; i++)
    {
        const Appointment &app = hospital.appointments[i];
        cout << "Date: " << app.date << "\n";
        cout << "Time: " << app.time << "\n";
        cout << "Doctor: " << app.doctor.name << "\n";
        cout << "Patient: " << app.patient.name << "\n";
        cout << "-----------------\n";
    }
}

void displayDoctors(const Hospital &hospital)
{
    cout << "Doctors:\n";
    for (int i = 0; i < hospital.numDoctors; i++)
    {
        const Doctor &doc = hospital.doctors[i];
        cout << "Name: " << doc.name << "\n";
        cout << "Specialization: " << doc.specialization << "\n";
        cout << "-----------------\n";
    }
}

void displayPatients(const Hospital &hospital)
{
    cout << "Patients:\n";
    for (int i = 0; i < hospital.numPatients; i++)
    {
        const Patient &pat = hospital.patients[i];
        cout << "Name: " << pat.name << "\n";
        cout << "Age: " << pat.age << "\n";
        cout << "Address: " << pat.address << "\n";
        cout << "-----------------\n";
    }
}

int main()
{
    Hospital hospital;
    hospital.name = "ABC Hospital";
    hospital.numDoctors = 0;
    hospital.numPatients = 0;
    hospital.numAppointments = 0;

    int choice;
    int *pointer = &choice;

    cout << "Welcome to ABC Hospital Inc." << endl;
    while (true)
    {
        cout << "Choose an option:\n";
        cout << "1. Add a doctor\n";
        cout << "2. Add a patient\n";
        cout << "3. Schedule an appointment\n";
        cout << "4. Display appointments\n";
        cout << "5. View list of doctors\n";
        cout << "6. View list of patients\n";
        cout << "7. Exit\n";
        cin >> *pointer;

        switch (choice)
        {
            case 1:
            {
                Doctor doc;
                cout << "Enter doctor's name: ";
                cin >> doc.name;
                cout << "Enter doctor's specialization: ";
                cin >> doc.specialization;
                addDoctor(hospital, doc);
                break;
            }
            case 2:
            {
                Patient pat;
                cout << "Enter patient's name: ";
                cin >> pat.name;
                cout << "Enter patient's age: ";
                cin >> pat.age;
                cout << "Enter patient's address: ";
                cin >> pat.address;
                addPatient(hospital, pat);
                break;
            }
            case 3:
            {
                if (hospital.numDoctors == 0 || hospital.numPatients == 0)
                {
                    cout << "Please add doctors and patients before scheduling appointments.\n";
                    break;
                }
                int doctorIndex, patientIndex;
                string date, time;
                cout << "Available Doctors:\n";
                displayDoctors(hospital);
                cout << "Select a doctor: ";
                cin >> doctorIndex;
                doctorIndex--;
                cout << "Available Patients:\n";
                displayPatients(hospital);
                cout << "Select a patient: ";
                cin >> patientIndex;
                patientIndex--;
                cout << "Enter date (YYYY-MM-DD): ";
                cin >> date;
                cout << "Enter time (HH:MM AM/PM): ";
                cin >> time;
                Appointment app{date, time, hospital.doctors[doctorIndex], hospital.patients[patientIndex]};
                scheduleAppointment(hospital, app);
                break;
            }
            case 4:
                displayAppointments(hospital);
                break;
            case 5:
                displayDoctors(hospital);
                break;
            case 6:
                displayPatients(hospital);
                break;
            case 7:
                cout << "Thank you for using ABC Hospital Inc. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
        cout << "----------------------------------------\n";
    }
    return 0;
}