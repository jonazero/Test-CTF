#ifndef PROCESO_H
#define PROCESO_H

#include <QString>

using namespace std;

class proceso
{
public:
    proceso();

    int ID,TME,weight;
    QString operation;

    float result;
    int arrivalTime, endTime, returnTime, responseTime, waitTime, serviceTime, blockedTime;
    bool responseTimeFlag;
    int status;

    void new_process(int ID);
    int getTR();
    void setBlockedTime(int time);
};

#endif // PROCESO_H

/*
    -a. arrivalTime: Hora en la que el proceso entra al sistema.
    -b. endTime: Hora en la que el proceso terminó.
    -c. returnTime: Tiempo total desde que el proceso llega hasta que termina.
    -d. responseTime: Tiempo transcurrido desde que llega hasta que es atendido por
    primera vez.
    -e. waitTime: Tiempo que el proceso ha estado esperando para usar el
    procesador.
    -f. serviceTime: Tiempo que el proceso ha estado dentro del procesador. (Si el
    proceso termino su ejecución normal es el TME)
*/
