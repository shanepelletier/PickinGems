#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <iostream>

/* GIMP RGBA C-Source image dump (gem.c) */
static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[32 * 32 * 4 + 1];
} gem_icon = {
  32, 32, 4,
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  """2d\310\3772d\310\3772d\310\3772d\310\3772d\310\3772d\310\3772d\310\377"
  "2d\310\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0""2d"
  "\310\377\353\357\372\377\353\357\372\377\353\357\372\377\353\357\372\377"
  "\353\357\372\377\255\303\361\377\353\357\372\377\255\303\361\3772d\310\377"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\34B\223\377\34B\223\377\34B\223\3772d\310\377\353\357\372\377\353\357\372"
  "\377\353\357\372\377\255\303\361\377\255\303\361\377\255\303\361\377\353"
  "\357\372\377\255\303\361\377\255\303\361\377x\232\336\3772d\310\377\34B\223"
  "\377\34B\223\377\34B\223\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0""2d\310\3772d\310\3772d\310\377s\226\335\377s"
  "\226\335\377\353\357\372\377\353\357\372\377\353\357\372\377\255\303\361"
  "\377\353\357\372\377\353\357\372\377\353\357\372\377\255\303\361\377\255"
  "\303\361\377x\232\336\377x\232\336\377x\232\336\377s\226\335\3772d\310\377"
  "2d\310\3772d\310\3772d\310\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0""2d\310"
  "\377\255\303\361\377s\226\335\377f\214\332\377f\214\332\377s\226\335\377"
  "s\226\335\377\255\303\361\377\255\303\361\377\353\357\372\377\255\303\361"
  "\377\255\303\361\377\255\303\361\377x\232\336\377x\232\336\377x\232\336\377"
  "s\226\335\377s\226\335\377f\214\332\377s\226\335\377s\226\335\377s\226\335"
  "\377s\226\335\3772d\310\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0""2d\310\3772d\310\377\255\303\361\377s\226\335"
  "\377f\214\332\377f\214\332\377s\226\335\377s\226\335\3772d\310\377s\226\335"
  "\377\255\303\361\377\255\303\361\377\255\303\361\377x\232\336\377x\232\336"
  "\377x\232\336\377x\232\336\377x\232\336\377s\226\335\3772d\310\377s\226\335"
  "\377\255\303\361\377f\214\332\377f\214\332\377s\226\335\377s\226\335\377"
  "2d\310\3772d\310\377\377\0\377\0\377\0\377\0\377\0\377\0""2d\310\377s\226"
  "\335\377\255\303\361\377s\226\335\377f\214\332\377s\226\335\377s\226\335"
  "\377s\226\335\377s\226\335\377s\226\335\377\255\303\361\3772d\310\377s\226"
  "\335\377s\226\335\3772d\310\377s\226\335\3772d\310\3772d\310\377s\226\335"
  "\377\255\303\361\3772d\310\377s\226\335\377s\226\335\377s\226\335\377f\214"
  "\332\377f\214\332\377f\214\332\377s\226\335\377s\226\335\3772d\310\377\377"
  "\0\377\0""2d\310\3772d\310\3772d\310\377s\226\335\377f\214\332\377s\226\335"
  "\377s\226\335\377s\226\335\377s\226\335\377\353\357\372\377\255\303\361\377"
  "\255\303\361\377s\226\335\377x\232\336\377\255\303\361\377x\232\336\377x"
  "\232\336\377x\232\336\377x\232\336\377s\226\335\377\353\357\372\377\255\303"
  "\361\377\255\303\361\3772d\310\377\255\303\361\377s\226\335\377s\226\335"
  "\377f\214\332\377s\226\335\3772d\310\3772d\310\3772d\310\3772d\310\377\255"
  "\303\361\377\255\303\361\3772d\310\3772d\310\377s\226\335\377s\226\335\377"
  "s\226\335\377\353\357\372\377\255\303\361\377\255\303\361\377\255\303\361"
  "\377\255\303\361\377s\226\335\377s\226\335\377\255\303\361\377s\226\335\377"
  "s\226\335\3772d\310\377\353\357\372\377\255\303\361\377\255\303\361\377\255"
  "\303\361\377\255\303\361\377s\226\335\377s\226\335\377s\226\335\3772d\310"
  "\3772d\310\377\255\303\361\377\255\303\361\3772d\310\3772d\310\3772d\310"
  "\377\255\303\361\377\255\303\361\377\255\303\361\377x\232\336\377x\232\336"
  "\377\255\303\361\377\255\303\361\377\255\303\361\377\255\303\361\377\255"
  "\303\361\377\255\303\361\377\255\303\361\3772d\310\377s\226\335\377s\226"
  "\335\377s\226\335\377\353\357\372\377\353\357\372\377\255\303\361\377\255"
  "\303\361\377\255\303\361\377\255\303\361\377\255\303\361\377x\232\336\377"
  "x\232\336\377\255\303\361\377\255\303\361\377\255\303\361\3772d\310\3772"
  "d\310\3772d\310\377x\232\336\3772d\310\3772d\310\377\255\303\361\377x\232"
  "\336\377\353\357\372\377x\232\336\377x\232\336\377x\232\336\3772d\310\377"
  "2d\310\3772d\310\377\34B\223\377\34B\223\377\34B\223\377\34B\223\377\34B"
  "\223\377\34B\223\3772d\310\3772d\310\3772d\310\377x\232\336\377x\232\336"
  "\377x\232\336\377\353\357\372\377x\232\336\377\255\303\361\3772d\310\377"
  "2d\310\377Y\204\333\3772d\310\3772d\310\377x\232\336\377Y\204\333\377Y\204"
  "\333\377x\232\336\377\353\357\372\377\353\357\372\377\353\357\372\377\353"
  "\357\372\377\353\357\372\3772d\310\377s\226\335\377s\226\335\377s\226\335"
  "\377Lx\320\377Lx\320\377Lx\320\377Lx\320\377s\226\335\377s\226\335\377s\226"
  "\335\3772d\310\377\353\357\372\377\353\357\372\377\353\357\372\377\353\357"
  "\372\377\353\357\372\377x\232\336\377Y\204\333\377x\232\336\377Y\204\333"
  "\3772d\310\377\377\0\377\0""2d\310\377x\232\336\377Y\204\333\377Y\204\333"
  "\377x\232\336\377x\232\336\377\353\357\372\377\353\357\372\3772d\310\377"
  "s\226\335\377s\226\335\377s\226\335\377s\226\335\377s\226\335\377Lx\320\377"
  "Lx\320\377s\226\335\377s\226\335\377s\226\335\377s\226\335\377s\226\335\377"
  "2d\310\377\353\357\372\377\353\357\372\377x\232\336\377x\232\336\377\34B"
  "\223\377x\232\336\377Y\204\333\3772d\310\377\377\0\377\0\377\0\377\0""2d"
  "\310\377x\232\336\377Y\204\333\377Y\204\333\377\34B\223\377Lx\320\377x\232"
  "\336\377x\232\336\3772d\310\377Lx\320\377Lx\320\3772d\310\377Lx\320\3772"
  "d\310\377\34B\223\377\34B\223\3772d\310\377Lx\320\3772d\310\377Lx\320\377"
  "2d\310\3772d\310\377x\232\336\377x\232\336\377Lx\320\377\34B\223\377\34B"
  "\223\377x\232\336\377Y\204\333\3772d\310\377\377\0\377\0\377\0\377\0\377"
  "\0\377\0""2d\310\377Y\204\333\377Y\204\333\377\34B\223\377\34B\223\377x\232"
  "\336\377x\232\336\377\34B\223\377x\232\336\377x\232\336\377Lx\320\377Lx\320"
  "\377Lx\320\377\34B\223\377\34B\223\377x\232\336\377x\232\336\377x\232\336"
  "\377Lx\320\377Lx\320\377\34B\223\377x\232\336\377Lx\320\377\34B\223\377L"
  "x\320\377\34B\223\377Y\204\333\3772d\310\377\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0""2d\310\377Y\204\333\377\34B\223\377\34"
  "B\223\377x\232\336\377Lx\320\377\34B\223\377x\232\336\377Lx\320\377Lx\320"
  "\377Lx\320\377Lx\320\377\34B\223\377\34B\223\377x\232\336\377Lx\320\377L"
  "x\320\377Lx\320\377Lx\320\377\34B\223\377x\232\336\377Lx\320\377\34B\223"
  "\377Lx\320\377\34B\223\3772d\310\377\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0""2d\310\377\34B\223\377"
  "Lx\320\377\34B\223\377Lx\320\377Lx\320\377\34B\223\377Lx\320\377Lx\320\377"
  "Lx\320\377\34B\223\377Lx\320\377!M\245\377\34B\223\377Lx\320\377Lx\320\377"
  "Lx\320\377\34B\223\377Lx\320\377Lx\320\377\34B\223\377Lx\320\377!M\245\377"
  "\34B\223\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0""2d\310\377\34B\223\377!M\245\377Lx"
  "\320\377\34B\223\377Lx\320\377\34B\223\377Lx\320\377Lx\320\377Lx\320\377"
  "\34B\223\377Lx\320\377!M\245\377\34B\223\377Lx\320\377Lx\320\377Lx\320\377"
  "\34B\223\377Lx\320\377\34B\223\377Lx\320\377!M\245\377!M\245\377\34B\223"
  "\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\34B\223\377!M\245\377!M\245\377Lx"
  "\320\377\34B\223\377\34B\223\377Lx\320\377Lx\320\377Lx\320\377\34B\223\377"
  "!M\245\377!M\245\377\34B\223\377Lx\320\377Lx\320\377Lx\320\377\34B\223\377"
  "\34B\223\377Lx\320\377!M\245\377!M\245\377\34B\223\377\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\34B\223\377!M\245\377Lx\320\377"
  "\34B\223\377Lx\320\377\34B\223\377Lx\320\377\34B\223\377Lx\320\377!M\245"
  "\377!M\245\377!M\245\377\34B\223\377Lx\320\377\34B\223\377Lx\320\377\34B"
  "\223\377!M\245\377!M\245\377\34B\223\377\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\34B\223\377!M\245\377"
  "!M\245\377\34B\223\377\34B\223\377Lx\320\377\34B\223\377!M\245\377!M\245"
  "\377!M\245\377!M\245\377\34B\223\377Lx\320\377\34B\223\377\34B\223\377!M"
  "\245\377!M\245\377\34B\223\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\34B\223\377\20\"F"
  "\377\20\"F\377\20\"F\377\20\"F\377\34B\223\377!M\245\377Lx\320\377!M\245"
  "\377!M\245\377!M\245\377!M\245\377\34B\223\377\20\"F\377\20\"F\377\20\"F"
  "\377\20\"F\377\34B\223\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\20\"F\377"
  "\27""3k\377\27""3k\377\27""3k\377\34B\223\377Lx\320\377!M\245\377!M\245\377"
  "!M\245\377!M\245\377!M\245\377\34B\223\377\27""3k\377\27""3k\377\27""3k\377"
  "\20\"F\377\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\20\""
  "F\377\27""3k\377\27""3k\377\34B\223\377Lx\320\377!M\245\377!M\245\377!M\245"
  "\377!M\245\377!M\245\377\34B\223\377\27""3k\377\27""3k\377\20\"F\377\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\20\"F\377\27""3k\377\27""3k\377\25/c\377!M\245\377!M\245\377!M\245"
  "\377!M\245\377\25/c\377\27""3k\377\27""3k\377\20\"F\377\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\20\"F\377\27""3k\377\27""3k\377\25/c\377!M\245\377!M\245\377!M\245"
  "\377!M\245\377\25/c\377\27""3k\377\27""3k\377\20\"F\377\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0"
  "\377\0\377\0\377\0\20\"F\377\27""3k\377\25/c\377!M\245\377!M\245\377!M\245"
  "\377!M\245\377\25/c\377\27""3k\377\20\"F\377\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\20\"F\377\27""3k\377\25/c\377!M\245\377"
  "!M\245\377\25/c\377\27""3k\377\20\"F\377\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\20\"F\377\25/c\377!M\245"
  "\377!M\245\377\25/c\377\20\"F\377\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\20\"F\377\27""3"
  "k\377\25/c\377\25/c\377\27""3k\377\20\"F\377\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\20\"F\377\25/c\377\25/c\377\20\"F\377\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\25/c\377\25/c\377\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377\0\377"
  "\0\377\0\377\0",
};

bool isColliding (sf::IntRect rectA, sf::IntRect rectB)
{	
	if (rectA.Left < rectB.Left + rectB.Right &&
			rectA.Left + rectA.Right > rectB.Left &&
			rectA.Top < rectB.Top + rectB.Bottom &&
			rectA.Top + rectA.Right > rectB.Top)
	{
		return true;
	}
	return false;
}

sf::IntRect getRegionCoordinates(sf::Vector2f pos, int width, int height)
{
	sf::IntRect temp;
	temp.Left = pos.x;
	temp.Right = width;
	temp.Top = pos.y;
	temp.Bottom = height;

	return temp;
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480, 32), "Pickin' Gems");
	window.SetFramerateLimit(30);
	window.SetIcon(gem_icon.width,  gem_icon.height,  gem_icon.pixel_data);
	sf::Image grassImage;
	grassImage.LoadFromFile("grass.png");
	grassImage.SetSmooth(false);
	sf::Sprite grass;
	grass.SetImage(grassImage);

	sf::Image gemImage;
	gemImage.LoadFromFile("gem.png");
	gemImage.CreateMaskFromColor(sf::Color(255, 0, 255));
	gemImage.SetSmooth(false);
	sf::Sprite gem;
	gem.SetImage(gemImage);

	sf::Image player1Image;
	player1Image.LoadFromFile("ayne.png");
	player1Image.CreateMaskFromColor(sf::Color(255, 0, 255));
	player1Image.SetSmooth(false);
	sf::Sprite player1(player1Image);

	sf::Image player2Image;
	player2Image.LoadFromFile("elliot.png");
	player2Image.CreateMaskFromColor(sf::Color(255, 0, 255));
	player2Image.SetSmooth(false);
	sf::Sprite player2(player2Image);

	sf::Image pressEnterToStartImage;
	pressEnterToStartImage.LoadFromFile("pressEnterToStart.png");
	pressEnterToStartImage.SetSmooth(false);
	sf::Sprite pressEnterToStart(pressEnterToStartImage);

	sf::Image humanSelectedImage;
	humanSelectedImage.LoadFromFile("humanSelected.png");
	humanSelectedImage.SetSmooth(false);
	sf::Sprite humanSelectedSprite(humanSelectedImage);	

	sf::Image computerSelectedImage;
	computerSelectedImage.LoadFromFile("computerSelected.png");
	computerSelectedImage.SetSmooth(false);
	sf::Sprite computerSelectedSprite(computerSelectedImage);

	sf::Image gameOverScreenImage;
	gameOverScreenImage.LoadFromFile("gameOverScreen.png");
	gameOverScreenImage.SetSmooth(false);
	sf::Sprite gameOverScreen(gameOverScreenImage);

	sf::Music backgroundMusic;
	backgroundMusic.OpenFromFile("background.ogg");
	backgroundMusic.SetLoop(true);

	sf::SoundBuffer gemPickupBuffer;
	gemPickupBuffer.LoadFromFile("gemCollect.wav");
	sf::Sound gemPickup;
	gemPickup.SetBuffer(gemPickupBuffer);

	sf::Font font;
	font.LoadFromFile("Halo11.ttf");
	sf::String player1ScoreToPrint;
	sf::String player2ScoreToPrint;
	sf::String timerPrint;
	sf::String gameOverPrint;
	player1ScoreToPrint.SetFont(font);
	player1ScoreToPrint.SetSize(24);
	player2ScoreToPrint.SetFont(font);
	player2ScoreToPrint.SetSize(24);
	timerPrint.SetFont(font);
	timerPrint.SetSize(24);
	gameOverPrint.SetFont(font);
	gameOverPrint.SetSize(24);

	float player1Frame = 1;
	float player2Frame = 1;
	int player1Score = 0;
	int player2Score = 0;
	char buffer1[256];
	char buffer2[256];
	char buffer3[256];
	char buffer4[256];
	sf::Vector2f player1Pos;
	sf::Vector2f player2Pos;
	enum Direction {DOWN = 0, UP = 1, LEFT = 2, RIGHT = 3};
	enum State {MAIN_MENU = 0, PLAYER_SELECT = 1, GAME = 2, GAME_OVER = 3};
	State gameState = MAIN_MENU;
	bool humanSelected = true;
	bool computerSelected = false;
	bool enterPressed = false;
	bool downPressed = false;
	bool upPressed = false;
	bool backgroundMusicPlaying = true;
	Direction player1Direction = DOWN;
	Direction player2Direction = DOWN;
	bool player1Moving = false;
	bool player2Moving = false;
	bool player1Animating = false;
	bool player2Animating = false;
	sf::Vector2f gemPos;
	srand(time(NULL));
	gemPos.x = (int)rand() % (640 - 32);
	gemPos.y = (int)rand() % (480 - 32);
	int time = 1800;
	bool gameOver = false;
	bool fullscreen = false;
	while (window.IsOpened())
	{
		sf::Event event;
		while (window.GetEvent(event))
		{
			if (event.Type == sf::Event::Closed)
			{
				window.Close();
			}
			if ((event.Type == sf::Event::KeyPressed) &&
			    (event.Key.Code == sf::Key::Escape))
			{
				window.Close();
			}
			if ((event.Type == sf::Event::KeyPressed) &&
			    (event.Key.Code == sf::Key::Return))
			{
				enterPressed = true;
			}
			if ((event.Type == sf::Event::KeyPressed) &&
			    (event.Key.Code == sf::Key::Up))
			{
				upPressed = true;
			}
			if ((event.Type == sf::Event::KeyPressed) &&
			    (event.Key.Code == sf::Key::Down))
			{
				downPressed = true;
			}
		}
		switch (gameState)
		{
			case MAIN_MENU:
				window.Draw(pressEnterToStart);
				if (enterPressed)
				{
					enterPressed = false;
					gameState = PLAYER_SELECT;
				}
				break;
			case PLAYER_SELECT:
				if (humanSelected)
				{
					window.Draw(humanSelectedSprite);
				}
				else if (computerSelected)
				{
					window.Draw(computerSelectedSprite);
				}
				if (upPressed)
				{
					if (computerSelected)
					{
						computerSelected = false;
						humanSelected = true;
					}
					else if (humanSelected)
					{
						humanSelected = false;
						computerSelected = true;
					}
					upPressed = false;
				}
				else if (downPressed)
				{
					if (humanSelected)
					{
						humanSelected = false;
						computerSelected = true;
					}
					else if (computerSelected)
					{
						computerSelected = false;
						humanSelected = true;
					}
					downPressed = false;
				}
				if (enterPressed)
				{
					enterPressed = false;
					gameState = GAME;
				}
				break;
			case GAME:
			{
				--time;
				if (backgroundMusicPlaying)
				{
					backgroundMusicPlaying = false;
					backgroundMusic.Play();
				}
				for (int i = 0; i < 640 / 32; i++)
				{
					for (int j = 0; j < 480 / 32; j++)
					{
						grass.SetPosition(i * 32, 
						                  j * 32);
						window.Draw(grass);
					}
				}	
				gem.SetPosition(gemPos);

				if (window.GetInput().IsKeyDown(sf::Key::Left))
				{
					player1Direction = LEFT;
					player1Animating = true;
					player1.Move(-3, 0);
				}
				else if (window.GetInput().IsKeyDown(sf::Key::Right))
				{
					player1Direction = RIGHT;
					player1Animating = true;
					player1.Move(3, 0);
				}
				else if (window.GetInput().IsKeyDown(sf::Key::Up))
				{
					player1Direction = UP;
					player1Animating = true;
					player1.Move(0, -3);
				}
				else if (window.GetInput().IsKeyDown(sf::Key::Down))
				{
					player1Direction = DOWN;
					player1Animating = true;
					player1.Move(0, 3);
				}
				if (humanSelected)
				{
					if (window.GetInput().IsKeyDown(sf::Key::A))
					{
						player2Direction = LEFT;
						player2Animating = true;
						player2.Move(-3, 0);
					}
					else if (window.GetInput().IsKeyDown(sf::Key::D))
					{
						player2Direction = RIGHT;
						player2Animating = true;
						player2.Move(3, 0);
					}
					else if (window.GetInput().IsKeyDown(sf::Key::W))
					{
						player2Direction = UP;
						player2Animating = true;
						player2.Move(0, -3);
					}
					else if (window.GetInput().IsKeyDown(sf::Key::S))
					{
						player2Direction = DOWN;
						player2Animating = true;
						player2.Move(0, 3);
					}
				}
				else if (computerSelected)
				{
					if ((int)player2Pos.x < (int)gemPos.x)
					{
						if (gemPos.x - player2Pos.x < 2)
						{
							player2.Move(1, 0);
						}
						else
						{
							player2.Move(2, 0);
						}
						player2Direction = RIGHT;
						player2Animating = true;
					}
					else if ((int)player2Pos.y >
					         (int)gemPos.y)
					{	
						if (player2Pos.y - gemPos.y < 2)
						{
							player2.Move(0, -1);
						}
						else
						{
							player2.Move(0, -2);
						}
						player2Direction = UP;
						player2Animating = true;
					}
					else if ((int)player2Pos.x >
					         (int)gemPos.x)
					{
						if (player2Pos.x - gemPos.x < 2)
						{
							player2.Move(-1, 0);
						}
						else
						{
							player2.Move(-2, 0);
						}
						player2Direction = LEFT;
						player2Animating = true;
					}
					else if ((int)player2Pos.y <
					         (int)gemPos.y)
					{

						if (gemPos.y - player2Pos.y < 2)
						{
							player2.Move(0, 1);
						}
						else
						{
							player2.Move(0, 2);
						}
						player2Direction = DOWN;
						player2Animating = true;
					}
					else if ((int)player2Pos.x >
					         (int)gemPos.x)
					{
						if (player2Pos.x - gemPos.x < 2)
						{
							player2.Move(-1, 0);
						}
						else
						{
							player2.Move(-2, 0);
						}
						player2Direction = LEFT;
						player2Animating = true;
					}
				}
				if (player1Animating)
				{
					player1Frame += 0.25;
					if (player1Frame > 3)
					{
						player1Frame = 0;
					}
					player1Animating = false;
				}

				if (player2Animating)
				{
					player2Frame += 0.25;
					if (player2Frame > 3)
					{
						player2Frame = 0;
					}
					player2Animating = false;
				}
				player1Pos = player1.GetPosition();
				player2Pos = player2.GetPosition();

				if (player1Pos.x < 0)
				{
					player1.SetX(0);
				}
				else if (player1Pos.x + 32 > 640)
				{
					player1.SetX(640 - 32);
				}
				if (player1Pos.y < 0)
				{
					player1.SetY(0);
				}
				else if (player1Pos.y + 48 > 480)
				{
					player1.SetY(480 - 48);
				}
				if (player2Pos.x < 0)
				{
					player2.SetX(0);
				}
				else if (player2Pos.x + 32 > 640)
				{
					player2.SetX(640 - 32);
				}
				if (player2Pos.y < 0)
				{
					player2.SetY(0);
				}
				else if (player2Pos.y + 48 > 480)
				{
					player2.SetY(480 - 48);
				}
				if (isColliding(getRegionCoordinates(gemPos, 32, 32),
							getRegionCoordinates(player1Pos, 32,
								48)))
				{
					gemPos.x = (int)rand() % (640 - 32);
					gemPos.y = (int)rand() % (480 - 32);
					gemPickup.Play();
					player1Score += 10;
				}
				if (isColliding(getRegionCoordinates(gemPos, 32 + 3, 32 + 3),
							getRegionCoordinates(player2Pos, 32,
								48)))
				{
					gemPos.x = (int)rand() % (640 - 32);
					gemPos.y = (int)rand() % (480 - 32);
					gemPickup.Play();
					player2Score += 10;
				}
				sprintf(buffer1, "Player 1's Score: %d", player1Score);
				sprintf(buffer2, "Player 2's Score: %d", player2Score);
				sprintf(buffer3, "Time left: %d", time / 30);
				player1ScoreToPrint.SetText(buffer1);
				player2ScoreToPrint.SetText(buffer2);
				timerPrint.SetText(buffer3);
				player1ScoreToPrint.SetColor(sf::Color(0, 0, 0));
				player2ScoreToPrint.SetColor(sf::Color(0, 0, 0));
				timerPrint.SetColor(sf::Color(0, 0, 0));
				player1ScoreToPrint.SetX(0);
				player1ScoreToPrint.SetY(0);
				player2ScoreToPrint.SetX(0);
				player2ScoreToPrint.SetY(24);
				timerPrint.SetX(0);
				timerPrint.SetY(48);

				int player1SpritesheetX = (int)player1Frame * 32;
				int player1SpritesheetY = player1Direction * 48;
				int player2SpritesheetX = (int)player2Frame * 32;
				int player2SpritesheetY = player2Direction * 48;

				player1.SetSubRect(sf::IntRect(player1SpritesheetX, 
							player1SpritesheetY,
							player1SpritesheetX + 32,
							player1SpritesheetY + 48));

				player2.SetSubRect(sf::IntRect(player2SpritesheetX,
							player2SpritesheetY, 
							player2SpritesheetX + 32,
							player2SpritesheetY + 48));

				window.Draw(gem);
				window.Draw(player2);
				window.Draw(player1);
				window.Draw(player1ScoreToPrint);
				window.Draw(player2ScoreToPrint);
				window.Draw(timerPrint);
				if (time / 30 == 0)
				{
					gameState = GAME_OVER;
				}
				break;
			}
			case GAME_OVER:
			{
				if (player1Score < player2Score)
				{
					sprintf(buffer4, "Congratulations, Player 2! You win!");			
				}
				else if (player1Score > player2Score)
				{
					sprintf(buffer4, "Congratulations, Player 1! You win!");
				}
				else
				{
					sprintf(buffer4, "It's a tie!");
				}
				gameOverPrint.SetText(buffer4);
				gameOverPrint.SetColor(sf::Color(0, 0, 0));
				sf::FloatRect rect(gameOverPrint.GetRect()); 
   				sf::Vector2f pos(window.GetWidth() / 2 - rect.GetWidth() / 2,
				                 window.GetHeight() / 2 - rect.GetHeight() / 2);
				gameOverPrint.SetPosition(pos);
				window.Draw(gameOverScreen);
				window.Draw(gameOverPrint);
				if (enterPressed)
				{
					enterPressed = false;
					gameState = MAIN_MENU;
					time = 1800;
					player1Score = 0;
					player2Score = 0;
					player1Frame = 1;
					player2Frame = 1;
					player1.SetPosition(0, 0);
					player2.SetPosition(0, 0);
					player1Direction = DOWN;
					player2Direction = DOWN;
					upPressed = false;
					downPressed = false;
					humanSelected = true;
				}
				break;
			}
		}
		window.Display();
		window.Clear();
	}

	return 0;
}
