package com.example.myapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.example.myapplication.databinding.ActivityMainBinding


import android.widget.Button

class MainActivity : AppCompatActivity() {

    companion object {
        init {
            System.loadLibrary("myapplication")
        }
    }

    external fun onClick()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_main)

        val button = findViewById<Button>(R.id.button)

        button.setOnClickListener {
            onClick()
        }
    }
}