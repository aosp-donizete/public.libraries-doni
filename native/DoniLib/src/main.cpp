#include <iostream>
#include <jni.h>
#include <another.hpp>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_doni_java_DoniLibNative_helloWord(JNIEnv *env, jobject) {
        std::string text = hello_world_from_another_lib();
        return env->NewStringUTF(text.c_str());
    }
}