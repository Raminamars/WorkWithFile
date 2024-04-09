#ifndef FILEDATA_H
#define FILEDATA_H

#include <QString>
#include <QFileInfo>

class FileData
{
public:
    FileData();
    FileData(QString newPath);

    QString getPath();
    qint64 getWeight();
    bool getExistence();

    void setPath(QString newPath);
    void setWeight(qint64 newWeight);
    void setExistence(bool newExistence);

private:
    QString path;
    qint64 weight;
    bool existence;

};

#endif // FILEDATA_H
