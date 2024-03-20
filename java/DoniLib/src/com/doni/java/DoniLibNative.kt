package com.doni.java

object DoniLibNative {
    init {
        System.loadLibrary("doni_jni.doni")
    }

    external fun helloWord(): String
}