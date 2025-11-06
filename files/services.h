#ifndef SERV_H
#define SERV_H

using namespace std;

// Classes

class research
{
    // Class vars for Research
    protected:
        int constRes = 0;
        int milRes = 0;
        int ecoRes = 0;
        int dipRes = 0;

        research ();

        // Fucns
        void doRes();
        void showRes();
};

class services: public research
{
    // Class Vars for Service
    protected:
        int eduCenter = 0;
        int hos = 0;
        int publService = 0;
        int jobOpps = 0;

        services ();

        // Fucns
        void createSer();
        void showSer();
};

#endif
