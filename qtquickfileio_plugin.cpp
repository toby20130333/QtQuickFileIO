#include "qtquickfileio_plugin.h"
#include "dduifileio.h"

#include <qqml.h>

void QtQuickFileIOPlugin::registerTypes(const char *uri)
{
    // @uri com.ddui.qmlcomponents
    qmlRegisterType<DDuiFileIO>(uri, 1, 0, "DDuiFileIO");
}

