#include "dduifileio.h"

#include<QDebug>

DDuiFileIO::DDuiFileIO(QObject *parent):
    QObject(parent)
{
    m_source=QUrl("");
    m_text ="";
}

DDuiFileIO::~DDuiFileIO()
{
}

bool DDuiFileIO::save(const QString &text, const QString &filename)
{
    QFile file(filename);
    if(file.open(QIODevice::ReadWrite)){
        QTextStream stream(&file);
        stream << text << endl;
        return true;
    }
    return false;
}

void DDuiFileIO::read()
{
    if(m_source.isEmpty()) {
        return;
    }
    QFile file(m_source.toLocalFile());
    if(!file.exists()) {
        qWarning() << "Does not exits: " << m_source.toLocalFile();
        return;
    }
    if(file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        m_text = stream.readAll();
        emit textChanged(m_text);
    }
}

void DDuiFileIO::write()
{
    if(m_source.isEmpty()) {
        return;
    }
    QFile file(m_source.toLocalFile());
    if(file.open(QIODevice::WriteOnly)) {
        QTextStream stream(&file);
        stream << m_text;
    }
}

void DDuiFileIO::setText(const QString &text)
{
    if(m_text == text)return;
    m_text = text;
}

void DDuiFileIO::setSource(const QUrl &url)
{
    if(m_source!=url)
    {
        m_source =url;
    }
}

