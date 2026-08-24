load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library( 
    name = "Shape",
    srcs = ["Shape.cpp"],
    hdrs = ["Shape.h"],
    visibility = [
       "//lib/Square:__pkg__",
       "//lib/Rectangle:__pkg__",
    ],
)
