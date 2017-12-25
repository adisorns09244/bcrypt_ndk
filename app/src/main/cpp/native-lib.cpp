#include <jni.h>
#include <string>
#include "bcrypt/BCrypt.h"

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_app_ticketmelon_dev02_testbcry_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    char salt[BCRYPT_HASHSIZE];
    char hash[BCRYPT_HASHSIZE];
    int ret;
    ret = bcrypt_gensalt(12, salt);
   // std::string hash = BCrypt::generateHash(hello, 12);
    return env->NewStringUTF((const char *) ret);
}


