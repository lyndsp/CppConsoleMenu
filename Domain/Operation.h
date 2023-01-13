#ifndef DOMAIN_OPERATION_H
#define DOMAIN_OPERATION_H


class Operation {
public:
    Operation() {}
    Operation(const char *menuText) : menuText{menuText}{}

    virtual const char * Menu();
private:
    const char * menuText = "Menu not set";
};


#endif //DOMAIN_OPERATION_H
