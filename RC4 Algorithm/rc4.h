//
// Created by farida on 07/10/18.
//

#ifndef RC4_ALGORITHM_RC4_H
#define RC4_ALGORITHM_RC4_H


class RC4{
public:

    void setKey(unsigned char * k,int size);

    void encrypt(unsigned char * in,unsigned char * out,int size);

    void encrypt(char * in,char * out,int size);
    RC4();
protected:
    void ksa(unsigned char * key);
    void swap(unsigned char data[],int i ,int j);
    void prga(unsigned char * plaintext,unsigned char * cipher,int size);
    void prga(char * plaintext,char * cipher,int size);
    unsigned char sbox[256];
    int sizeKey,prgaIndexA,prgaIndexB;
};

#endif //RC4_ALGORITHM_RC4_H
