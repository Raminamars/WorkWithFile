#include "filedata.h"

FileData::FileData()
{
    path="";
    weight=0;
    existence=false;
}

FileData::FileData(QString newPath){
    path=newPath;
    QFileInfo file(path);
    existence=file.exists();
    if (existence) {
        weight=file.size();
    }
    else {
        weight=0;
    }
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
