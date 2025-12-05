#ifndef SERV_H
#define SERV_H

using namespace std;

// Classes

class research
{
    // Class vars for Research
    public:

    // Functions

        void doRes();
        void showRes();
        void res2(int opt);
    
    // Variables

        int constRes = 0;
        int milRes = 0;
        int ecoRes = 0;
        int dipRes = 0;

        research ();
};

class services: public research
{
    // Class Vars for Service

    public:

        // Functions

        void createSer();
        void showSer();
        void ser2(int opt);

        // Variables

        int eduCenter = 0;
        int hos = 0;
        int publService = 0;
        int jobOpps = 0;

        services ();
};

#endif
