#ifndef FILEDATA_H
#define FILEDATA_H

#include <QString>
#include <QFileInfo>

//класс для хранения информации о файлах
class FileData
{
public:
    FileData(); //конструктор по умолчанию для создания обьекта FileData
    FileData(QString newPath); //конструктор для создания обьекта FileData с указанным путем

    QString getPath(); //метод для получения пути к файлу
    qint64 getWeight(); //метод для получения размера файла
    bool getExistence(); //метод для получения информации о существовании файла

    void setPath(QString newPath); //метод для установки нового пути к файлу
    void setWeight(qint64 newWeight); //метод для установки нового размера файла
    void setExistence(bool newExistence); //метод для установки информации о существовании файла

private:
    QString path; //путь к файлу
    qint64 weight; //размер файла
    bool existence; //флаг существования файла

};

#endif // FILEDATA_H
