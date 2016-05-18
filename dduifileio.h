#ifndef DDUIFILEIO_H
#define DDUIFILEIO_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QUrl>

class DDuiFileIO : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(DDuiFileIO)

    Q_PROPERTY(QUrl source READ source WRITE setSource NOTIFY sourceChanged)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

public:
    DDuiFileIO(QObject *parent = 0);
    ~DDuiFileIO();
    Q_INVOKABLE bool save(const QString& text,const QString& filename);

    Q_INVOKABLE void read();
    Q_INVOKABLE void write();

    QUrl source(){return m_source;}
    QString text(){return m_text;}

    void setText(const QString& text);
    void setSource(const QUrl& url);
signals:
    void textChanged(QString text);
    void sourceChanged(QUrl url);

private:
    QUrl m_source;
    QString m_text;
};

#endif // DDUIFILEIO_H
