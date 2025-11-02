#ifndef SERV_H
#define SERV_H

using namespace std;

class services : public research
{
    protected:
        int eduCenter = 0;
        int hos = 0;
        int publService = 0;
        int jobOpps = 0;

        services ();

        void createSer();
        void showSer();
};

class research
{
    protected:
        int constRes = 0;
        int milRes = 0;
        int ecoRes = 0;
        int dipRes = 0;

        research ();

        void doRes();
        void showRes();
};

#endif
