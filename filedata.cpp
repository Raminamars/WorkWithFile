#include "filedata.h"

FileData::FileData() //конструктор без параметров иниц-ет пустой путь,вес нулевой и отсутсвие файла
{
    path="";
    weight=0;
    existence=false;
}

//конструктор с параметром newPath иниц-ет путь
FileData::FileData(QString newPath){
    path=newPath;
    QFileInfo file(path);
    existence=file.exists();
    if (existence) { //проверяем сущ-ие файла и устанавливаем вес
        weight=file.size();
    }
    else {
        weight=0;
    }
}

//возращаем путь к файлу
QString FileData::getPath(){
    return path;
}
//возращаем вес файла
qint64 FileData::getWeight(){
    return weight;
}
//возращаем информацию о сущ-ии файла
bool FileData::getExistence(){
    return existence;
}
//устанавливаем новый путь к файлу
void FileData::setPath(QString newPath){
    path=newPath;
}
//устанавливаем новый вес файла
void FileData::setWeight(qint64 newWeight){
    weight=newWeight;
}
//устанавливаем новое значение существования файла
void FileData::setExistence(bool newExistence ){
    existence=newExistence;
}
