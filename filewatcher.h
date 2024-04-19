#ifndef FILEWATCHER_H
#define FILEWATCHER_H

#include <filedata.h>
#include <QVector>
#include <consoleprinter.h>
#include <QObject>

//класс для отслеживания изменений в файлах
class FileWatcher:public QObject
{
    Q_OBJECT
public:
    FileWatcher(); //конструктор
    void checkChangesInFile(int); //метод для проверки изменений в файле
    void checkChangesInFiles(); //метод для проверки изменений в файлах
    void addFile(QString path); //метод для добавления нового файла в отслеживаемые
    void deleteFile(QString path); //метод удаления файла из отслеживаемых

private:
    QVector<FileData> savedFiles; //вектор для хранения информации о файлах

signals:
    void signalExistChangesInFile(QString path, bool existens, qint64 size ); //сигнал о изменениях в существовании файла
    void signalWeightChangesInFile(QString path, bool existens, qint64 size ); //сигнал о изменениях веса файла

};

#endif // FILEWATCHER_H
