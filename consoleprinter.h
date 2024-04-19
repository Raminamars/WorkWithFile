#ifndef CONSOLEPRINTER_H
#define CONSOLEPRINTER_H

#include <QString>
#include <QObject>

//класс для вывода в консоль
class ConsolePrinter: public QObject
{
public slots:
    static void printExistChanges(QString path, bool existens, qint64 size); //статистический метод для вывода изменений существования файла
    static void printWeightChanges(QString path, bool existens, qint64 size); //статистический метод для вывода изменений веса файла
};

#endif // CONSOLEPRINTER_H
