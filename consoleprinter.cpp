#include "consoleprinter.h"
#include <iostream>

using namespace std;

//метод для вывода информации о существовании файла и его изменениях
void ConsolePrinter::printExistChanges(QString path, bool existens, qint64 size){
    if (existens){
        wcout<<L"Файл существует, путь: " <<path.toStdWString() <<L" , размер: " <<size <<L" байт" <<endl;
    }
    else
    wcout<<L"Файл не существует, путь: " <<path.toStdWString() <<endl;
}
//метод для вывода информации об изменениии веса файла на консоль
void ConsolePrinter::printWeightChanges(QString path, bool existens, qint64 size){
    wcout<<L"Файл изменился, путь: " <<path.toStdWString() << L" , новый размер: " <<size <<L" байт" <<endl;
}
