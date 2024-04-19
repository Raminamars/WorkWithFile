#include "filewatcher.h"
#include <iostream>

using namespace std; //директива языка С++, позволяющая использовать все идентификаторы из станд. библ. С++(std) без явного указания пространства имен std

FileWatcher::FileWatcher()
{
    //устанавливаются соединения сигналов и слотов для отслеживания изменений в файлах
    connect(this,&FileWatcher::signalExistChangesInFile,&ConsolePrinter::printExistChanges);
    connect(this,&FileWatcher::signalWeightChangesInFile,&ConsolePrinter::printWeightChanges);
}

void FileWatcher::checkChangesInFile(int pos){
    //проверяет изменения в файле по заданной позиции в списке сохраненных файлов
    FileData savedFile = savedFiles[pos];
    FileData currentFile(savedFile.getPath());
    if (savedFile.getExistence()!=currentFile.getExistence()){
        savedFiles[pos]=currentFile;
        emit signalExistChangesInFile(currentFile.getPath(),currentFile.getExistence(),currentFile.getWeight());

    }
    else if (savedFile.getWeight()!=currentFile.getWeight()){
        savedFiles[pos]=currentFile;
        emit signalWeightChangesInFile(currentFile.getPath(),currentFile.getExistence(),currentFile.getWeight());

    }
}

void FileWatcher::checkChangesInFiles(){
    //проверяет изменеиня во всех сохраненных файлах путем вызова метода checkChangesInFile для каждого файла
    for (int i=0; i<savedFiles.size(); i+=1){
        checkChangesInFile(i);
    }
}
void FileWatcher::addFile(QString path){
    //добавляет новый файл в список сохраненных файлов по указанному пути
    FileData file(path);
    savedFiles.push_back(file);
}
void FileWatcher::deleteFile(QString path){
    //удаляет файл из списка сохраненных файлов по указанному пути
    int pos=-1;
    for (int i=0; i<savedFiles.size(); i+=1){
        if (savedFiles[i].getPath()==path){
            pos=i;
        }
    }
    if (pos!=-1){
        savedFiles.remove(pos);
    }
}
