#include <jni.h>
#include <string>
#include "calculate.h"

extern "C"
JNIEXPORT jint JNICALL
Java_my_toru_rassignment_MainActivity_calculatedResultFromJNI(JNIEnv *env, jobject instance) {
    return calculate::incrementByOne();
}