#include <jni.h>
#include <string>
#include "calculate.h"

extern "C" JNIEXPORT jstring JNICALL
Java_my_toru_rassignment_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint JNICALL
Java_my_toru_rassignment_MainActivity_calculatedResultFromJNI(JNIEnv *env, jobject instance) {

    return calculate::incrementByOne();
}

extern "C"
JNIEXPORT void JNICALL
Java_my_toru_rassignment_MainActivity_resetResult(JNIEnv *env, jobject instance) {

    // TODO

}