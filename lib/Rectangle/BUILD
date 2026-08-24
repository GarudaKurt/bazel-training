load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library( 
    name = "Rectangle",
    srcs = ["Rectangle.cpp"],
    hdrs = ["Rectangle.h"],
    deps = [
	    "//lib/Shape:Shape",
    ],
    visibility = [
	    "//main:__pkg__",
         "//lib/Rectangle/UnitTest:__pkg__",],

)
