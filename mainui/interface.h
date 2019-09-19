#ifndef INTERFACE_H
#define INTERFACE_H

#include <QStringList>

class CustomWidget;

enum FunType{
    SYSTEM,
    DEVICES,
    PERSONALIZED,
    NETWORK,
    ACCOUNT,
    TIME_LANGUAGE,
    SECURITY_UPDATES,
    MESSAGES_TASK,
    FUNCTOTALNUM,
};

class CommonInterface{
public:
    virtual ~CommonInterface(){}
    virtual QString get_plugin_name() = 0;
    virtual int get_plugin_type() = 0;
    virtual CustomWidget * get_plugin_ui() = 0;
    virtual void plugin_delay_control() = 0;
};

#define CommonInterface_iid "org.kycc.CommonInterface"

Q_DECLARE_INTERFACE(CommonInterface, CommonInterface_iid)

#endif // INTERFACE_H