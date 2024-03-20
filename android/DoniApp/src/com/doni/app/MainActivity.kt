package com.doni.app

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import android.widget.Toast

import com.doni.java.DoniLibNative

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Toast.makeText(this, DoniLibNative.helloWord(), Toast.LENGTH_LONG).show()
    }
}