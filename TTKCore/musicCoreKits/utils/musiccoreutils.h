#ifndef MUSICCOREUTILS_H
#define MUSICCOREUTILS_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicobject.h"
#include "musicnumberdefine.h"
#include "musicglobaldefine.h"

/*! @brief The class of the utils core object namespace.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicUtils
{
    namespace Core
    {
        MUSIC_SUPER_EXPORT QString pluginPath(const QString &module, const QString &format);
        /*!
         * Get qmmp plugin dir path.
         */
        MUSIC_SUPER_EXPORT QString lrcPrefix();
        /*!
         * Get lrc dir prefix path.
         */
        MUSIC_SUPER_EXPORT QString musicPrefix();
        /*!
         * Get music dir prefix path.
         */

        MUSIC_SUPER_EXPORT quint64 dirSize(const QString &dirName);
        /*!
         * Get given dir size.
         */
        MUSIC_SUPER_EXPORT void checkCacheSize(quint64 cacheSize, bool disabled, const QString &path);
        /*!
         * Check given dir size is bigger than given size.
         */
        MUSIC_SUPER_EXPORT QFileInfoList findFile(const QString &path, const QStringList &filter);
        /*!
         * To find file by dir path.
         */

        MUSIC_SUPER_EXPORT QString getLanguageName(int index);
        /*!
         * Get Language Name by given index.
         */

        MUSIC_SUPER_EXPORT bool openUrl(const QString &path, bool local = true);
        /*!
         * Open file from local by path or net url.
         */

        MUSIC_SUPER_EXPORT QString toUnicode(const char *chars, const char *format = "GBK");
        /*!
         * Set string to unicode string by format.
         */
        MUSIC_SUPER_EXPORT QString toUnicode(const QByteArray &chars, const char *format = "GBK");
        /*!
         * Set string to unicode string by format.
         */
        MUSIC_SUPER_EXPORT QByteArray fromUnicode(const QString &chars, const char *format = "GBK");
        /*!
         * Set string from unicode string by format.
         */
        MUSIC_SUPER_EXPORT void setLocalCodec(const char *format = "utf-8");
        /*!
         * Set local codec by format.
         */
        MUSIC_SUPER_EXPORT const char *toLocal8Bit(const QString &str);
        /*!
         * Trasform string to local 8bit char.
         */
        MUSIC_SUPER_EXPORT const char *toUtf8(const QString &str);
        /*!
         * Trasform string to utf8 char.
         */

        MUSIC_SUPER_EXPORT void midTransferFile();
        /*!
         * Mid config file transfer operator.
         */
    }
}

#endif // MUSICCOREUTILS_H
