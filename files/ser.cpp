#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

#define WIDTH 40

class research
{
    public:
        int constRes = 0;
        int milRes = 0;
        int ecoRes = 0;
        int dipRes = 0;

        research ()
        {
            return;
        }

        void doRes()
        {
            cout << setw(WIDTH) << setfill('-') << "" << endl;
            cout << setw((WIDTH+8)/2) << setfill(' ') << "RESEARCH" << endl;
            cout << setw(WIDTH) << setfill('-') << "" << endl;

            int opt;

            cout << "what would you like to build ?" << endl;
            cout << "1. Infrastructure" << "\n2. Military" << "\n3. Economy" << "\n4. Diplomatics" << "\n5. Exit" << endl;
            cout << ">>";
            cin >> opt;
        }
        void showRes()
        {
            return;
        }
};


class services : public research
{
    public:
        int eduCenter = 0;
        int hos = 0;
        int publService = 0;
        int jobOpps = 0;

        int constuctTime = 1/(1+this->constRes)*120;

        services ()
        {
            return;
        }

        void createSer()
        {
            cout << setw(WIDTH) << setfill('-') << "" << endl;
            cout << setw((WIDTH+8)/2) << setfill(' ') << "SERVICES" << endl;
            cout << setw(WIDTH) << setfill('-') << "" << endl;

            int opt;

            cout << "what would you like to build ? (Takes " << this->constuctTime << " secs)" << endl;
            cout << "1. Education Center" << "\n2. Hospital" << "\n3. Public Services" << "\n4. Jobs" << "\n5. Exit" << endl;
            cout << ">>";
            cin >> opt;

            if (opt == 5)
            {
                return;
            }
            
            this_thread::sleep_for(chrono::seconds(constuctTime));

            switch (opt)
            {
                case 1: eduCenter++; cout << "Education Center Has been built." << endl;
                    break;

                case 2: this->hos++; cout << "Hospital has been built." << endl;
                    break;

                case 3: this->publService++; cout << "Public Services has been built." << endl;
                    break;

                case 4: this->jobOpps++; cout << "More Jobs are created." << endl;
                    break;

                default: cout << "No Command assigned." << endl;
                    break;
            }

        }

        void showSer()
        {
            cout << setw(WIDTH) << setfill('-') << "" << endl;
            cout << setw((WIDTH+8)/2) << setfill(' ') << "SERVICES" << endl;
            cout << setw(WIDTH) << setfill('-') << "" << endl;
            cout << "|Edu Centers: " << this->eduCenter << setw((WIDTH-14-(to_string(this->eduCenter).length()))) << setfill(' ') << '|' << endl;
            cout << "|Hospitals: " << this->hos << setw(WIDTH-12-to_string(this->hos).length()) << setfill(' ') << '|' << endl;
            cout << "|Public Services: " << this->publService << setw(WIDTH-18-to_string(this->publService).length()) << setfill(' ') << '|' << endl;
            cout << "|Jobs: " << this->jobOpps << setw(WIDTH-7-to_string(this->jobOpps).length()) << setfill(' ') << '|' << endl;
            cout << setw(WIDTH) << setfill('-') << "" << endl;
        }
};

int main()
{
    services s = services();

    s.createSer();
    s.showSer();

    s.doRes();
    return 0;
}