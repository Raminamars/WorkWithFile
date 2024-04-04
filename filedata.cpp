#include "filedata.h"

FileData::FileData()
{
    path="";
    weight=0;
    existence=false;
}

FileData::FileData(QString newPath,qint64 newWeight,bool newExistence){
    path=newPath;
    weight=newWeight;
    existence=newExistence;
}

QString FileData::getPath(){
    return path;
}
qint64 FileData::getWeight(){
    return weight;
}
bool FileData::getExistence(){
    return existence;
}

void FileData::setPath(QString newPath){
    path=newPath;
}
void FileData::setWeight(qint64 newWeight){
    weight=newWeight;
}
void FileData::setExistence(bool newExistence ){
    existence=newExistence;
}
