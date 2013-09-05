/**
 * @file obex-capability.h
 * @copyright 2013 Jolla Ltd.
 * @author Bernd Wachter <bwachter@lart.info>
 * @date 2013
 */

#ifndef _OBEX_CAPABILITY_H
#define _OBEX_CAPABILITY_H

#include <QObject>
#include <QDomDocument>

class ObexCapability: public QObject {
    Q_OBJECT

    public:
        ObexCapability();

    private:
        QDomElement appendElement(QDomElement &parent, const QString &element, const QString &text);
        QDomElement appendChildren(QDomElement &parent, const QHash<QString, QString> &children);
        QDomElement appendElementWithChildren(QDomElement &parent, const QString &element,
                                              const QHash<QString, QString> &children);
        void getDeviceInfo();
        void getSyncMLServices();

    public slots:
        void run();

    private:
        QDomDocument *doc;
        QDomElement root;
};

#endif
