#ifndef FILEWATCHER_H
#define FILEWATCHER_H

#include <filedata.h>
#include <QVector>
#include <consoleprinter.h>
#include <QObject>

class FileWatcher:public QObject
{
    Q_OBJECT
public:
    FileWatcher();
    void checkChangesInFile(int);
    void checkChangesInFiles();
    void addFile(QString path);
    void deleteFile(QString path);

private:
    QVector<FileData> savedFiles;

signals:
    void signalExistChangesInFile(QString path, bool existens, qint64 size );
    void signalWeightChangesInFile(QString path, bool existens, qint64 size );

};

#endif // FILEWATCHER_H
