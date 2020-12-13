cmake_minimum_required(VERSION 3.17)
project(UnicodeTest)

find_package(Java REQUIRED)
include(UseJava)
add_jar(java-test Test.java)
