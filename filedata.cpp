#include "filedata.h"

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
