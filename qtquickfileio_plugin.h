#ifndef QTQUICKFILEIO_PLUGIN_H
#define QTQUICKFILEIO_PLUGIN_H

#include <QQmlExtensionPlugin>

class QtQuickFileIOPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // QTQUICKFILEIO_PLUGIN_H
