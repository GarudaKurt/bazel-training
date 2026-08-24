load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library( 
    name = "Square",
    srcs = ["Square.cpp"],
    hdrs = ["Square.h"],
    deps = [ 
	    "//lib/Shape:Shape",
    ],
    visibility = [
        "//main:__pkg__",
        "//lib/Square/UnitTest:__pkg__",
    ],
 
)
