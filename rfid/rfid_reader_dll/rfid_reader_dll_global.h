#ifndef RFID_READER_DLL_GLOBAL_H
#define RFID_READER_DLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RFID_READER_DLL_LIBRARY)
#  define RFID_READER_DLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RFID_READER_DLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RFID_READER_DLL_GLOBAL_H
