#ifndef CONSOLEPRINTER_H
#define CONSOLEPRINTER_H

#include <QString>
#include <QObject>
#include <iostream>

using namespace std;

class ConsolePrinter: public QObject
{
public slots:
    static void printExistChanges(QString path, bool existens, qint64 size);
    static void printWeightChanges(QString path, bool existens, qint64 size);
};

#endif // CONSOLEPRINTER_H
