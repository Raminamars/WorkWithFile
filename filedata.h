#ifndef FILEDATA_H
#define FILEDATA_H

#include <QString>
#include <QFileInfo>

//класс для хранения информации о файлах
class FileData
{
public:
    FileData(QString newPath); //конструктор для создания обьекта FileData с указанным путем

    QString getPath(); //метод для получения пути к файлу
    qint64 getWeight(); //метод для получения размера файла
    bool getExistence(); //метод для получения информации о существовании файла

private:
    QString path; //путь к файлу
    qint64 weight; //размер файла
    bool existence; //флаг существования файла

};

#endif // FILEDATA_H
