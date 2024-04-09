#include "filewatcher.h"

FileWatcher::FileWatcher()
{
    connect(this,&FileWatcher::signalExistChangesInFile,&ConsolePrinter::printExistChanges);
    connect(this,&FileWatcher::signalWeightChangesInFile,&ConsolePrinter::printWeightChanges);
}

void FileWatcher::checkChangesInFile(int pos){
    FileData savedFile = savedFiles[pos];
    FileData currentFile(savedFile.getPath());
    if (savedFile.getExistence()!=currentFile.getExistence()){
        emit signalExistChangesInFile(currentFile.getPath(),currentFile.getExistence(),currentFile.getWeight());
        savedFiles[pos]=currentFile;
    }
    if (savedFile.getWeight()!=currentFile.getWeight()){
        emit signalWeightChangesInFile(currentFile.getPath(),currentFile.getExistence(),currentFile.getWeight());
        savedFiles[pos]=currentFile;
    }
}

void FileWatcher::checkChangesInFiles(){
    for (int i=0; i<savedFiles.size(); i+=1){
        checkChangesInFile(i);
    }
}
void FileWatcher::addFile(QString path){
    FileData file(path);
    savedFiles.push_back(file);
}
void FileWatcher::deleteFile(QString path){
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
