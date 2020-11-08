#ifndef ENCRYPT_H
#define ENCRYPT_H
#include <QString>
#include "aes.h"
#include <cmath>

class Cryptograph
{
public:
    Cryptograph();


    void encryptFileAES(QByteArray& input , QByteArray& output  );
    void setKey(QString key);



private:
   AES aes;
   uint8_t key[16];
   QString path;


};

#endif // ENCRYPT_H
