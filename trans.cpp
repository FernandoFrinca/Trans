#include <iostream>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <iomanip>
using namespace std;

fstream f("1.txt");
int main()
{
    int i,o,u,r,j,n=10,m=10,k,aux,s;
    float p,aux2;
    char q,aux1[100],aux3[100];
    struct trans
    {
        int km;
        int kg;
        float pret;
        float timp;
        float profit;
        char loc[100];
        char pod[100];
    };
    trans arbz,isb,bmcv,rsga,orza,giov,sibo,tmco,cvvs,dvbv;
    struct tot
    {
        int tkm;
        int tkg;
        float tpret;
        float ttimp;
        int tprofit;
        char tloc[100];
        char tpod[100];
    };
    tot total[100];
    struct schimbare
    {
        int skg;
        float spret;
    };
    schimbare schimb[100];
    //citirea din fisier
    f>>arbz.loc;
    f>>arbz.pod;
    f>>arbz.kg;
    f>>arbz.pret;
    f>>arbz.km;
    f>>arbz.timp;
    f>>isb.loc;
    f>>isb.pod;
    f>>isb.kg;
    f>>isb.pret;
    f>>isb.km;
    f>>isb.timp;
    f>>bmcv.loc;
    f>>bmcv.pod;
    f>>bmcv.kg;
    f>>bmcv.pret;
    f>>bmcv.km;
    f>>bmcv.timp;
    f>>rsga.loc;
    f>>rsga.pod;
    f>>rsga.kg;
    f>>rsga.pret;
    f>>rsga.km;
    f>>rsga.timp;
    f>>orza.loc;
    f>>orza.pod;
    f>>orza.kg;
    f>>orza.pret;
    f>>orza.km;
    f>>orza.timp;
    f>>giov.loc;
    f>>giov.pod;
    f>>giov.kg;
    f>>giov.pret;
    f>>giov.km;
    f>>giov.timp;
    f>>sibo.loc;
    f>>sibo.pod;
    f>>sibo.kg;
    f>>sibo.pret;
    f>>sibo.km;
    f>>sibo.timp;
    f>>tmco.loc;
    f>>tmco.pod;
    f>>tmco.kg;
    f>>tmco.pret;
    f>>tmco.km;
    f>>tmco.timp;
    f>>cvvs.loc;
    f>>cvvs.pod;
    f>>cvvs.kg;
    f>>cvvs.pret;
    f>>cvvs.km;
    f>>cvvs.timp;
    f>>dvbv.loc;
    f>>dvbv.pod;
    f>>dvbv.kg;
    f>>dvbv.pret;
    f>>dvbv.km;
    f>>dvbv.timp;
    //schimbare structura
    //km
    total[1].tkm=arbz.km;
    total[2].tkm=isb.km;
    total[3].tkm=bmcv.km;
    total[4].tkm=rsga.km;
    total[5].tkm=orza.km;
    total[6].tkm=giov.km;
    total[7].tkm=sibo.km;
    total[8].tkm=tmco.km;
    total[9].tkm=cvvs.km;
    total[10].tkm=dvbv.km;
    //kg
    total[1].tkg=arbz.kg;
    total[2].tkg=isb.kg;
    total[3].tkg=bmcv.kg;
    total[4].tkg=rsga.kg;
    total[5].tkg=orza.kg;
    total[6].tkg=giov.kg;
    total[7].tkg=sibo.kg;
    total[8].tkg=tmco.kg;
    total[9].tkg=cvvs.kg;
    total[10].tkg=dvbv.kg;
    //pret
    total[1].tpret=arbz.pret;
    total[2].tpret=isb.pret;
    total[3].tpret=bmcv.pret;
    total[4].tpret=rsga.pret;
    total[5].tpret=orza.pret;
    total[6].tpret=giov.pret;
    total[7].tpret=sibo.pret;
    total[8].tpret=tmco.pret;
    total[9].tpret=cvvs.pret;
    total[10].tpret=dvbv.pret;
    //timp
    total[1].ttimp=arbz.timp;
    total[2].ttimp=isb.timp;
    total[3].ttimp=bmcv.timp;
    total[4].ttimp=rsga.timp;
    total[5].ttimp=orza.timp;
    total[6].ttimp=giov.timp;
    total[7].ttimp=sibo.timp;
    total[8].ttimp=tmco.timp;
    total[9].ttimp=cvvs.timp;
    total[10].ttimp=dvbv.timp;
    //loc
    strcpy(total[1].tloc,arbz.loc);
    strcpy(total[2].tloc,isb.loc);
    strcpy(total[3].tloc,bmcv.loc);
    strcpy(total[4].tloc,rsga.loc);
    strcpy(total[5].tloc,orza.loc);
    strcpy(total[6].tloc,giov.loc);
    strcpy(total[7].tloc,sibo.loc);
    strcpy(total[8].tloc,tmco.loc);
    strcpy(total[9].tloc,cvvs.loc);
    strcpy(total[10].tloc,dvbv.loc);
    //produs
    strcpy(total[1].tpod,arbz.pod);
    strcpy(total[2].tpod,isb.pod);
    strcpy(total[3].tpod,bmcv.pod);
    strcpy(total[4].tpod,rsga.pod);
    strcpy(total[5].tpod,orza.pod);
    strcpy(total[6].tpod,giov.pod);
    strcpy(total[7].tpod,sibo.pod);
    strcpy(total[8].tpod,tmco.pod);
    strcpy(total[9].tpod,cvvs.pod);
    strcpy(total[10].tpod,dvbv.pod);
    //schimbare;
    //pret
    schimb[1].spret=arbz.pret;
    schimb[2].spret=isb.pret;
    schimb[3].spret=bmcv.pret;
    schimb[4].spret=rsga.pret;
    schimb[5].spret=orza.pret;
    schimb[6].spret=giov.pret;
    schimb[7].spret=sibo.pret;
    schimb[8].spret=tmco.pret;
    schimb[9].spret=cvvs.pret;
    schimb[10].spret=dvbv.pret;
    //kg
    schimb[1].skg=arbz.kg;
    schimb[2].skg=isb.kg;
    schimb[3].skg=bmcv.kg;
    schimb[4].skg=rsga.kg;
    schimb[5].skg=orza.kg;
    schimb[6].skg=giov.kg;
    schimb[7].skg=sibo.kg;
    schimb[8].skg=tmco.kg;
    schimb[9].skg=cvvs.kg;
    schimb[10].skg=dvbv.kg;

//for(j=1;j<=10;j++)
    //cout<<schimb[j].skg<<" "<<schimb[j].spret<<endl;
//meniu
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
    cout<<"               hddddddddddddd   hdddddddy+.           odd/         -ddd:         /dh     `/sdmNMNNd/        "<<endl;
    cout<<"               :::::yMN:::::-  .MM/::::+dMN-         yMmMd         sMNMN-        hMy    +NNo:.``.:o-        "<<endl;
    cout<<"                    dMs        oMm      `MMo       `hMo-MM-        NM+sMN.      `MM:   /MM.                 "<<endl;
    cout<<"                   .MM-        mMo      +MN.      `dM+  dMy       :MM. yMN.     +MN    +MM+                 "<<endl;
    cout<<"                   oMm        -MM-...-+hMy.      .mM/   +MN`      yMh   yMm`    dMs     oNMNy/`             "<<endl;
    cout<<"                   mMo        sMMNNMMMd:`       -NN:    MM+       NM/   hMd    .MM-     :smMMh/           "<<endl;
    cout<<"                  -MM.        NM+   :mMh`      /MMmyyyyyyNMm     :MM`    dMd   oMm         .oMMy          "<<endl;
    cout<<"                  sMd        :MM`    `mMh     +Mm+///////oMM:    yMh      `dMh mMo             yMN          "<<endl;
    cout<<"                  NM+        yMh      .NMy   sMm.         mMh   `MM/       `mMhMM.   :-       /NM/          "<<endl;
    cout<<"                 :MM`        NM/       :MMo  yMd          oMM.  /MN         .mMMd    dMMmhhhdNms.           "<<endl;
    cout<<"                 -.        `--         .--`  --            --   .-.            --     -://:-              "<<endl;
    cout<<endl<<endl;
    cout<<"_______________"<<endl;
    cout<<"|1.Curse:     |"<<endl;
    cout<<"|2.Informatii:|"<<endl;
    cout<<"|3.Iesire     |"<<endl;
    cout<<"|_____________|"<<endl;
    cout<<"Introduceti optiunea:";
    cin>>o;
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
    while(o!=4)
    {
        switch(o)
        {
        case 1:
        {
            system("cls");
            cout<<"               hddddddddddddd   hdddddddy+.           odd/         -ddd:         /dh     `/sdmNMNNd/        "<<endl;
            cout<<"               :::::yMN:::::-  .MM/::::+dMN-         yMmMd         sMNMN-        hMy    +NNo:.``.:o-        "<<endl;
            cout<<"                    dMs        oMm      `MMo       `hMo-MM-        NM+sMN.      `MM:   /MM.                 "<<endl;
            cout<<"                   .MM-        mMo      +MN.      `dM+  dMy       :MM. yMN.     +MN    +MM+                 "<<endl;
            cout<<"                   oMm        -MM-...-+hMy.      .mM/   +MN`      yMh   yMm`    dMs     oNMNy/`             "<<endl;
            cout<<"                   mMo        sMMNNMMMd:`       -NN:    MM+       NM/   hMd    .MM-     :smMMh/           "<<endl;
            cout<<"                  -MM.        NM+   :mMh`      /MMmyyyyyyNMm     :MM`    dMd   oMm         .oMMy          "<<endl;
            cout<<"                  sMd        :MM`    `mMh     +Mm+///////oMM:    yMh      `dMh mMo             yMN          "<<endl;
            cout<<"                  NM+        yMh      .NMy   sMm.         mMh   `MM/       `mMhMM.   :-       /NM/          "<<endl;
            cout<<"                 :MM`        NM/       :MMo  yMd          oMM.  /MN         .mMMd    dMMmhhhdNms.           "<<endl;
            cout<<"                 -.        `--         .--`  --            --   .-.            --     -://:-              "<<endl;
            cout<<endl<<endl;
            cout<<"Curse/Ordonare:"<<endl;
            cout<<"_________________________________________________"<<endl;
            cout<<"|Curse:                 |Ordonare:              |"<<endl;
            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
            cout<<"|10.Deva-Brasov         |                       |"<<endl;
            cout<<"|_______________________|_______________________|"<<endl;
            cout<<"Introduceti optiunea:";
            cin>>u;
            while(u!=17)
            {
                switch(u)
                {
                case 1:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"1.ARAD-BUZAU"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<arbz.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<arbz.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[1].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[1].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<arbz.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<arbz.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:"<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN. _ARAD                                                                 -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/  |                                                                     `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.   |                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``        |                                                                    -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`          |                                                                    :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy         \\                                                                    `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`        \\____________________________                                        hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                     \\_____________                          oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                  \\                         -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                 \\                          yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                              \\                           `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                \\                                      -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                \\__BUZAU                      -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>arbz.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>arbz.kg;
                        cout<<endl;

                        cout<<"1.ARAD-BUZAU"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<arbz.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<arbz.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<arbz.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:";
                        cout<<arbz.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<arbz.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<arbz.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:"<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN. _ARAD                                                                 -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/  |                                                                     `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.   |                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``        |                                                                    -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`          |                                                                    :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy         \\                                                                    `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`        \\____________________________                                        hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                     \\_____________                          oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                  \\                         -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                 \\                          yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                              \\                           `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                \\                                      -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                \\__BUZAU                      -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(arbz.pret>3.4)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(arbz.kg<18000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                cout<<"_________________________________________________"<<endl;
                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                cout<<"|_______________________|_______________________|"<<endl;
                                cout<<"Introduceti obtiunea:";
                            }
                        }
                        if(arbz.pret<3.4 && arbz.kg<18000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(arbz.pret<3.4 && arbz.kg>18000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019, daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau tasta b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)arbz.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                arbz.profit=(float)arbz.km*arbz.pret;
                                arbz.profit=(float)arbz.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<arbz.profit<<" lei"<<endl;
                            }
                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                cout<<"_________________________________________________"<<endl;
                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                cout<<"|_______________________|_______________________|"<<endl;
                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }
                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }
                }
                break;
                case 2:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"2.IASI-BUCURESTI"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<isb.loc<<endl;;
                    cout<<"  -PRODUS:   ";
                    cout<<isb.pod<<endl;;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[2].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[2].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<isb.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<isb.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                      IASI `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                          /   :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                           |     -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                            |      oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                             \\       sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                \\      -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                                  \\     `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                                    |    sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                                                         |   -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                                                           /   :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                                                         /    `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                                                      /      hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                                                     /       oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                                   /        -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                                /           yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                                           |              `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                            |                          -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                           /                  -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                          /                    h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                            __/                    -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                        _/                      .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                      ____/                        /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                         BUCURESTI_/                            sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>isb.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>isb.kg;
                        cout<<endl;

                        cout<<"2.IASI-BUCURESTI"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<isb.loc<<endl;;
                        cout<<"  -PRODUS:   ";
                        cout<<isb.pod<<endl;;
                        cout<<"  -CANTITATE:";
                        cout<<isb.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:";
                        cout<<isb.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<isb.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<isb.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                      IASI `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                          /   :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                           |     -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                            |      oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                             \\       sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                \\      -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                                  \\     `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                                    |    sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                                                         |   -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                                                           /   :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                                                         /    `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                                                      /      hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                                                     /       oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                                   /        -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                                /           yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                                           |              `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                            |                          -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                           /                  -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                          /                    h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                            __/                    -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                        _/                      .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                      ____/                        /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                         BUCURESTI_/                            sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(isb.pret>2.9)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(isb.kg<14000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti obtiunea:";
                            }
                        }
                        if(isb.pret<2.9 && isb.kg<14000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(isb.pret<2.9 && isb.kg>14000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)isb.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                isb.profit=(float)isb.km*isb.pret;
                                isb.profit=(float)isb.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<isb.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }
                    }
                    break;
                    case 3:
                    {
                        system("cls");
            cout<<"_________________________________________________"<<endl;
            cout<<"|Curse:                 |Ordonare:              |"<<endl;
            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
            cout<<"|10.Deva-Brasov         |                       |"<<endl;
            cout<<"|_______________________|_______________________|"<<endl;
            cout<<"Introduceti optiunea:";
                    }
                    break;
                    }

                }
                break;
                case 3:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");

                    cout<<"3.BAIA MARE-CRAIOVA"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<bmcv.loc<<endl;;
                    cout<<"  -PRODUS:   ";
                    cout<<bmcv.pod<<endl;;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[3].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[3].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<bmcv.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<bmcv.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:               /BAIA_MARE            `             .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                /                                     `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                 |                                       :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                  \\                                        `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                    \\                                         :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                      \\                                          -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                        \\                                          oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                          |                                          sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                            |                                          -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                             /                                          `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                             /                                           sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                  |                                          -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                    |                                          :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                    \\                                         `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                   \\                                         hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                    \\                                        oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                    /                                       -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                 /                                          yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                            |                                             `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                             \\                                                         -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                             \\                                                -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                              \\                                                h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                    |                                              -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                  |                                             .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                     |                                             /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                   /                                            sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                /                                             +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+           CRAIOVA                  .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>bmcv.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>bmcv.kg;
                        cout<<endl;
                        cout<<"3.BAIA MARE-CRAIOVA"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<bmcv.loc<<endl;;
                        cout<<"  -PRODUS:   ";
                        cout<<bmcv.pod<<endl;;
                        cout<<"  -CANTITATE:";
                        cout<<bmcv.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:";
                        cout<<bmcv.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<bmcv.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<bmcv.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:               /BAIA_MARE            `             .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                /                                     `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                 |                                       :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                  \\                                        `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                    \\                                         :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                      \\                                          -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                        \\                                          oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                          |                                          sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                            |                                          -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                             /                                          `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                             /                                           sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                  |                                          -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                    |                                          :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                    \\                                         `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                   \\                                         hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                    \\                                        oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                    /                                       -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                 /                                          yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                            |                                             `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                             \\                                                         -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                             \\                                                -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                              \\                                                h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                    |                                              -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                  |                                             .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                     |                                             /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                   /                                            sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                /                                             +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+           CRAIOVA                  .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(bmcv.pret>4.4)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(bmcv.kg<19000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti obtiunea:";
                            }
                        }
                        if(bmcv.pret<4.4 && bmcv.kg<19000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(bmcv.pret<4.4 && bmcv.kg>19000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)bmcv.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                bmcv.profit=(float)bmcv.km*bmcv.pret;
                                bmcv.profit=(float)bmcv.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<bmcv.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }
                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }
                }
                break;
                case 4:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"4.RESITA-GALATI"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<rsga.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<rsga.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[4].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[4].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<rsga.km;
                    cout<<"KM "<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<rsga.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                 _                                            `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                         ____/   \\                       ____                hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                 _______/          \\___/\\              _/    \\               oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`            __/                          \\______     /       \\_    GALATI   -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:  RESITA_/                                    \\___/          \\_______/      yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>rsga.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>rsga.kg;
                        cout<<endl;
                        cout<<"4.RESITA-GALATI"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<rsga.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<rsga.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<rsga.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:";
                        cout<<rsga.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<rsga.km;
                        cout<<"KM "<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<rsga.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                 _                                            `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                         ____/   \\                       ____                hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                 _______/          \\___/\\              _/    \\               oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`            __/                          \\______     /       \\_    GALATI   -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:  RESITA_/                                    \\___/          \\_______/      yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(rsga.pret>4.7)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(rsga.kg<18000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti obtiunea:";
                            }
                        }
                        if(rsga.pret<4.7 && rsga.kg<18000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(rsga.pret<4.7 && rsga.kg>18000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)rsga.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                rsga.profit=(float)rsga.km*rsga.pret;
                                rsga.profit=(float)rsga.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<rsga.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }

                }
                break;
                case 5:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"5.ORADEA-ZALAU"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<orza.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<orza.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[5].skg<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[5].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<orza.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<orza.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                                     `             .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                   ___ZALAU                              :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-             __    /                                       `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.   ORADEA  __/  \\__|                                          :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.      \\____/                                                     -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                                                              `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                                                             hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>orza.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>orza.kg;
                        cout<<endl;
                        cout<<"5.ORADEA-ZALAU"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<orza.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<orza.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<orza.kg<<endl;
                        cout<<"  -PRET:";
                        cout<<orza.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<orza.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<orza.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                                     `             .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                   ___ZALAU                              :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-             __    /                                       `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.   ORADEA  __/  \\__|                                          :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.      \\____/                                                     -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                                                              `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                                                             hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(orza.pret>3.4)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(orza.kg<10000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti optiunea:";
                            }
                        }
                        if(orza.pret<3.4 && orza.kg<10000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(orza.pret<3.4 && orza.kg>10000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)orza.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                orza.profit=(float)orza.km*orza.pret;
                                orza.profit=(float)orza.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<orza.profit<<" lei"<<endl;
                            }
                            return 0;
                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }
                }
                break;
                case 6:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"6.GIURGIU-ORAVITA"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<giov.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<giov.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[6].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[6].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<giov.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<giov.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                                                              `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                                                             hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`ORAVITA                                                                   `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo   __                                                                                  -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`    \\_____                                                                    -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.           \\                                                                   h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+` \\________                                                         -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`         \\                                                      .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo             \\__                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.               \\            __                                  sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-              \\__________/  \\                                 +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                             \\     .-:/+ymMMNh-...           :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                         GIURGIU\\ :hNMMMMMMMMMMMMMMMmdm.       oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              0dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>giov.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>giov.kg;
                        cout<<endl;
                        cout<<"6.GIURGIU-ORAVITA"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<giov.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<giov.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<giov.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:";
                        cout<<giov.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<giov.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<giov.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                                                              `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                                                             hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`ORAVITA                                                                   `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo   __                                                                                  -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`    \\_____                                                                    -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.           \\                                                                   h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+` \\________                                                         -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`         \\                                                      .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo             \\__                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.               \\            __                                  sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-              \\__________/  \\                                 +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                             \\     .-:/+ymMMNh-...           :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                         GIURGIU\\ :hNMMMMMMMMMMMMMMMmdm.       oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              0dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(giov.pret>3.7)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(giov.kg<16000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti optiunea:";
                            }
                        }
                        if(giov.pret<3.7 && giov.kg<16000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(giov.pret<3.7 && giov.kg>16000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)giov.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                giov.profit=(float)giov.km*giov.pret;
                                giov.profit=(float)giov.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<giov.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }
                }
                break;
                case 7:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"7.SINAIA-BOTOSANI"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<sibo.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<sibo.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[7].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:";
                    cout<<schimb[7].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<sibo.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<sibo.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/           BOTOSANI `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                                     `    |        .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                            \\         `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                              \\          :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                |          `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                 \\            :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                   |             -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                  __/              oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                  /                  sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                   /                   -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                    \\                   `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                      \\                  sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                                          _/                 -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                                          _/                   :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                                       _/                     `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                                    /                        hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                                   /                         oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                  |                         -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                |                           yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                        SINAIA                            `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>sibo.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>sibo.kg;
                        cout<<endl;
                        cout<<"7.SINAIA-BOTOSANI"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<sibo.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<sibo.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<sibo.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:";
                        cout<<sibo.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<sibo.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<sibo.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/           BOTOSANI `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                                     `    |        .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                            \\         `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                              \\          :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                |          `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                 \\            :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                   |             -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                  __/              oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                  /                  sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                   /                   -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                    \\                   `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                      \\                  sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                                          _/                 -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                                          _/                   :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                                       _/                     `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                                    /                        hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                                   /                         oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                  |                         -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                |                           yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                        SINAIA                            `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(sibo.pret>4)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(sibo.kg<14000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti optiunea:";
                            }
                        }
                        if(sibo.pret<4 && sibo.kg<14000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(sibo.pret<4 && sibo.kg>14000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)sibo.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                sibo.profit=(float)sibo.km*sibo.pret;
                                sibo.profit=(float)sibo.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<sibo.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }

                }
                break;
                case 8:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"8.TIMISOARA-CONSTANTA"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<tmco.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<tmco.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[8].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:     ";
                    cout<<schimb[8].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<tmco.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<tmco.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                                     `             .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                       __                                                    -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                 __   __/  \\_                                                  :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy    TIMISOARA _/  \\_/       \\_____                                            `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`    |______/                    \\                                            hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                 |                                           oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                /                                           -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                              |                                             yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                          \\_                                              `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                             \\                                                         -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                             \\                                                -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                              \\_                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                     \\_                                            -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                     \\_                                         .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                          \\_____________________                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                              \\_     CONSTANTA  sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                              \\____/          +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>tmco.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>tmco.kg;
                        cout<<endl;
                        cout<<"8.TIMISOARA-CONSTANTA"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<tmco.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<tmco.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<tmco.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:     ";
                        cout<<tmco.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<tmco.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<tmco.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                                     `             .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                       __                                                    -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                 __   __/  \\_                                                  :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy    TIMISOARA _/  \\_/       \\_____                                            `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`    |______/                    \\                                            hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                 |                                           oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                /                                           -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                              |                                             yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                          \\_                                              `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                             \\                                                         -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                             \\                                                -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                              \\_                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                     \\_                                            -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                     \\_                                         .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                          \\_____________________                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                              \\_     CONSTANTA  sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                              \\____/          +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(tmco.pret>2.7)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(tmco.kg<16000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti optiunea:";
                            }
                        }
                        if(tmco.pret<2.7 && tmco.kg<16000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(tmco.pret<2.7 && tmco.kg>16000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)tmco.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                tmco.profit=(float)tmco.km*tmco.pret;
                                tmco.profit=(float)tmco.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<tmco.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }

                }
                break;
                case 9:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"9.COVASNA-VASLUI"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<cvvs.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<cvvs.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[9].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:     ";
                    cout<<schimb[9].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<cvvs.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<cvvs.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                     VASLUI      -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                            \\      oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                              |      sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                |      -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                 _              /       `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                 / \\__         _/        sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                               COVASNA     \\_______/         -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                                                                              `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                                                             hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 daca va convine transportul."<<endl;
                    cout<<"Tasta 2 daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>cvvs.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>cvvs.kg;
                        cout<<endl;
                        cout<<"9.COVASNA-VASLUI"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<cvvs.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<cvvs.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<cvvs.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:     ";
                        cout<<cvvs.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<cvvs.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<cvvs.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                     VASLUI      -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                            \\      oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                              |      sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                |      -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                 _              /       `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                 / \\__         _/        sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                               COVASNA     \\_______/         -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                                                                               :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                                                                              `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                                                             hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(cvvs.pret>3)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(cvvs.kg<18000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                            cout<<"_________________________________________________"<<endl;
                                            cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                            cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                            cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                            cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                            cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                            cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                            cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                            cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                            cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                            cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                            cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                            cout<<"|_______________________|_______________________|"<<endl;
                                            cout<<"Introduceti optiunea:";
                            }
                        }
                        if(cvvs.pret<3 && cvvs.kg<18000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(cvvs.pret<3 && cvvs.kg>18000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau tasta b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)cvvs.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                cvvs.profit=(float)cvvs.km*cvvs.pret;
                                cvvs.profit=(float)cvvs.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<cvvs.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }
                }
                break;
                case 10:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"10.DEVA-BRASOV"<<endl;
                    cout<<"  -LOCATIE:  ";
                    cout<<dvbv.loc<<endl;
                    cout<<"  -PRODUS:   ";
                    cout<<dvbv.pod<<endl;
                    cout<<"  -CANTITATE:";
                    cout<<schimb[10].skg;
                    cout<<"KG"<<endl;
                    cout<<"  -PRET:     ";
                    cout<<schimb[10].spret;
                    cout<<"lei/km"<<endl;
                    cout<<"  -DISTANTA: ";
                    cout<<dvbv.km;
                    cout<<"KM"<<endl;
                    cout<<"  -TIMP:     ";
                    cout<<dvbv.timp;
                    cout<<"H"<<endl;
                    cout<<"  -TRASEU:                                                                                                           "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  No`                              ______                                           :MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMy                  DEVA ____/        \\_______                                  `MMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMd`                                            \\______BRASOV                    hMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                    cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                    cout<<"  MMMMMMMMMmy+`                                                                          `-.         .               "<<endl;
                    cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                    cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                    cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                    cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                    cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                    cout<<"Apasati:"<<endl;
                    cout<<"Tasta 1 Daca va convine transportul."<<endl;
                    cout<<"Tasta 2 Daca vreti sa modificati cantitatea si pretul si veti vedea daca se accepta sau nu."<<endl;
                    cout<<"Tasta 3 Daca doriti sa vedeti alt transport."<<endl;
                    cin>>r;
                    switch(r)
                    {
                    case 1:
                    {
                        cout<<"Multumim!";
                        return 0;
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        cout<<"Introduceti pretul pe kilometru:";
                        cin>>dvbv.pret;
                        cout<<endl;
                        cout<<"Introduceti kilogramele:";
                        cin>>dvbv.kg;
                        cout<<endl;
                        cout<<"10.DEVA-BRASOV"<<endl;
                        cout<<"  -LOCATIE:  ";
                        cout<<dvbv.loc<<endl;
                        cout<<"  -PRODUS:   ";
                        cout<<dvbv.pod<<endl;
                        cout<<"  -CANTITATE:";
                        cout<<dvbv.kg;
                        cout<<"KG"<<endl;
                        cout<<"  -PRET:     ";
                        cout<<dvbv.pret;
                        cout<<"lei/km"<<endl;
                        cout<<"  -DISTANTA: ";
                        cout<<dvbv.km;
                        cout<<"KM"<<endl;
                        cout<<"  -TIMP:     ";
                        cout<<dvbv.timp;
                        cout<<"H"<<endl;
                        cout<<"  -TRASEU:                                                                                                           "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMo/-` `+mMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMds`:hmmNMMMMMMMMMMMMMMMMMMMMMMMMN/       `hMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMy.         ::/o+/:/yMMMMMdsooo+:-.           yMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMho//.                    .sMm/                    `mMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMm:                           `                       .dMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMM:                                                      `oNMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMN/                                                         :MMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMN-                                                           `sMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMh.                                                              :dMMMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMm.                                                                 -NMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMd.                                                                   oMMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMmy-                                                                     sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMN.                                                                       -MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMN/                                                                        `MMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMNMM+://.                                                                         sMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  :  ``                                                                             -MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  No`                              ______                                           :MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMy                  DEVA ____/        \\_______                                  `MMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMd`                                            \\______BRASOV                    hMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMN`                                                                             oMMMMMMMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMs`                                                                            -mMMMMMMMMMdyyhNM               "<<endl;
                        cout<<"  MMMMMMNs:                                                                            yNMMNsh+`     o               "<<endl;
                        cout<<"  MMMMMMMMMmy+`                                             Tasta                             `-.         .               "<<endl;
                        cout<<"  MMMMMMMMMMMo                                                                                       -               "<<endl;
                        cout<<"  MMMMMMMMMMNo`                                                                              -y      +               "<<endl;
                        cout<<"  MMMMMMMMMMd-.                                                                               h--/+osd               "<<endl;
                        cout<<"  MMMMMMMMMMMMM+:-.    :+`                                                                   -sdMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMh.`hMMh:`                                                                .-NMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMo                                                                   /NMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMy.                                                                sMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMNs-                                                              +MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMd+                                    .-:/+ymMMNh-...          :MMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMN                                   :hNMMMMMMMMMMMMMMMmdm.      oMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMmhyhdNNhoo:.      `              -dMMMMMMMMMMMMMMMMMMMMMMhs+:--mMMMMMMMMMM               "<<endl;
                        cout<<"  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdssymMNhhhhso/``.:ohMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM               "<<endl;
                        if(dvbv.pret>2)
                        {
                            cout<<"Cursa nu este acceptata deoarece pretul este prea mare.";
                            if(dvbv.kg<5000)
                            {
                                cout<<" si cantitatea prea mica!"<<endl;
                                cout<<"Incercati alt transport:"<<endl;
                                cout<<"_________________________________________________"<<endl;
                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                cout<<"|_______________________|_______________________|"<<endl;
                                cout<<"Introduceti optiunea:";
                            }
                        }
                        if(dvbv.pret<2 && dvbv.kg<5000)
                            cout<<"Pretul este bun dar cantitatea prea mica, din aceasta cauza nu putem accepta.";
                        if(dvbv.pret<2 && dvbv.kg>5000)
                        {
                            cout<<"Cursa este acceptata! Termenul este 29/1/2019! Daca nu este respectat se va scadea din plata!"<<endl;
                            cout<<"Daca doriti sa vedeti profitul pe care il obtineti apasati tasta a sau b daca doriti sa terminati!"<<endl;
                            cout<<"a sau b?"<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                p=(float)dvbv.km/100;
                                p=(float)p*30;
                                p=(float)p*5,43;
                                dvbv.profit=(float)dvbv.km*dvbv.pret;
                                dvbv.profit=(float)dvbv.profit-p;
                                cout<<"Profitul dumneavoastra este: "<<dvbv.profit<<" lei"<<endl;
                            }

                            cout<<endl;
                            cout<<"Sunteti de acord cu profitul care rezulta din aceasta cursa?"<<endl;
                            cout<<"Daca da apasati tasta a, daca nu apasati tasta b."<<endl;
                            cin>>q;
                            if(q=='a' || q=='A')
                            {
                                cout<<"Drum bun!"<<endl;
                                return 0;
                            }
                            else if(q=='b' || q=='B')
                            {
                                cout<<"Daca doriti sa vedeti alt transport, introduceti numarul 1 sau numarul 2 pentru ca programul sa se opreasca."<<endl;;
                                cin>>s;
                                if(s==1)
                                {
                                                cout<<"_________________________________________________"<<endl;
                                                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                                cout<<"|_______________________|_______________________|"<<endl;
                                                cout<<"Introduceti optiunea:";
                                    break;
                                    cin>>u;

                                }
                                else if(s==2)
                                    return 0;
                            }
                        }


                    }
                    break;
                    case 3:
                    {
                        system("cls");
                                    cout<<"_________________________________________________"<<endl;
                                    cout<<"|Curse:                 |Ordonare:              |"<<endl;
                                    cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                                    cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                                    cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                                    cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                                    cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                                    cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                                    cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                                    cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                                    cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                                    cout<<"|10.Deva-Brasov         |                       |"<<endl;
                                    cout<<"|_______________________|_______________________|"<<endl;
                                    cout<<"Introduceti optiunea:";
                    }
                    break;
                    }
                }
                break;
                case 11:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"Traseele ordonate dupa kilometri sunt:"<<endl;
                    for(j=1; j<=n-1; j++)
                        for(k=j+1; k<=n; k++)
                            if(total[j].tkm>total[k].tkm)
                            {
                                aux=total[j].tkm;
                                total[j].tkm=total[k].tkm;
                                total[k].tkm=aux;

                                strcpy(aux1, total[j].tloc);
                                strcpy(total[j].tloc, total[k].tloc);
                                strcpy(total[k].tloc, aux1);

                            }
                    cout<<endl;
                    for(j=1; j<=n; j++)
                        cout<<total[j].tkm<<" "<<total[j].tloc<<endl;

                cout<<endl;
                cout<<endl;
                cout<<"_________________________________________________"<<endl;
                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                cout<<"|_______________________|_______________________|"<<endl;
                cout<<"Introduceti optiunea:";

                }
                break;
                case 12:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"Traseele ordonate dupa kilograme sunt:"<<endl;
                    for(j=1; j<=n-1; j++)
                        for(k=j+1; k<=n; k++)
                            if(total[j].tkg>total[k].tkg)
                            {
                                aux=total[j].tkg;
                                total[j].tkg=total[k].tkg;
                                total[k].tkg=aux;

                                strcpy(aux1,total[j].tloc);
                                strcpy(total[j].tloc,total[k].tloc);
                                strcpy(total[k].tloc,aux1);
                            }
                            else if(total[j].tkg==total[k].tkg)
                                if(strcmp(total[j].tloc,total[k].tloc)>0)
                                {
                                    strcpy(aux1,total[j].tloc);
                                    strcpy(total[j].tloc,total[k].tloc);
                                    strcpy(total[k].tloc,aux1);

                                    aux=total[j].tkg;
                                    total[j].tkg=total[k].tkg;
                                    total[k].tkg=aux;

                                }
                    cout<<endl;
                    for(j=1; j<=n; j++)
                        cout<<total[j].tloc<<" "<<total[j].tkg<<endl;

                cout<<endl;
                cout<<endl;
                cout<<"_________________________________________________"<<endl;
                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                cout<<"|_______________________|_______________________|"<<endl;
                cout<<"Introduceti optiunea:";

                }
                break;
                case 13:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"Traseele ordonate dupa pret sunt:"<<endl;
                    for(j=1; j<=n-1; j++)
                        for(k=j+1; k<=n; k++)
                            if(total[j].tpret>total[k].tpret)
                            {
                                aux2=total[j].tpret;
                                total[j].tpret=total[k].tpret;
                                total[k].tpret=aux2;

                                strcpy(aux1, total[j].tloc);
                                strcpy(total[j].tloc, total[k].tloc);
                                strcpy(total[k].tloc, aux1);
                            }
                    cout<<endl;
                    for(j=1; j<=n; j++)
                        cout<<total[j].tpret<<" "<<total[j].tloc<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"_________________________________________________"<<endl;
                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                cout<<"|_______________________|_______________________|"<<endl;
                cout<<"Introduceti optiunea:";

                }
                break;
                case 14:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"Traseele ordonate dupa timp sunt:"<<endl;
                    for(j=1; j<=n-1; j++)
                        for(k=j+1; k<=n; k++)
                            if(total[j].ttimp>total[k].ttimp)
                            {
                                aux2=total[j].ttimp;
                                total[j].ttimp=total[k].ttimp;
                                total[k].ttimp=aux2;

                                strcpy(aux1,total[j].tloc);
                                strcpy(total[j].tloc,total[k].tloc);
                                strcpy(total[k].tloc,aux1);
                            }
                    cout<<endl;
                    for(j=1; j<=n; j++)
                        cout<<total[j].tloc<<" "<<total[j].ttimp<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"_________________________________________________"<<endl;
                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                cout<<"|_______________________|_______________________|"<<endl;
                cout<<"Introduceti optiunea:";

                }
                break;
                case 15:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"Traseele ordonate dupa locatie sunt:"<<endl;
                    for(j=1; j<=n-1; j++)
                        for(k=j+1; k<=n; k++)
                            if(strcmp(total[j].tloc,total[k].tloc)>0)
                            {
                                strcpy(aux1, total[j].tloc);
                                strcpy(total[j].tloc, total[k].tloc);
                                strcpy(total[k].tloc, aux1);
                            }
                    cout<<endl;
                    for(j=1; j<=n; j++)
                        cout<<total[j].tloc<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"_________________________________________________"<<endl;
                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                cout<<"|_______________________|_______________________|"<<endl;
                cout<<"Introduceti optiunea:";

                }
                break;
                case 16:
                {
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Loading";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(100);
cout<<".";
Sleep(700);
system("cls");
                    system("cls");
                    cout<<"Traseele ordonate dupa produs sunt:"<<endl;
                    for(j=1; j<=n-1; j++)
                        for(k=j+1; k<=n; k++)
                            if(strcmp(total[j].tpod,total[k].tpod)>0)
                            {
                                strcpy(aux1, total[j].tpod);
                                strcpy(total[j].tpod, total[k].tpod);
                                strcpy(total[k].tpod, aux1);

                                strcpy(aux3, total[j].tloc);
                                strcpy(total[j].tloc, total[k].tloc);
                                strcpy(total[k].tloc, aux3);
                            }
                    cout<<endl;
                    for(j=1; j<=n; j++)
                        cout<<total[j].tpod<<"  "<<total[j].tloc<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"_________________________________________________"<<endl;
                cout<<"|Curse:                 |Ordonare:              |"<<endl;
                cout<<"|1.Arad-Buzau           |11.Ordonare dupa km    |"<<endl;
                cout<<"|2.Iasi-Bucuresti       |12.Ordonare dupa kg    |"<<endl;
                cout<<"|3.Baia Mare-Craiova    |13.Ordonare dupa pret  |"<<endl;
                cout<<"|4.Resita-Galati        |14.Ordonare dupa timp  |"<<endl;
                cout<<"|5.Oradea-Zalau         |15.Ordonare dupa oras  |"<<endl;
                cout<<"|6.Giurgiu-Oravita      |16.Ordonare dupa produs|"<<endl;
                cout<<"|7.Sinaia-Botosani      |                       |"<<endl;
                cout<<"|8.Timisoara-Constanta  |                       |"<<endl;
                cout<<"|9.Covasna-Vaslui       |                       |"<<endl;
                cout<<"|10.Deva-Brasov         |                       |"<<endl;
                cout<<"|_______________________|_______________________|"<<endl;
                cout<<"Introduceti optiunea:";

                }
                break;
                }
                cin>>u;
            }
            cin>>o;
        }
        break;
        case 2:
        {
            system("cls");
            cout<<"               hddddddddddddd   hdddddddy+.           odd/         -ddd:         /dh     `/sdmNMNNd/        "<<endl;
            cout<<"               :::::yMN:::::-  .MM/::::+dMN-         yMmMd         sMNMN-        hMy    +NNo:.``.:o-        "<<endl;
            cout<<"                    dMs        oMm      `MMo       `hMo-MM-        NM+sMN.      `MM:   /MM.                 "<<endl;
            cout<<"                   .MM-        mMo      +MN.      `dM+  dMy       :MM. yMN.     +MN    +MM+                 "<<endl;
            cout<<"                   oMm        -MM-...-+hMy.      .mM/   +MN`      yMh   yMm`    dMs     oNMNy/`             "<<endl;
            cout<<"                   mMo        sMMNNMMMd:`       -NN:    MM+       NM/   hMd    .MM-     :smMMh/           "<<endl;
            cout<<"                  -MM.        NM+   :mMh`      /MMmyyyyyyNMm     :MM`    dMd   oMm         .oMMy          "<<endl;
            cout<<"                  sMd        :MM`    `mMh     +Mm+///////oMM:    yMh      `dMh mMo             yMN          "<<endl;
            cout<<"                  NM+        yMh      .NMy   sMm.         mMh   `MM/       `mMhMM.   :-       /NM/          "<<endl;
            cout<<"                 :MM`        NM/       :MMo  yMd          oMM.  /MN         .mMMd    dMMmhhhdNms.           "<<endl;
            cout<<"                 -.        `--         .--`  --            --   .-.            --     -://:-              "<<endl;
            cout<<endl<<endl;
            cout<<"Informatii:"<<endl;
            cout<<"     Acesta este proiectul TRANS. Ce este acest proiect? Ei bine, este oarecum un joculet cu curse pentru tiruri. Am desenat harta Romaniei si am creat 10 curse. Aceste curse sunt de la un judet/oras la alt judet/oras "<<endl;
            cout<<"din tara Romania. Fiecare cursa are afisati kilometrii care trebuie parcursi, tonajul, pretul pe kilometru, durata cursei, locul de plecare si locul de sosire si marfa care trebuie transportata. Am creat mai multe cazuri "<<endl;
            cout<<"in care utilizatorul poate alege o cursa, care doreste, iar mai apoi ii sunt afisate niste mesaje si anume daca accepta cursa, daca doreste sa caute o cursa dupa banii pe care doreste sa ii castige pe kilometru si tonajul "<<endl;
            cout<<"pe care doreste sa il transporte, si daca pur si simplu vrea sa aleaga alta cursa. Daca alege optiunea in care sa puna el pretul si tonajul, cu siguranta va gasi o cursa si fiecare ii va afisa profitul pe care il doreste. "<<endl;
            cout<<"Daca pretul dorit si tonajul sunt prea mari fata de cerinta atunci se va afisa un mesaj corespunzator. Dupa ce profitul ii este afisat, din nou poate sa aleaga, daca este de acord sau, daca doreste alta cursa. Tot in acest "<<endl;
            cout<<"proiect am sortat kilometrii, kilogramele, pretul si timpul de la cel mai mic la cel mai mare, iar locatiile si produsele(marfurile) in ordine alfabetica pentru ca utilizatorul sa poata sa vada care cursa are cei mai multi "<<endl;
            cout<<"sau putini kilometrii, cele mai multe/putine kilograme si asa mai departe."<<endl;
            cin>>o;
            system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                                                    Va Multumim Pentru Atentie :)";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(750);
cout<<".";
Sleep(700);
system("cls");
return 0;

        }
        break;

        case 3:
        {
            return 0;
        }
        break;
        }
    }

    return 0;
}
