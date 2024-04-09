#include "consoleprinter.h"

void ConsolePrinter::printExistChanges(QString path, bool existens, qint64 size){
    if (existens){
        wcout<<"Файл существует, путь: " <<path.toStdWString() <<" , размер: " <<size <<endl;
    }
    wcout<<"Файл существует, путь: " <<path.toStdWString() <<endl;
}
void ConsolePrinter::printWeightChanges(QString path, bool existens, qint64 size){
    wcout<<"Файл изменился, путь: " <<path.toStdWString() << " , новый размер: " <<size <<endl;
}
